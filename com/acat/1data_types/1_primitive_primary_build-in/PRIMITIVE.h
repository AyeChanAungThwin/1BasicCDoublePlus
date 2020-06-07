//
// Created by dracula on 6/4/12.
//

#include <iostream>
#include <cmath>
//#include "BOOST_OUTPUT.h"

using namespace std;

#ifndef C__BASICS_PRIMITIVE_H
#define C__BASICS_PRIMITIVE_H

string getByte(int size) {
    if (size<=1) {
        return "byte";
    }
    else {
        return "bytes";
    }
}

string getDeclarationRange(bool isSigned, int sizeInByte) {
    int characterInBits = 8*sizeInByte;
    long double total = pow(2, characterInBits);
    if (isSigned) {
        long double first = total/2;
        long double second = first-1;
        return "(-"+to_string(first)+" to +"+to_string(second)+", "+to_string(sizeInByte)+" "+getByte(sizeInByte)+")";
    }
    else {
        return "(0 to +"+to_string(total-1)+", "+to_string(sizeInByte)+" "+getByte(sizeInByte)+")";
    }
}

void modifiers() {
    printf("Modifiers -> Size of long is : %d %s. (long)\n", sizeof(long), getByte(sizeof(long)).c_str());
    printf("Modifiers -> Size of short is     : %d %s. (short)\n", sizeof(short), getByte(sizeof(short)).c_str());
    printf("Modifiers -> Size of signed is : %d %s. (signed)\n", sizeof(signed), getByte(sizeof(signed)).c_str());
    printf("Modifiers -> Size of unsigned is : %d %s. (unsigned)\n", sizeof(unsigned), getByte(sizeof(unsigned)).c_str());

    cout<<endl;
}

void primitiveDataTypes() {
    //True or false
    printf("Primitives -> Size of boolean is : %d %s. (true or false)\n", sizeof(bool), getByte(sizeof(bool)).c_str());

    //integer
    printf("Primitives -> Size of integer is : %d %s. (integer)\n", sizeof(int), getByte(sizeof(int)).c_str());
    printf("Primitives -> Size of character is : %d %s. (integer)\n", sizeof(char), getByte(sizeof(char)).c_str());

    //floating
    printf("Primitives -> Size of float is : %d %s. (floating)\n", sizeof(float), getByte(sizeof(float)).c_str());
    printf("Primitives -> Size of double is : %d %s. (floating)\n", sizeof(double), getByte(sizeof(double)).c_str());

    cout<<endl;
}

void modifierAndPrimitivesWithoutBoostLibrary() {
    //char
    printf("Modifier + Primitives -> signed char = char %s\n", getDeclarationRange(true, sizeof(signed char)).c_str());
    printf("Modifier + Primitives -> unsigned char %s\n", getDeclarationRange(false, sizeof(unsigned char)).c_str());

    //int
    printf("Modifier + Primitives -> signed int %s\n", getDeclarationRange(true, sizeof(signed int)).c_str());
    printf("Modifier + Primitives -> unsigned int %s\n", getDeclarationRange(false, sizeof(unsigned int)).c_str());

    //short int
    printf("Modifier + Primitives -> short signed int = short int %s\n", getDeclarationRange(true, sizeof(short signed int)).c_str());
    printf("Modifier + Primitives -> short unsigned int %s\n", getDeclarationRange(false, sizeof(short unsigned int)).c_str());

    //long int
    printf("Modifier + Primitives -> long signed int = long int %s\n", getDeclarationRange(true, sizeof(long signed int)).c_str());
    printf("Modifier + Primitives -> long unsigned int %s\n", getDeclarationRange(false, sizeof(long unsigned int)).c_str());

    //long long
    printf("Modifier + Primitives -> long long = long %s\n", getDeclarationRange(true, sizeof(long long)).c_str());

    //float, double
    printf("Modifier + Primitives -> float %s\n", getDeclarationRange(false, sizeof(float)).c_str());
    printf("Modifier + Primitives -> double %s\n", getDeclarationRange(false, sizeof(double)).c_str());

    //long double
    printf("Modifier + Primitives -> long double %s\n", getDeclarationRange(false, sizeof(long double)).c_str());
    cout<<endl;
}

/*void modifierAndPrimitivesWithBoostLibrary() {
    //char
    printf("Modifier + Primitives -> signed char = char "); facadeOutput(true, sizeof(signed char));
    printf("Modifier + Primitives -> unsigned char "); facadeOutput(false, sizeof(unsigned char));

    //int
    printf("Modifier + Primitives -> signed int = int "); facadeOutput(true, sizeof(signed int));
    printf("Modifier + Primitives -> unsigned int "); facadeOutput(false, sizeof(unsigned int));

    //short int
    printf("Modifier + Primitives -> short signed int = short int "); facadeOutput(true, sizeof(short signed int));
    printf("Modifier + Primitives -> short unsigned int "); facadeOutput(false, sizeof(short unsigned int));

    //long int
    printf("Modifier + Primitives -> long signed int = long int "); facadeOutput(true, sizeof(long signed int));
    printf("Modifier + Primitives -> long unsigned int "); facadeOutput(false, sizeof(long unsigned int));

    //long long
    printf("Modifier + Primitives -> long long = long "); facadeOutput(true, sizeof(long long));

    //float, double
    printf("Modifier + Primitives -> float "); facadeOutput(false, sizeof(float));
    printf("Modifier + Primitives -> double "); facadeOutput(false, sizeof(double));

    //long double
    printf("Modifier + Primitives -> long double "); facadeOutput(false, sizeof(long double));
    cout<<endl;
}*/

#endif //C__BASICS_PRIMITIVE_H
