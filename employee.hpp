//
//  employee.hpp
//  Assignment 4
//
//  Created by jana on 31/10/2022.
//

#ifndef employee_hpp
#define employee_hpp
#include <iostream>
#include <stdio.h>
using namespace std;

class employee{
    int age;
    string name;
    int salary;
    int experience;
public:
    employee(){
        age=-1;
        name="";
        salary=-1;
        experience=-1;
    }
    employee(int userAge, string userName, int userSalary, int userExperience){
        setAge(userAge);
        setName(userName);
        setSalary(userSalary);
        setExperience(userExperience);
    }
    void setAge(int userAge){
        if (userAge>0&&userAge<120)
            age=userAge;
        else
            cout << "invalid age" << endl;
    }
    void setName(string userName){
        if (userName!="")
            name=userName;
        else
            cout << "invalid name" << endl;
    }
    void setSalary(int userSalary){
        if (userSalary>0)
            salary=userSalary;
        else
            cout << "invalid salary" << endl;
    }
    void setExperience(int userExperience){
        if (userExperience>=0)
            experience=userExperience;
        else
            cout << "invalid years of experience" << endl;
    }
    int getAge(){
        return age;
    }
    string getName(){
        return name;
    }
    int getSalary(){
        return salary;
    }
    int getExperience(){
        return experience;
    }
};



#endif /* employee_hpp */
