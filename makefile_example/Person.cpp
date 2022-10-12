#include "Person.h"
#include <iostream>

using std::cout;

Person::Person(std::string first, std::string last, int id){
    this->firstname = first;
    this->lastname  = last; 
    this->id = id; 

    cout << "Created a person! " + first + " " + last + " "<< id << "\n";

}

Person::~Person(){
    cout << "Deconstruct\n\n";
}

std::string Person::getName(void){
    return this->firstname;
}

int Person::getId(){
    return this->id;
}

void Person::setId(int id){
    this->id = id;
    cout << "OK";
}