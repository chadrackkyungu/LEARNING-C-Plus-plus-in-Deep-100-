#include <iostream>
using namespace std;

int main(){
/*
 string food = "Pigzza";




cout << food << "\n\n";
cout << "This is Call Memory Adress Of My Food Variables : " << &food << "\n";
*/


string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";





/*Example explained
Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr). Note that the type of the pointer has to match the type of the variable you're working with.

Use the & operator to store the memory address of the variable called food, and assign it to the pointer.

Now, ptr holds the value of food's memory address.

Tip: There are three ways to declare pointer variables, but the first way is preferred:*/

//string* mystring; // Preferred
//string *mystring;
cout << "\n\n";

/*
int num = 10;
int * Point;
Point = & num;
//this will display the adrress of the memory
cout << Point <<endl;
//this will displayt the value of the variable
cout << *Point <<endl;

cout << "\n\n";





int num = 100;

int * Pointer;
Pointer = &num;


cout << Pointer <<endl;
cout << &Pointer <<endl;
cout << *Pointer << endl;
*/



int num[4] = {12,15,18,82};

int*p;
p = num;

for ( int i=0; i< 4; i++){

    cout << *p++ << " ";
}

 return 0;
}
