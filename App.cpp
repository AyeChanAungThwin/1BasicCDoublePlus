#include <iostream>

//Data Types
#include "com/acat/1data_types/1_primitive_primary_build-in/PRIMITIVE.h"
#include "com/acat/1data_types/3user_defined/USER_DEFINED_DATA_TYPES.h"

//Reference
#include "com/acat/2reference/REFREENCE.h"

//Pointer
#include "com/acat/3pointers/POINTERS.h"

void derivedDateTypes() {
    cout<<"Derived -> Arrays, Functions, Pointer, Reference"<<endl;

    cout<<endl;
}

void userDefinedDataTypes() {
    //Class
    Human human;
    human.setNameAndAge("Aye Chan", 18);
    cout<<"User Defined -> ";
    human.printHumanNameAndAge(human);

    //Structure (fields in struct are public!)
    Employee employee;
    employee.salary=9999.99; //works fine because inheritance is public;
    cout<<"User Defined -> <Struct> inherited from ";
    employee.printHumanNameAndAge(human); //works fine because inheritance is public;
    cout<<"User Defined -> ";
    employee.printSalary(); //works fine because inheritance is public;

    //Union (Share same memory location)
    UnionExample unionExample;
    unionExample.a = 65;
    cout<<"User Defined -> ";
    printf("<Union> a = %d,", unionExample.a);
    printf(" b = '%c'.", unionExample.b); //In ASCII, 65 is capital A.
    printf(" (Size of union is %ld bytes.)\n", sizeof(union UnionExample));

    union UnionExample var;
    var.a=90;
    union UnionExample *ptr = &var;
    cout<<"User Defined -> ";
    printf("<Union> a = %d, b = '%c'.", ptr->a, ptr->b);
    printf(" (Output with pointer).\n");

    //Enumerator
    Weekdays today;
    today = Sunday; //3
    cout<<"User Defined -> ";
    cout<<"<Enum> Today is "<<today<<" and next day is "<<today+1<<"."<<endl;

    //Type Definition
    Byte b = 2;
    cout<<"User Defined -> ";
    cout<<"<Typedef> Created Byte and its value in binary is "<<b<<"."<<endl;

    //Another Test for Union
    union UnionTypeDefByteTest test;
    test.a='A';
    cout<<"User Defined -> ";
    cout<<"<Union Test> character = '"<<test.a<<"', 8 bits Byte in binary = "<<test.b<<" and decimal = "<<test.c<<"."<<endl;

    cout<<endl;
}

void testReference() {
    //what is reference
    ReferenceExample reference;
    reference.howItWorks();

    //how it works well with swapping
    int a = 1, b = 2;
    reference.swap(a, b);
    printf("Reference -> Swap values: a = %d and b = %d.\n", a, b);

    //not creating new object
    Person prn;
    prn.name = "Aye Chan";
    prn.age = 18;
    reference.printPerson(prn);

    cout<<endl;
}

void testPointer() {
    correctPointer1();
    correctPointer2();
    //aWildPointer();

    cout<<endl;
}


int main() {
    //data types:
    //modifiers
    modifiers();

    // 1. primitive (or) primary (or) build-in,
    primitiveDataTypes();
    modifierAndPrimitivesWithoutBoostLibrary();
    //modifierAndPrimitivesWithBoostLibrary();

    // 2. derived,
    derivedDateTypes();

    // 3. user defined
    userDefinedDataTypes();

    //reference
    testReference();

    //pointer
    testPointer();

    //Next lesson is OOP concept of C++

    return 0;
}