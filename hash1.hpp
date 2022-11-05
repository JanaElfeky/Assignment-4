//
//  hash1.hpp
//  Assignment 4
//
//  Created by jana on 31/10/2022.
//

#ifndef hash1_hpp
#define hash1_hpp
#include <iostream>
#include <stdio.h>
#include "employee.hpp"
using namespace std;

class hash1{
    employee* arr[9];
    int hash1Function(string data);
    int numOfCollisions;
    int size;
public:
    hash1();
    void insertHash1(employee value);
    void removeHash1(string name);
    void printHash1();
    double collisionRateHash1();
};


#endif /* hash1_hpp */
