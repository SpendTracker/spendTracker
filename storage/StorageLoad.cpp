//
// Created by Bao Jun on 12/12/15.
//

#include <iostream>
#include <fstream>
#include "StorageLoad.h"
#include "account/Account.h"

const std::string DEFAULT_FILENAME = "SpendTrackerData.txt";

StorageLoad::StorageLoad() {
    // TODO Auto-generated constructor stub

}

StorageLoad::~StorageLoad() {
    // TODO Auto-generated destructor stub

}

std::string StorageLoad::readfile(std::ifstream &file) {

    std::string line;
    std::string textData;

    while(file.good()) {
        getline(file, line);
        textData += line;
        textData.push_back('\n');
    }

    file.close();

    return textData;
}

std::vector<Account> StorageLoad::execute(std::vector<Account> allData) {

    std::ifstream file;
    std::ifstream *fileptr = &file;
    std::string textData;

    if(std::ifstream(DEFAULT_FILENAME)) {
        std::cout << "File exist." << std::endl;
        file.open(DEFAULT_FILENAME, std::ios_base::app);
    } else {
        std::cout << "File created." << std::endl;
    }

    textData = readfile(*fileptr);

    std::vector<Account> lol;
    return lol;
}