//
// Created by Bobby Lin on 12/12/15.
//

#include <string>
#include <stdio.h>
#include <vector>
#include <regex>

#ifndef SPENDTRACKER_COMMAND_H
#define SPENDTRACKER_COMMAND_H
using namespace std;

class Command {
    private:
        string type;
        double amount;
        string expense;
    public:
        Command(string input);
        virtual ~Command();

        string getType();
        double getAmount();
        string getExpense();
        vector<string> splitString(string const &str, char const delimiter);
};


#endif //SPENDTRACKER_COMMAND_H
