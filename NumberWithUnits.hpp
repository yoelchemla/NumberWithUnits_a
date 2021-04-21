#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel{
        class NumberWithUnits{
        

        private:
             double size;
             string unit;
        
         
        public:
            NumberWithUnits(double s,string u)
            {
                size=s;
                unit=u;
            }

            static void read_units(ifstream& units_file);
//operator: ++,--
            friend NumberWithUnits& operator++( NumberWithUnits& num1);     
            friend NumberWithUnits& operator--( NumberWithUnits& num1);     
            friend NumberWithUnits& operator++( NumberWithUnits& num1, int);          
            friend NumberWithUnits& operator--( NumberWithUnits& num1, int);     
            
//operator: +,=,+=,-,-=
            friend NumberWithUnits& operator+(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend NumberWithUnits& operator-(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend NumberWithUnits& operator+=(NumberWithUnits& num1, const NumberWithUnits& num2);
            friend NumberWithUnits& operator-=(NumberWithUnits& num1, const NumberWithUnits& num2);
            friend NumberWithUnits& operator+(const NumberWithUnits& num1);
            friend NumberWithUnits& operator-(const NumberWithUnits& num1);
//operator: * ,*=
            friend NumberWithUnits& operator*(double num1,  NumberWithUnits& num2);
            friend NumberWithUnits& operator*=(  NumberWithUnits& num2, double num1);
            friend NumberWithUnits& operator*(  NumberWithUnits& num2,double num1);
            friend NumberWithUnits& operator*=( double num1,NumberWithUnits  &num2);     
//operator: ==,!=,<=,>=
            friend bool operator<=(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend bool operator==(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend bool operator!=(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend bool operator>=(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend bool operator<(const NumberWithUnits& num1, const NumberWithUnits& num2);
            friend bool operator>(const NumberWithUnits& num1, const NumberWithUnits& num2);
          
          friend int comp(const NumberWithUnits& num1, const NumberWithUnits& num2);
            //operator:input,output
            friend std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c);
            friend std::istream& operator>> (std::istream& input , NumberWithUnits& c);


    };    
    
}