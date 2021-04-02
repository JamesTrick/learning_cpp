// This program takes a users age, and multplies the age by 2 
// and returns this number back to the user.

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your age, or integer: ";

    int num{ 0 };
    cin >> num;

    cout << "Double " << num << " is: " << num * 2 << endl;

    cout << "Triple " << num << " is: " << num * 4 << endl;
    return 0;
}