//
// Created by Bao Jun on 12/12/15.
//

#include "Storage.h"

Storage::Storage() {
    // TODO Auto-generated constructor stub

}

Storage::~Storage() {
    // TODO Auto-generated destructor stub
}

std::vector<Account> Storage::load() {
    std::vector<Account> lol;
    return storageLoad.execute(lol);
}

void Storage::save(std::vector<Account> allData) {
    storageSave.execute(allData);
}
