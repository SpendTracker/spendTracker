//
// Created by Bao Jun on 12/12/15.
//

#include <map>
#include <string>

#ifndef SPENDTRACKER_ACCOUNT_H
#define SPENDTRACKER_ACCOUNT_H


class Account {
public:
    enum Category {
        CLOTHES, ENTERTAINMENT, FOOD, HEALTH, TRANSPORT
    };

    Account();
    Account(int id, int balance, int income,
            std::map<Account::Category, int> expense, std::string date);
    virtual ~Account();

    const int& id() const;
    const int& balance() const;
    const int& income() const;
    const std::map<Account::Category, int>& expense() const;
    const std::string& date() const;

    void id(const int& id);
    void balance(const int& balance);
    void income(const int& income);
    void expense(const std::map<Account::Category, int>& expense);
    void date(const std::string& date);

    void toJson();

private:
    int id_;
    int balance_;
    int income_;
    std::map<Account::Category, int> expense_;
    std::string date_;
};

#endif //SPENDTRACKER_ACCOUNT_H
