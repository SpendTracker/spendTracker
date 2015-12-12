//
// Created by Bao Jun on 12/12/15.
//

#include <cassert>
#include "Account.h"

Account::Account() {
    id_ = 0;
    balance_ = 0;
    income_ = 0;
}

Account::Account(int id, int balance, int income,
                 std::map<Account::Category, int> expense, std::string date) {

    assert(id >= 0);
    assert(income >= 0);

    id_ = id;
    balance_ = balance;
    income_ = income;
    expense_ = expense;
    date_ = date;
}

Account::~Account() {

}

const int& Account::id() const {
    return id_;
}

const int& Account::balance() const {
    return balance_;
}

const int& Account::income() const {
    return income_;
}

const std::map<Account::Category, int>& Account::expense() const {
    return expense_;
}

const std::string& Account::date() const {
    return date_;
}

void Account::id(const int& id) {
    id_ = id;
}

void Account::balance(const int& balance) {
    balance_ = balance;
}

void Account::income(const int& income) {
    income_ = income;
}

void Account::expense(const std::map<Account::Category, int>& expense) {
    expense_ = expense;
}

void Account::date(const std::string& date) {
    date_ = date;
}

void Account::toJson() {

}