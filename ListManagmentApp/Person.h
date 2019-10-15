/**
 *
 * @authors Alvarez & Garcia
 * @date 26 SEP 2019
 */
#include <iostream>
#pragma once

using namespace std;

class Person{
private:
    string name, lastName;
public:
    void setName(string);
    void setLastName(string);
    string getName();
    string getLastName();
    void printPerson();
};
void Person::setName(string n_Name) {
    name = n_Name;
}
void Person::setLastName(string n_LastName){
    lastName = n_LastName;
}
string Person::getName() {
    return name;
}
string Person::getLastName(){
    return lastName;
}
void Person::printPerson() {
    cout << "Person: " << name.c_str() << " " << lastName.c_str() << endl;
}
