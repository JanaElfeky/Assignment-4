//
//  main.cpp
//  Assignment 4
//
//  Created by jana on 30/10/2022.
//

#include <iostream>
#include "employee.hpp"
#include "hash1.hpp"
#include "hash2.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    hash2 linkedListHash;
    employee emp1(30,"Mina",10000,4);
    employee emp2(45,"Fawzy",5000,8);
    employee emp3(19, "Yara", 2000, 0);
    employee emp4(32,"Mariam",8000,2);
    employee emp5(33, "Ayman",4000,8);
    employee emp6(28,"Roshdy",9000,3);
    employee emp7(26,"Aya",6000,3);
    employee emp8(29,"Abdullah",7000,4);
    employee emp9(21,"Fatma",3000,1);
    linkedListHash.insertHash2(emp1);
    linkedListHash.insertHash2(emp2);
    linkedListHash.insertHash2(emp3);
    linkedListHash.insertHash2(emp4);
    linkedListHash.insertHash2(emp5);
    linkedListHash.insertHash2(emp6);
    linkedListHash.insertHash2(emp7);
    linkedListHash.insertHash2(emp8);
    linkedListHash.insertHash2(emp9);
    linkedListHash.printHash2();
    cout << endl << endl;
    hash1 dynamicArray;
    dynamicArray.insertHash1(emp1);
    dynamicArray.insertHash1(emp2);
    dynamicArray.insertHash1(emp3);
    dynamicArray.insertHash1(emp4);
    dynamicArray.insertHash1(emp5);
    dynamicArray.insertHash1(emp6);
    dynamicArray.insertHash1(emp7);
    dynamicArray.insertHash1(emp8);
    dynamicArray.insertHash1(emp9);
    dynamicArray.printHash1();
    cout << endl <<endl;
    cout << "collision rate of hashing using chaining is: " << linkedListHash.collisionRateHash2() << "%" << endl;
    cout << "collision rate of hashing using linear probing is: " << dynamicArray.collisionRateHash1() << "%" << endl;
    
    return 0;
}
