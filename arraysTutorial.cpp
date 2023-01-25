#include <iostream>
// #include <cmath>
using namespace std;

int main(){
    int n = 0;
    int age[n];

    cout << "Total Count of Array?" << endl;
    cin >> n;

    // age[0] = 23;
    // age[1] = 32;
    // age[2] = 42;
    // age[3] = 27;

    cout << "What's the first item?" << endl;
    cin >> age[0];

    for (int i = 1; i < n-1 ; i++){
        cout << "What's Next  " ;
        cin >> age[i];
    }

    cout << "What's at Last?  " ;
    cin >> age[n-1];

    for (int i = 0; i < n; i++){
        cout << age[i] << endl;
    }
    

    return 0;
}