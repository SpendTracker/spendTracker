//
// Created by Bao Jun on 12/12/15.
//

#include <iostream>
#include <fstream>
#include <map>
#include <json.h>
#include "StorageLoad.h"
#include "account/Account.h"

const std::string DEFAULT_FILENAME = "test.txt";

StorageLoad::StorageLoad() {
    // TODO Auto-generated constructor stub

}

StorageLoad::~StorageLoad() {
    // TODO Auto-generated destructor stub

}

std::map<std::string, Account> StorageLoad::execute() {

    std::ifstream in(DEFAULT_FILENAME);
    std::map<std::string, Account> allData;
    Json::Value trackJson;

    in >> trackJson;

    for(Json::Value::iterator it = trackJson.begin(); it != trackJson.end(); ++it) {

        std::map<Account::Category, int> expense;
        expense[Account::CLOTHES] = (*it)["expense_category"]["clothes"].asInt();
        expense[Account::ENTERTAINMENT] = (*it)["expense_category"]["entertainment"].asInt();
        expense[Account::FOOD] = (*it)["expense_category"]["food"].asInt();
        expense[Account::HEALTH] = (*it)["expense_category"]["health"].asInt();
        expense[Account::FOOD] = (*it)["expense_category"]["health"].asInt();

        Account account = Account((*it)["date"].asString(),
                                  (*it)["balance"].asInt(),
                                  (*it)["income"].asInt(),
                                  (*it)["expense"].asInt(),
                                  expense);
        allData[(*it)["date"].asString()] = account;
    }

    in.close();

    return allData;
}