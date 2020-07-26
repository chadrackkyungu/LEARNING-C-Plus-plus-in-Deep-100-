#include <iostream>
using namespace std;
int main() {
    /*
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
    */


    int number, rev = 0, reminder;

    cout << "Enter Your Number : ";
    cin >> number;

    while(number != 0)
    {
        reminder = number % 10;
        rev = rev*10 + reminder;
        number /= 10;
    }
    cout << " Riverse number = " << rev;
    return 0;
}
