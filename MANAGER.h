#ifndef MANAGER_H
#define MANAGER_H
#include "EMPLOYEE.h"

#include<iostream>
#include<string>
using namespace std;
using std::string;

class MANAGER:public EMPLOYEE
{
private:
    string MANAGERS;
    string STAFF;

public:

    MANAGER()
    {};

    void setmanager(string m)
    {
        MANAGERS=m;
    }

    string getMANAGERS()
    {
        return MANAGERS;
    }

    void setSTAFF(string f)
    {
        STAFF=f;
    }

    string getSTAFF()
    {
        return STAFF;
    }

    ~ MANAGER()
    {
        system("pause");
    }

};

#endif
