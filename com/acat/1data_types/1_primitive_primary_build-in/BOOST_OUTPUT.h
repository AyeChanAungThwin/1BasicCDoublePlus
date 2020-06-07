//
// Created by dracula on 6/4/12.
//

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

#ifndef C__BASICS_BOOST_OUTPUT_H
#define C__BASICS_BOOST_OUTPUT_H

void facadeOutput(bool isSigned, int sizeInBytes) {
    int sizeInBits = 8 * sizeInBytes;
    uint256_t result = 1;
    while (sizeInBits != 0) {
        result *= 2;
        --sizeInBits;
    }
    if (isSigned) {
        uint256_t first = result/2;
        uint256_t second = first-1;
        cout<<"(-"<<first<<" to +"<<second<<", "<<sizeInBytes<<" "<<getByte(sizeInBytes)<<")"<<endl;
    }
    else {
        cout <<"(0 to +"<<result-1<<", "<<sizeInBytes<<" "<<getByte(sizeInBytes)<<")"<<endl;
    }
}

#endif //C__BASICS_BOOST_OUTPUT_H
