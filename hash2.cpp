//
//  hash2.cpp
//  Assignment 4
//
//  Created by jana on 01/11/2022.
//

#include "hash2.hpp"
#include <iostream>
using namespace std;

hash2::hash2(){
    for (int i=0;i<9;i++)
        arr[i]=NULL; //initialize all elements of the array with NULL
    numOfCollision=0;
    size=0;
}
int hash2::hash2Function(string data){
    int sum=0;
    for (int i=0;i<data.length();i++){
        sum+=data[i];
    }
    return sum%9;
}
void hash2::insertHash2(employee data){
    node* newNode=new node;
    newNode->value=data;
    newNode->next=NULL;
    int index=hash2Function(data.getName());
    if (arr[index]==NULL){ //if there is no collision
        arr[index]=newNode;
        size++;
    }
    else{ //in case of collision
        numOfCollision++;
        node* mirror=arr[index];
        while (((mirror->value).getName())!=(data.getName()) && mirror->next!=NULL)
            mirror=mirror->next;
        if ((mirror->value.getName()) == (data.getName()))
            cout << "student already exists" << endl;
        else{
            mirror->next=newNode;
            size++;
        }
    }
}
void hash2::removeHash2(string name){
    int index=hash2Function(name);
    if (arr[index]==NULL)
        cout << "no student found" << endl;
    else if ((arr[index]->value.getName())==name){ //if there is no collision
        node* mirror=arr[index];
        arr[index]=arr[index]->next;
        delete mirror;
        size--;
    }
    else{ //in case of collision
        node* mirror2;
        node* mirror3;
        mirror2=arr[index];
        mirror3=arr[index];
        while ((mirror3->value).getName()!=name && mirror3!=NULL){
            mirror2=mirror3;
            mirror3=mirror3->next;
        }
        if (mirror2==NULL)
            cout << "no student found" << endl;
        else{
            mirror2->next=mirror3->next;
            delete mirror2;
            size--;
        }
    }
}
void hash2::printHash2(){
    cout << "Hash function using chaining: " << endl;
    for (int i=0;i<9;i++){
        if (arr[i]!=NULL){ //if array element is not empty
            node* mirror=arr[i];
            while (mirror!=NULL){ //traverse till the last element of the linked list
                cout <<  "-   " << "name: " << mirror->value.getName() << ", age: " << mirror->value.getAge() << ", salary: " << mirror->value.getSalary() << ", years of experience: " << mirror->value.getExperience() << endl;;
                mirror=mirror->next;
            }
        }
    }
}
double hash2::collisionRateHash2(){
    return ((numOfCollision/9.0)*100); //calculate percentage of collision
}
