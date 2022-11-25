// CodeWithHarry OneShot Video - Duration - 30:00

#include <iostream>             // It's a pre-processor command to process the program before running to save time.  
using namespace std;            // due to this you no longer need to again-n-again write std:: in front of commands - For Example:    std::cout<<"hello world!"

                                // int main() is the main function - i.e., the our actual program.
int main() {

    
    
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