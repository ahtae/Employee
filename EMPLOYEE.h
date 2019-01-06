#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>
using namespace std;
using std::string;

class EMPLOYEE
{

private:
    string NAME;
    double SALARY;
    unsigned int YEAR_HIRED;


public:

    EMPLOYEE()
    {};

    void setNAME(string n)
    {
        NAME=n;
    }

    string getNAME()
    {
        return NAME;
    }

    void setSALARY(double s)
    {
        SALARY=s;
    }

    double getSALARY()
    {
        return SALARY;
    }

    void setYEAR_HIRED(int y)
    {
        YEAR_HIRED=y;
    }

    unsigned int getYEAR_HIRED()
    {
        return YEAR_HIRED;
    }

    ~ EMPLOYEE()
    {
        system("pause");
    }

};

#endif
