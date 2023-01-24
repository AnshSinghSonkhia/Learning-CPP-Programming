#include <iostream>
using namespace std;

class Complex{
    int a, b;       // This will be by default in private: access specifier.
    public:
                    // Creating a Constructor
        /*
            Constructor is a special member function 
            with the same name as of the class.
            It is used to intialize the objects of it's class.
            It is automatically invoked whenever an object is created.
        */
    Complex(void);  //  Constructor Declaration

    void printNumber(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(void){       // ------> This is a Default Constructor as tit takes NO parameters.
    a = 10;
    b = 0;
}

int main() {
    cout << "HI" << endl;

    Complex c;
    c.printNumber();




    return 0;
}


// Characteristics of Constructors

/*

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.

*/