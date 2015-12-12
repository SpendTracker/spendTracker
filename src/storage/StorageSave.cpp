//
// Created by Bao Jun on 12/12/15.
//

#include <iostream>
#include <fstream>
#include "StorageSave.h"
#include "account/Account.h"

const std::string DEFAULT_FILENAME = "SpendTrackerData.txt";

StorageSave::StorageSave() {
    // TODO Auto-generated constructor stub

}

StorageSave::~StorageSave() {
    // TODO Auto-generated destructor stub
}

void StorageSave::writefile(std::ofstream &file, std::string textData) {
    file << textData;
    file.close();
}

std::string StorageSave::execute(std::vector<Account> allData) {

    std::ofstream file;
    std::ofstream *fileptr = &file;

    file.open(DEFAULT_FILENAME, std::ios_base::app);

    if(!file.is_open()) {
        std::cout << "Unable to open file." << std::endl;
    } else {
        std::cout << "Saving contents to file." << std::endl;
        std::string textData;
        writefile(*fileptr, textData);
    }

    return "";
}
