//
// Created by Bobby Lin on 12/12/15.
//

#include <iostream>
#include <string.h>
#include "Command.h"

Command::Command(string input) {
    const char * c = input.c_str();
    vector<string> param = splitString(c,' ');
    type = param.at(0);
    if(strcmp(type.c_str(),"save") == 0) {
        amount = std::stod(param.at(1));
    }
    else if(strcmp(type.c_str(),"spend") == 0) {
        amount = std::stod(param.at(1));
        expense = param.at(2);
    }
    else if(strcmp(type.c_str(),"earn") == 0) {
        amount = std::stod(param.at(1));
    }
    else {
        type = "invalid";
    }
}

Command::~Command() {

}

string Command::getType() {
    return type;
}

double Command::getAmount() {
    return amount;
}

string Command::getExpense() {
    return expense;
}

vector<string> Command::splitString(string const &str, char const delimiter) {
    vector<string> vec;
    string element;
    for_each(begin(str),end(str),[&](char const ch) {
        if(ch!=delimiter) {
            element+=ch;
        }
        else {
            if (element.length()>0) {
                vec.push_back(element);
                element.clear();
            }
        }
    });
    if (element.length()>0) {
        vec.push_back(element);
    }
    return vec;
}