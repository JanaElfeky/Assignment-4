//
//  hash2.hpp
//  Assignment 4
//
//  Created by jana on 01/11/2022.
//

#ifndef hash2_hpp
#define hash2_hpp
#include <iostream>
#include <stdio.h>
#include "employee.hpp"
using namespace std;

struct node{
    employee value;
    node* next;
};
class hash2{
    node* arr[9];
    int size;
    int hash2Function(string data);
    int numOfCollision;
public:
    hash2();
    void insertHash2(employee data);
    void removeHash2(string name);
    void printHash2();
    double collisionRateHash2();
};

#endif /* hash2_hpp */
