//
// Created by dracula on 6/4/12.
//

#ifndef C__BASICS_REFERENCE_H
#define C__BASICS_REFERENCE_H

struct Person {
    string name;
    int age;
};

class ReferenceExample {
    public:
        //When a variable is declared as reference,
        //it becomes an alternative name for an existing variable.
        //A variable can be declared as reference by putting ‘&’ in the declaration.
        void howItWorks() {
            //Modifying x will also be modify its ref and vice versa.
            int x = 10;
            int& ref = x;
            ref = 20;
            printf("Reference -> x is 10 but ref is modified with 20, so x = %d.\n", x);
            x = 30;
            printf("Reference -> ref has 20 but x is modified with 30, so ref = %d.\n", ref);
            //Output : x = 10. ref = 30.
        }
        //Modify the passed parameters in a function :
        //If a function receives a reference to a variable,
        //it can modify the value of the variable.
        //For example, in the following program variables are swapped using references.
        void swap(int& first, int& second) {
            int temp = first;
            first = second;
            second = temp;
        }
        //Avoiding copy of large structures :
        //Imagine a function that has to receive a large object.
        //If we pass it without reference,
        //a new copy of it is created which causes wastage of CPU time and memory.
        //We can use references to avoid this.
        void printPerson(const Person &p) {
            printf("Reference -> Person name is %s and age is %d.\n", p.name.c_str(), p.age);
        }
};

#endif //C__BASICS_REFERENCE_H
