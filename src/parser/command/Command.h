//
// Created by Bobby Lin on 12/12/15.
//

#include <string>
#ifndef SPENDTRACKER_COMMAND_H
#define SPENDTRACKER_COMMAND_H
using namespace std;

class Command {
    private:
        string type;
    public:
        Command();
        virtual ~Command();
};


#endif //SPENDTRACKER_COMMAND_H
