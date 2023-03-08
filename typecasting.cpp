/*
        WHAT IS TypeCasting?

        Type casting refers to the conversion of one data type to another in a program.
*/

#include <iostream>
using namespace std;

int main(){
    int a = 324;
    float b = 88.99;

    cout<<"Typecasting - int to float"<<endl;

    cout<< (float) a/7 <<endl;

    cout<<"Typecasting - float to int"<<endl;

    cout<< (int) b <<endl;

    cout<< "NOTE: Typecasting does'nt perform rounding off of the value. It just writes the integer of the whole value.";

    return 0;
}