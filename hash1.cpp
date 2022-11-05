//
//  hash1.cpp
//  Assignment 4
//
//  Created by jana on 31/10/2022.
//

#include "hash1.hpp"
#include <iostream>
using namespace std;

hash1::hash1(){
    for (int i=0;i<9;i++)
        arr[i]=NULL; //initialize all elements of the array with NULL
    numOfCollisions=0;
    size=9;
}
int hash1::hash1Function(string data){
    int sum=0;
    for (int i=0;i<data.length();i++){
        sum+=int(data[i]);
    }
    return sum%size;
}
void hash1::insertHash1(employee value){
    int index=hash1Function(value.getName());
    while (arr[index]!=NULL){ //while there is a collision
        index=(index+1)%9; //calculate new index
        numOfCollisions++; //increment numOfCollisions
    }
    arr[index]=&value; //when there is a free space
}
void hash1::removeHash1(string name){
    int index=hash1Function(name);
    if ((arr[index]->getName())==name){ //while there is no collision
        employee *temp;
        temp=arr[0];
        arr[0]=arr[index];
        arr[index]=temp; //swap the element to remove with the first element
        size--;
        for (int i=0;i<size;i++){
            arr[i]=arr[i+1]; //remove first element
        }
    }
    else { //in case of collision
        index=(index+1)%size; //calculate new index
    }
}
void hash1::printHash1(){
    cout << "Hash function using linear probing: " << endl;
    for (int i=0;i<size;i++){
        if (arr[i]!=NULL){ //while the arr index is not empty
            cout << "-   " << "name: " << arr[i]->getName() << ", age: " << arr[i]->getAge() << ", salary: " << arr[i]->getSalary() << ", years of experience: " << arr[i]->getExperience() << endl;
        }
    }
}
double hash1::collisionRateHash1(){
    return ((numOfCollisions/9.0)*100); //calculate percentage of collision
}
