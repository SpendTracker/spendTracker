//
// Created by Bao Jun on 12/12/15.
//

#include <unordered_map>
#include <string>
#include <json.h>

#ifndef SPENDTRACKER_ACCOUNT_H
#define SPENDTRACKER_ACCOUNT_H

class Account {

public:

    enum Category {
        CLOTHES, ENTERTAINMENT, FOOD, HEALTH, TRANSPORT
    };

    Account();
    Account(std::string date, int balance, int income, int expense,
            std::map<Category, int> expense_category);
    virtual ~Account();

    const std::string& date() const;
    const int& balance() const;
    const int& income() const;
    const int& expense() const;
    const std::map<Category, int>& expense_category() const;

    void date(const std::string& date);
    void balance(const int& balance);
    void income(const int& income);
    void expense(const int& expense);
    void expense_category(const std::map<Category, int>& expense_category);

    Json::Value toJson(std::string key);

private:
    int balance_;
    int income_;
    int expense_;
    std::map<Category, int> expense_category_;
    std::string date_;

    Json::Value getExpenseJson();
};

#endif //SPENDTRACKER_ACCOUNT_H
