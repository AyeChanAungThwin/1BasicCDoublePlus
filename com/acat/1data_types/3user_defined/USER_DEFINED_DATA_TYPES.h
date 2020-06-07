//
// Created by dracula on 6/4/12.
//

#include <iostream>
#include <bitset>
using namespace std;

#ifndef C__BASICS_USER_DEFINED_H
#define C__BASICS_USER_DEFINED_H

//User defined data types involves: Class, Structure, Union, Enumeration, Type Definition
//class
class Human {
    //setter variables, instance variables, local variables
    //getter and setters
    private:
        string name;
        int age;
    public:
        float salary;
        void setNameAndAge(string nm, int ag) {
            name = nm;
            age = ag;
        }
        void printHumanNameAndAge(const Human &hm) {
            cout<<"<Class> "<<hm.name<<", "<<hm.age<<"."<<endl;
        }
        void printSalary() {
            cout<<"<Struct> "<<"Salary is "<<salary<<"."<<endl;
        }
};

//structure (check inheritance in polymorphism)
struct Employee: public Human {

};

//Union
//(Unlike class and struct, union members share same memory location)
//(Size of the union is taken according to the size of the largest member of the union.)
union UnionExample {
    short int a; //2 or 4 bytes. Union will be 8 bytes as it the size of the largest member of the union.
    char b; //1 byte.
};

//Enumeration
enum Weekdays {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

//Type Definition
typedef bitset<8> Byte; //Byte is not available in C++.

union UnionTypeDefByteTest {
    char a;
    Byte b;
    int c;

    UnionTypeDefByteTest() {

    }
};

#endif //C__BASICS_USER_DEFINED_H
