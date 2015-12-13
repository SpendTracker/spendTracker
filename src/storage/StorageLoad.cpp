//
// Created by Bao Jun on 12/12/15.
//

#include <iostream>
#include <fstream>
#include <map>
#include <json.h>
#include "StorageLoad.h"
#include "account/Account.h"

const std::string DEFAULT_FILENAME = "SpendTrackerData.txt";

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
        expense[Account::CLOTHES] = (*it)[Account::ACCOUNT_EXPENSE_CATEGORY][Account::EXPENSE_CLOTHES].asInt();
        expense[Account::ENTERTAINMENT] = (*it)[Account::ACCOUNT_EXPENSE_CATEGORY][Account::EXPENSE_ENTERTAINMENT].asInt();
        expense[Account::FOOD] = (*it)[Account::ACCOUNT_EXPENSE_CATEGORY][Account::EXPENSE_FOOD].asInt();
        expense[Account::HEALTH] = (*it)[Account::ACCOUNT_EXPENSE_CATEGORY][Account::EXPENSE_HEALTH].asInt();
        expense[Account::TRANSPORT] = (*it)[Account::ACCOUNT_EXPENSE_CATEGORY][Account::EXPENSE_TRANSPORT].asInt();

        Account account = Account((*it)[Account::ACCOUNT_DATE].asString(),
                                  (*it)[Account::ACCOUNT_BALANCE].asInt(),
                                  (*it)[Account::ACCOUNT_INCOME].asInt(),
                                  (*it)[Account::ACCOUNT_EXPENSE].asInt(),
                                  expense);
        allData[(*it)["date"].asString()] = account;
    }

    in.close();

    return allData;
}