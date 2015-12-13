//
// Created by Bao Jun on 12/12/15.
//

#include <map>
#include <cassert>
#include <json.h>
#include "Account.h"

const std::string Account::ACCOUNT_DATE = "date";
const std::string Account::ACCOUNT_BALANCE = "balance";
const std::string Account::ACCOUNT_INCOME = "income";
const std::string Account::ACCOUNT_EXPENSE = "expense";
const std::string Account::ACCOUNT_EXPENSE_CATEGORY = "expense_category";

const std::string Account::EXPENSE_CLOTHES = "clothes";
const std::string Account::EXPENSE_ENTERTAINMENT = "clothes";
const std::string Account::EXPENSE_FOOD = "food";
const std::string Account::EXPENSE_HEALTH = "health";
const std::string Account::EXPENSE_TRANSPORT = "transport";

Account::Account() {
    balance_ = 0;
    income_ = 0;
}

Account::Account(std::string date, int balance, int income, int expense,
                 std::map<Account::Category, int> expense_category) {

    assert(income >= 0);
    assert(expense >= 0);
    assert(!date.empty());

    date_ = date;
    balance_ = balance;
    income_ = income;
    expense_ = expense;
    expense_category_ = expense_category;
}

Account::~Account() {

}

const std::string& Account::date() const {
    return date_;
}

const int& Account::balance() const {
    return balance_;
}

const int& Account::income() const {
    return income_;
}

const int& Account::expense() const {
    return expense_;
}

void Account::date(const std::string& date) {
    date_ = date;
}

const std::map<Account::Category, int>& Account::expense_category() const {
    return expense_category_;
}

void Account::balance(const int& balance) {
    balance_ = balance;
}

void Account::income(const int& income) {
    income_ = income;
}

void Account::expense(const int& expense) {
    expense_ = expense;
}

void Account::expense_category(const std::map<Account::Category, int>& expense_category) {
    expense_category_ = expense_category;
}

Json::Value Account::toJson(std::string key) {

    Json::Value root;
    Json::Value account = root[key];

    account[ACCOUNT_DATE] = date_;
    account[ACCOUNT_BALANCE] = balance_;
    account[ACCOUNT_INCOME] = income_;
    account[ACCOUNT_EXPENSE] = expense_;
    account[ACCOUNT_EXPENSE_CATEGORY] = getExpenseJson();

    return account;
}

Json::Value Account::getExpenseJson() {

    Json::Value expense;

    expense[EXPENSE_CLOTHES] = expense_category_[CLOTHES];
    expense[EXPENSE_ENTERTAINMENT] = expense_category_[ENTERTAINMENT];
    expense[EXPENSE_FOOD] = expense_category_[FOOD];
    expense[EXPENSE_HEALTH] = expense_category_[HEALTH];
    expense[EXPENSE_TRANSPORT] = expense_category_[TRANSPORT];

    return expense;
}