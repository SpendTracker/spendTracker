//
// Created by Bobby Lin on 12/12/15.
//

#include <iostream>
#include "Parser.h"

Parser::Parser() {
    // TODO Auto-generated constructor stub

}

Parser::~Parser() {
    // TODO Auto-generated destructor stub
}

Command Parser::parse(string input) {
    Command command = Command(input);
    return command;
}