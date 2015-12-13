//
// Created by Bao Jun on 12/12/15.
//

#include <string>
#ifndef SPENDTRACKER_LOGIC_H
#define SPENDTRACKER_LOGIC_H
using namespace std;

class Logic {
    public:
        Logic();
        virtual ~Logic();
        void executeCommand(string input);
};


#endif //SPENDTRACKER_LOGIC_H
