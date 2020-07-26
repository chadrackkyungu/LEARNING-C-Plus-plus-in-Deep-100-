#include <iostream>
using namespace std;

//this is the function
int calculatePower(int base, int powerRaised);

int main()
{
    //and inside here i call my function
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;
    cout << "\n";
    cout << "Enter power number(positive integer): ";
    cin >> powerRaised;

    cout << "\n\n";
    result = calculatePower(base, powerRaised);
    cout << "The Power of base " << base << "^" << powerRaised << " is : " << result;

    return 0;
}


//this is trhe same function that is on top
int calculatePower(int base, int powerRaised)
{
    if (powerRaised !=0)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}


