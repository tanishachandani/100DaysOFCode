// STREAMS IN C++
// It is a concept implemented by multiple classes and objects present in the STL
// contains classes which have data and methods to handle all the work related to input and output devices

// cin, cout, cerr, clog
// cerr: used separately for errors so that it's possible to flow all the errors into a different stream
// clog: used separately for logs of the project (like a logbook)

// getline()
// for taking strings with spaces as inputs
// cin ignores the string entered after space
// syntax: 
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string birth_place;
    cout<<"Enter your birth place: \n";
    getline(cin, birth_place);
    // input gets stored in birth_place variable
}


// IO MANIPULATION

// bool
// default -gives 0 or 1 as output
// std::boolalpha -for true or false
// std::noboolalpha -for 0 and 1 again

// int
// default -gives decimal system values
// std::hex -for hexadecimal values
// std::oct -for octal values
// std::dec -for decimal again 

// output layout
// setw(n) -sets width of the output (n=width) -is applied only to the very next cout, not all
// setfill(c) -fills the empty whitespace in required width with the constant c
// std::left and std::right for left and right alignment of the output respectively

// floating point
// setprecision(n): n=total number of digits in the value (before and after decimal but stops at e(power of 10))
// showpoint: also outputs the trailing zeros            // revert: noshowpoint
// showpos: shows a + sign in front of positive values   // revert: noshowpos
// uppercase: changes all lowercase values to uppercase  // revert: nouppercase


// FIXED and SCIENTIFIC floating point manipulations
// in fixed format, we never print e whereas in scientific format, we always print e
// setprecision(n): n=total number of digits after decimal

// fixed
// syntax: 
int main(){
    double x=1.75;
    double y=12593.7462;
    double z = 1.2e+7;
    cout<<std::fixed;
    cout<<std::setprecision(3);
    cout<<x<<" "<<y<<" "<<z<<endl;        // output: 1.750 12593.746 12000000.000
}

// scientific
// syntax:
int main(){
    double x=1.75;
    double y=12593.7462;
    double z = 1.2e+7;
    cout<<std::scientific;
    cout<<std::setprecision(3);
    cout<<x<<" "<<y<<" "<<z<<endl;       // output: 1.750e+00 1.259e+03 1.200e+7
}