// [CodeSheet] C++ OneShot (CodeWithHarry)

#include <iostream>     // It's a pre-processor command to process the program before running to save time.
#include <string>       // To Use the functions of String.
#include <cstdlib>      // ZTo generate random numbers.


using namespace std; // due to this you no longer need to again-n-again write std:: in front of commands - For Example:    std::cout<<"hello world!"

// DECLARING FUNCTIONS...

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class Employee{
public: // Anyone can access this from outside the class. However, if it would be "private", then it can not be accessed from outside.
    string name;
    int salary;

    // constructor
    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is $" << this->salary << endl;
    };

    void getSecretPassword()            // The public methods inside the class can access the Private methods.
    {
        cout<<"The secret password of employee is "<< this->secretPassword;
    }

private:
    int secretPassword;
};

// Inheritance
/* BY this, child class inherites all the properties of base class.*/

class Programmer: public Employee{
    public:
        int errors;
};


// int main() is the main function - i.e., the our actual program.
int main()
{

    // Classes & Objects
    /* C++ is an object oriented programming language.
        Classes are like a template or blueprint.
        For Ex. A template for Restaurant Bill.*/

    // Employee har;
    // har.name = "harry";
    // har.salary = 100;
    // har.printDetails();

    Employee har("karry constructor", 344, 2457534);
    // har.name = "harry";
    // har.salary = 100;
    har.printDetails();
    har.getSecretPassword();
    //cout<<"Secret Password is "<<har.secretPassword<<endl;    //Private Variables Can't be accessed here.

    // cout<<"The name of our first employee is "<<har.name<<" and his salary is $"<<har.salary<<endl;

    cout << endl;
    // Generating Random Numbers

    srand(6);
    int randNum = rand();       // but, it gives the same number every time.
    cout << randNum;
    return 0;
}

//--- The below content will work in the main() function. These are notes, that's why I'm writing them here. If you want to check out it's working - Copy & paste it inside ---- ```int main()``` function.

//--- Print Hello World | How to print in new line?
/*
cout << "Hello World!!"<<endl;      // <<endl == End the line & print in the new line or next line.
cout << "Hello World Again!";       // cout = console output command
return 0;
*/

//--- Comments  -  CTRL + /
/*
    Multi-Line
    Comments
*/

// Data Types...

/*
int a, b, c;
short sa = 9;
cout << sa <<endl;
cout << "The value of sa is = " << sa <<endl;
*/

/* Let's Checkout the size of the data types.. */
/*
cout << "Size of char : " << sizeof(char) << endl;
cout << "Size of int : " << sizeof(int) << endl;
cout << "Size of long : " << sizeof(long) << endl;
cout << "Size of float : " << sizeof(float) << endl;
cout << "Size of double : " << sizeof(double) << endl;
*/

// Variables

/* Variables must start with either any letter or an underscore (_)
    However, Variables can contain numbers after 1st character.*/

/*
long s67g = 333;
cout << "s67g = " << s67g <<endl;
*/

// camelCase Notation

/* Used to write longer (i.e., in detail) variable names
    camelCase Notation helps in searching them easily with C++ IntelliSense.
    To Search marksInMaths variable, you only have to write "mim", & it will auto-suggest*/

/*
int marksInMaths = 89;
cout << "write 'mim' to find marksInMaths (camelCase Notation) --- " << marksInMaths;
*/

/*
short a;
int b;
long c;
long long d;
float score = 43.54;
double score2 = 43.544;
long double score3 = 43.5434;
cout << "Floating Value with float keyword: " << score <<endl;
cout << "Floating Value with double keyword: " << score2 <<endl;
cout << "Floating Value with long double keyword: " << score3 <<endl;

cout <<endl;                // just for one line gap
*/

/*You can re-assign the value of variables.*/

/*
cout << "Original value of score is: " << score <<endl;
score = 34.45;
cout << "Re-assigned value of score is: " << score <<endl;      // value changed successfully

cout <<endl;                // just for one line gap
*/

/* What if you don't want a particular value to be changed in the upcoming program?
    Use --- const --- keyword after while defining it. {const means constant value} */

/*
double const score4 = 43.544;       // you can't re-assign it a new value now.
*/

// How to Take USER INPUTS?

/*
int a, b;

cout << "Enter First Number" << endl;
cin >> a;

cout << "Enter Second Number" << endl;
cin >> b;

cout << "Sum of a + b = " << a+b <<endl;
cout << "Sum of a + b = " << a-b <<endl;
cout << "Sum of a + b = " << a*b <<endl;
cout << "Sum of a + b = " << a/b <<endl;
cout << "Sum of a + b = " << (float) a/b <<endl;        // This is known as typecasting. Without this you won't get the result that you were looking for.
*/

// If-else Statements..

/*
int age;
cout<<"Enter your age"<<endl;
cin>>age;

if(age>150 || age<1) {
    cout<<"Invalid age";
}
else if (age>=18){
    cout<<"You Can Vote";
}
else {
    cout<<"You Can NOT Vote";
}
*/

// Switch Statements..

/*
int age;
cout << "Enter your age" << endl;
cin >> age;

switch (age)
{
case 12:
    cout << "You are 12 years old!";
    break; // If you will not use ```break``` here, the switch statement will print all the commands below it.
case 18:
    cout << "You are 18 years old!";
    break;

default:
    cout << "you are neither 12 nor 18 years old!";
    break;
}
*/

// LOOPS - WHILE Loops

/*
int index = 0;
while (index < 34)
{
    cout << "We are at index number " << index << endl;
    index++;            // index = index + 1;
}
*/

// LOOPS - DO WHILE Loops
/* This loop runs for atleast 1 minimum time. Whatever the conditions may be, it will run for atleast 1 time. */

/*
int index = 11;
do {
    cout << "We are at index number " << index << endl;
    index++;            // index = index + 1;
} while (index > 3453);
*/

// LOOPS - For Loops

/*
for (int i = 0; i < 34; i++)            // (initial value , till what? , what to do after each interval or step?)
{
    cout << "The value of i is " << i << endl;
}
*/

// Functions | Calling Functions..

/*
int first, second;
cout << "Enter first number" << endl;
cin >> first;

cout << "Enter second number" << endl;
cin >> second;

cout << "The function returned " << sum(first, second);
*/

// Arrays

/* Array is a variable that can store multiple values of the same type. */

/*
int arr[3] = {1, 3, 5}; // you can take 3 values in this array.
cout << arr[2] << endl; // INDEX - starts from 0. ---- So, here the index will be 0 for 1, 1 for 3, 2 for 5...
*/

/* You can also write like this..
        int arr[3] = {1,3,5};*/

/*
int marks[6];

for (int i = 0; i < 6; i++)
{
    cout << "Enter the marks of " << i << "th student" << endl;
    cin >> marks[i];
}

for (int i = 0; i < 6; i++)
{
    cout << "Marks of " << i << "th student is " << marks[i] << endl;
}
*/

// The above code was for single dimensional array --^

// 2D Arrays

/*
int arr2d[2][3] = {
    {1, 2, 3},
    {4, 5, 6}};
*/

// Using Double For-Loops --- to access 2D Arrays
/*
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << "The value at " << i << ", " << j << " is " << arr2d[i][j] << endl;
    }
}
*/

// Typecasting

/*
int a = 343;
float b = 87.944;
cout << a / 34 << endl;
cout << (float)a / 34 << endl;      // Use of typecasting

cout << (int)b;                     // Use of typecasting
*/

// Strings

/*
string name1 = "AnshhsnA";
cout << "My name is " << name1 << "." << endl;
*/

/* #include <string>   --- To Use the functions of String. */

/*
cout << "The length of name is " << name1.length() << endl;
cout << "3 characters of Name starting from 0th index is --- " << name1.substr(0,3) << endl;
cout << "3 characters of Name starting from 2nd index is --- " << name1.substr(2,3) << endl;
cout << "3 characters of Name starting from 4th index is --- " << name1.substr(4,3) << endl;
*/

// Pointers

/*
int a = 34;
int* ptra;              // telling it, that it's use is to store the address of a variable containing an integer value
ptra = &a;              // stores the value of variable ```a``` in variable ```ptra```
cout<<ptra <<endl;      // prints the address of a
cout<<*ptra <<endl;            // prints the value of varible (i.e., ```a``` ), that is stored in variable  ```ptra```.

float b = 43.321;
float* ptrb;
ptrb = &b;
cout<<ptrb <<endl;
cout<<*ptrb <<endl;
*/
