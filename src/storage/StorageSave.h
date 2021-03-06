//
// Created by Bao Jun on 12/12/15.
//

#include <fstream>
#include <string>
#include <vector>
#include "account/Account.h"

#ifndef SPENDTRACKER_STORAGESAVE_H
#define SPENDTRACKER_STORAGESAVE_H


class StorageSave {
public:
    StorageSave();
    virtual ~StorageSave();

    std::string execute(std::map<std::string, Account> allData);
};

#endif //SPENDTRACKER_STORAGESAVE_H
