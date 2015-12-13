//
// Created by Bao Jun on 12/12/15.
//

#include <string.h>
#include "Logic.h"
using namespace std;

Logic::Logic() {
    parser = Parser();
}

Logic::~Logic() {

}

Command Logic::createCommand(string input) {
    Command command = parser.parse(input);
    return command;
}

void Logic::executeCommand(Command command) {
    if(strcmp(command.getType().c_str(),"save") == 0) {

    }
    else if(strcmp(command.getType().c_str(),"spend") == 0) {

    }
    else if(strcmp(command.getType().c_str(),"earn") == 0) {

    }
    else if(strcmp(command.getType().c_str(),"exit") == 0) {

    }
    else {
        // Invalid
    }
}