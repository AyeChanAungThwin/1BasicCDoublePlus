//
// Created by dracula on 6/4/12.
//

#ifndef C__BASICS_POINTERS_H
#define C__BASICS_POINTERS_H

void correctPointer1() {
    int *p; //wild pointer
    int a = 10;
    p = &a; //p is not a wild pointer
    *p = 15; //Value of a is changed. This is fine!
    cout<<"Pointer Address -> \""<<p<<"\" and value is "<<*p<<"."<<endl;
}

void correctPointer2() {
    int *p = (int *)malloc(sizeof(int));
    *p = 12; //This is also fine! (assuming malloc doesn't return null)
    cout<<"Pointer Address -> \""<<p<<"\" and value is "<<*p<<"."<<endl;
}

//should not use uninitialized pointers, we called it wild pointers.
void aWildPointer() {
    int *p;
    *p = 12; //Wild pointers
}

#endif //C__BASICS_POINTERS_H
