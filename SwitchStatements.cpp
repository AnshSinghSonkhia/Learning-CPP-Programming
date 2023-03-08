#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "You're 12 years old";
        break;
    case 13:
        cout << "You're 13 years old";
        break;
    case 14:
        cout << "You're 14 years old";
        break;
    case 15:
        cout << "You're 15 years old";
        break;

    default:
        cout << "IDK whether you're 18 or not." << endl;
        break;              // break is not mandatory for default statement.
    }

    return 0;
}