#ifndef MAIN_H
#define MAIN_H

#include<iostream>
#include "EMPLOYEE.h"
#include "MANAGER.h"
using namespace std;

int main()
{
    EMPLOYEE e[10];
    MANAGER m1;
    MANAGER m2;

    string mgname;
    double mgsalary;
    unsigned int mghired;

    string empname;
    double empsalary;
    unsigned int emphired;

    cout << "=======================================" << endl;
    cout << "                                       " << endl;
    cout << "      INPUT MANAGER/EMPLOYEE DATA      " << endl;
    cout << "                                       " << endl;
    cout << "=======================================" << endl;

    cout<<"Enter Manager1's name: "<<flush;
    cin>>mgname;
    m1.setNAME(mgname);
    cout<<"Enter Manager1's salary: "<<flush;
    cin>>mgsalary;
    m1.setSALARY(mgsalary);
    cout<<"Enter the year Manager1 was hired: "<<flush;
    cin>>mghired;
    m1.setYEAR_HIRED(mghired);

    cout<<"\nEnter Manager2's name: "<<flush;
    cin>>mgname;
    m2.setNAME(mgname);
    cout<<"Enter Manager2's salary: "<<flush;
    cin>>mgsalary;
    m2.setSALARY(mgsalary);
    cout<<"Enter the year Manage21 was hired: "<<flush;
    cin>>mghired;
    m2.setYEAR_HIRED(mghired);
    cout<<endl;


    for(int j=1; j<=10; j++)
    {
            cout<<"Enter the employee"<<j<<"'s name: "<<flush;
            cin>>empname;
            e[j].setNAME(empname);

            cout<<"Enter the employee"<<j<<"'s salary: "<<flush;
            cin>>empsalary;
            e[j].setSALARY(empsalary);

            cout<<"Enter the year the employee"<<j<<" was hired: "<<flush;
            cin>>emphired;
            e[j].setYEAR_HIRED(emphired);

            cout<<endl;

    }

    cout << "=======================================" << endl;
    cout << "                                       " << endl;
    cout << "        MANAGER/EMPLOYEE DATABASE      " << endl;
    cout << "                                       " << endl;
    cout << "=======================================" << endl;

    cout<<"\nManager1's name: "<<mgname<<endl;
    cout<<"Manager1's salary: "<<mgsalary<<endl;
    cout<<"The year Manager1 was hired: "<<m1.getYEAR_HIRED()<<endl;
    cout<<"\nStaff of Manager1: "<<endl;

    for(int j=1; j<=5; j++)
    {
    cout<<"Employee"<<j<<"'s Name: "<<e[j].getNAME()<<endl;
    cout<<"Employee"<<j<<"'s Salary: "<<e[j].getSALARY()<<endl;
    cout<<"The year Employee"<<j<< " was hired: "<<e[j].getYEAR_HIRED()<<endl<<endl;
    }

    cout<<"\nManager2's name: "<<mgname<<endl;
    cout<<"Manager2's salary: "<<mgsalary<<endl;
    cout<<"The year Manager1 was hired: "<<m2.getYEAR_HIRED()<<endl;

    cout<<"\nStaff of Manager2: "<<endl;

    for(int j=6; j<=10; j++)
    {
    cout<<"Employee"<<j<<"'s Name: "<<e[j].getNAME()<<endl;
    cout<<"Employee"<<j<<"'s Salary: "<<e[j].getSALARY()<<endl;
    cout<<"The year Employee"<<j<< " was hired: "<<e[j].getYEAR_HIRED()<<endl;
    cout<<endl;
    }

    system("pause");
    return 0;
}

