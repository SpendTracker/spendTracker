//
// Created by Bobby Lin on 12/12/15.
//

#ifndef SPENDTRACKER_PARSER_H
#define SPENDTRACKER_PARSER_H

#include "command/Command.h"

class Parser {
    public:
        Parser();
        virtual ~Parser();
        Command parse(string input);
};

#endif //SPENDTRACKER_PARSER_H
