//
// Created by Bao Jun on 12/12/15.
//

#include <string>
#include "../parser/command/Command.h"
#include "../parser/Parser.h"

#ifndef SPENDTRACKER_LOGIC_H
#define SPENDTRACKER_LOGIC_H
using namespace std;

class Logic {
    private:
        Parser parser;
    public:
        Logic();
        virtual ~Logic();

        Command createCommand(string input);
        void executeCommand(Command command);
};


#endif //SPENDTRACKER_LOGIC_H
