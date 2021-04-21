#include "NumberWithUnits.hpp"
#include <map>
#include <iostream>
#include <fstream>
using namespace std;
namespace ariel{
            std::map<string,std::map<string,double>> con;
            NumberWithUnits a(1,"1");
  void  NumberWithUnits::read_units(ifstream& file){
  }
NumberWithUnits& operator++( NumberWithUnits& num){
    return a;
}
NumberWithUnits& operator--( NumberWithUnits& num1){
    return a;
} 
NumberWithUnits& operator++( NumberWithUnits& num1, int){
    return a;
}
NumberWithUnits& operator--( NumberWithUnits& num1, int){
    return a;
}

////
NumberWithUnits& operator+(const NumberWithUnits& num1, const NumberWithUnits& num2){
    return a;
}
NumberWithUnits& operator-(const NumberWithUnits& num1, const NumberWithUnits& num2){
    return a;
}
NumberWithUnits& operator+=(NumberWithUnits& num1, const NumberWithUnits& num2){
    return num1;
}
NumberWithUnits& operator-=(NumberWithUnits& num1, const NumberWithUnits& num2){
    return num1;
}
NumberWithUnits& operator+(const NumberWithUnits& num1){
    return a;
}
NumberWithUnits& operator-(const NumberWithUnits& num1){
    return a;
}

////
NumberWithUnits& operator*(double num1,  NumberWithUnits& num2){
    return a;
}
NumberWithUnits& operator*=(  NumberWithUnits& num2, double num1){
    return a;
}
NumberWithUnits& operator*(  NumberWithUnits& num2,double num1){
    return a;
}
NumberWithUnits& operator*=( double num1,NumberWithUnits  &num2){
    return a;
}

////
bool operator<=(const NumberWithUnits& num1, const NumberWithUnits& num2){
    return true;
}
bool operator==(const NumberWithUnits& num1, const NumberWithUnits& num2){
    return true;
}
bool operator!=(const NumberWithUnits& num1, const NumberWithUnits& num2){
    return true;
}
bool operator>=(const NumberWithUnits& num1, const NumberWithUnits& num2){
    return true;
}
bool operator<(const NumberWithUnits& num1, const NumberWithUnits& num2){
    return true;
}
bool operator>(const NumberWithUnits& num1, const NumberWithUnits& num2){
    return true;
}

////
int comp(const NumberWithUnits& num1, const NumberWithUnits& num2){
return 1;
}

std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c){
    return output;
}
 std::istream& operator>> (std::istream& input , NumberWithUnits& c){
     return input;
 }  
 
 }
