//
// Created by Bao Jun on 12/12/15.
//

#include <iostream>
#include <fstream>
#include "StorageSave.h"
#include "account/Account.h"

const std::string DEFAULT_FILENAME = "SpendTrackerData.txt";
const std::string SUCCESS_MESSAGE_SAVE_DATA = "Successfully saved data.";
const std::string ERROR_MESSAGE_OPEN_FILE = "Unable to open file.";

StorageSave::StorageSave() {
    // TODO Auto-generated constructor stub

}

StorageSave::~StorageSave() {
    // TODO Auto-generated destructor stub
}

std::string StorageSave::execute(std::map<std::string, Account> allData) {

    std::string message;
    std::ofstream out(DEFAULT_FILENAME, std::ofstream::out | std::ofstream::trunc);
    Json::Value trackJson(Json::objectValue);

    if(!out.is_open()) {
        message = ERROR_MESSAGE_OPEN_FILE;
    } else {
        for (std::map<std::string, Account>::iterator
                     it = allData.begin(); it != allData.end(); ++it) {
            trackJson[it->first] = it->second.toJson(it->first);
        }

        out << trackJson;
        message = SUCCESS_MESSAGE_SAVE_DATA;
    }
    std::cout << trackJson.toStyledString() << std::endl;
    out.close();

    return message;
}
