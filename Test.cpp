#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <stdexcept>
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>

using namespace ariel;
using namespace std;


NumberWithUnits km(6, "km");
NumberWithUnits cm(6, "cm");
NumberWithUnits hour(5, "hour");
NumberWithUnits sec(5, "sec");
NumberWithUnits ton(2, "ton");
NumberWithUnits kg(2, "kg");
//NumberWithUnits USD(3, "USD");

TEST_CASE("+,-")
{
    km=km+cm;
    CHECK(km == NumberWithUnits (6.006, "km"));
    km=km-cm;
    CHECK(km == NumberWithUnits (6, "km"));
    hour=hour+sec;
    CHECK(hour == NumberWithUnits (5.005, "hour"));
    hour=hour-sec;
    CHECK(hour == NumberWithUnits (5, "hour"));
    ton=ton+kg;
    CHECK(ton == NumberWithUnits (2.002, "ton"));
    ton=ton-kg;
    CHECK(ton == NumberWithUnits (2, "ton"));
}

TEST_CASE("+=, -=")
{
    hour+=sec;
    CHECK(hour == NumberWithUnits (5.005, "hour"));
    hour-=sec;
    CHECK(hour == NumberWithUnits (5, "hour"));
    km+=cm;
    CHECK(km == NumberWithUnits (6.006, "km"));
    km-=cm;
    CHECK(km == NumberWithUnits (6, "km"));
    ton+=kg;
    CHECK(ton == NumberWithUnits (2.002, "ton"));
    ton-=kg;
    CHECK(km == NumberWithUnits (2, "ton"));
}

TEST_CASE(">, >=, <, <=, ==, !=")
{
    CHECK_GT(ton,kg);  //>
    CHECK_LT(kg,ton); //<
    CHECK_GT(hour,sec);//>
    CHECK_LT(sec,hour);//<
    CHECK_GT(km,cm);//>
    CHECK_LT(cm,km);//<
    CHECK_GE(km,km);//==
    CHECK_LE(km,km);//==
    CHECK_EQ(km, NumberWithUnits (6000, "m"));// equal

}

TEST_CASE("++,--")
{
   ton++;
    CHECK(ton ==  NumberWithUnits (3, "ton"));
    ton--;
    CHECK(ton ==  NumberWithUnits (2, "ton")); 
    km++;
    CHECK(km ==  NumberWithUnits (7, "km"));
    km--;
    CHECK(km ==  NumberWithUnits (6, "km"));
    hour++;
    CHECK(hour ==  NumberWithUnits (6, "hour"));
    hour--;
    CHECK(hour ==  NumberWithUnits (5, "hour"));
    }
TEST_CASE("*,*=")
{
    km=km*2;
    CHECK(km ==  NumberWithUnits (12, "km"));
    km*=0.5;
    CHECK(km ==  NumberWithUnits (6, "km"));
    hour=hour*2;
    CHECK(hour ==  NumberWithUnits (10, "hour"));
    hour*=0.5;
    CHECK(hour ==  NumberWithUnits (5, "hour"));
    ton=ton*2;
    CHECK(ton ==  NumberWithUnits (6, "ton"));
    ton*=0.5;
    CHECK(ton ==  NumberWithUnits (3, "ton"));
    kg = kg*2;
    CHECK(kg == NumberWithUnits(4, "kg"));
    km = km*0.5;
    CHECK(km == NumberWithUnits(2, "kg"));
/////
    km=km*10;
    CHECK(km ==  NumberWithUnits (20, "km"));
    km*=0.25;
    CHECK(km ==  NumberWithUnits (5, "km"));
    hour=hour*1;                                 //check case with 1
    CHECK(hour ==  NumberWithUnits (5, "hour"));
    hour*4;
    CHECK(hour ==  NumberWithUnits (20, "hour"));
    hour*0;                                      // check case with 0
    CHECK(hour ==  NumberWithUnits (0, "hour"));
    ton=ton*8;
    CHECK(ton ==  NumberWithUnits (16, "ton"));
    ton*=7;
    CHECK(ton ==  NumberWithUnits (112, "ton"));
    kg = kg*9;
    CHECK(kg == NumberWithUnits(18, "kg"));
    km = km*0.11111111111111;
    CHECK(km == NumberWithUnits(2, "kg"));

}
