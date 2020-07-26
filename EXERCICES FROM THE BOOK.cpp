#include <iostream>
using namespace std;

int main(){
//WRITE A PROGRAM THAT PRINT THE CHARACTERS V TO Z ON THE SAME LINE WITH EACH PAIR OF ADJACENTS CHARACTERS  SEPARATED BY ONE SPACE
// EXAMPLE OF THE SPACE  : VX YZ
//a) Using one statementt with two stream insertion oparators
//b) Using one statement with four stream insertion oparators
//c) Using Two statment with one stream insertion oparator each.

//PART A
/*cout << "VX YZ \n";

//PART B
cout << "V" <<"X" <<" " << "Y" <<"Z\n";

//PART C

cout << "V" <<"X \n";
cout << "Y" <<"Z";
*/


//SECOND EXERCICES
//Write a Program that asks the user to Enter Two integers, obtains the numbers from the user prints the large numbers
//followed by the words "is large." if the numbers are equal, print the message "Theese numbers are Equal
/*int First_Number, Second_Number;

cout <<"Enter Your Numbers : \n";
cin >> First_Number >> Second_Number;

if(First_Number > Second_Number){
    cout <<"First Number :" << First_Number << " is Large \n";
}
else if( Second_Number > First_Number){
cout << "Second Number :" << Second_Number << " is Large \n\n";
}
else if(First_Number == Second_Number){
    cout << "These Numbers are Equals!\n";
}*/








//THIRD EXERCICES :
//Write the program that display the sum, Avergae, Product, Smallest,And The Largest
/*
int x, y, z, sum, Average, Product, Smallest, Largest;
cout << "Enter Three Numbers : \n";
cin >> x >> y >> z;

sum = x + y + z;
cout << "The Sum Of These Numbers Are : " << sum <<"\n";

Average = sum/3;
cout << "The Average is : " << Average << "\n";

Product = x * y * z;
cout << "The Product Of These Numbers Are : " << Product << "\n";

if (x < y && x < z){
    cout << "The Smallest is : " << x <<"\n";

}
if (x > y && x > z){
    cout << "The Largest Number is : " << x <<"\n";
}

if(y < x && y < z){
    cout << "The Smallest Number is : " << y <<"\n";

}

if(y > x && y > z){
    cout << "The Largest Number is : " << y <<"\n";

}
if (z < x && z < y){
    cout << "The Smallest Number is : " << z << "\n";
}
if (z > x & z > y){
    cout << "the Largest Number is : " << z << "\n";
}*/











// Write A Program that calculate the area of a circle and print the area,circumferences,diameter.
/*int Radius;
cout << "Enter Your Number That Represent The Radius : ";
cin >> Radius;

cout << "The Diameter is :" << Radius*2.0 <<"\n";
cout << "The Circumferences is : "<< 2*3.14159*Radius <<"\n";
cout << "The Area is : "<< Radius * Radius *3.14159 <<"\n";
*/






//Write a program that read 5 integer enter by the user and display the Largest one And the Smallest one in the group

/*int a,b,c,d,e;

cout << "Enter Five Numbers To Compare To each Other : \n";
cin >> a >> b >> c >> d >> e;

if (a < b && a < c && a < d && a < e){
    cout << "The Smallest Number is : "<< a <<"\n";

}
if(a > b && a > c && a > d && a > e){
    cout << "The Largest Number is :"<< a <<"\n";

}
if(b < a && b < c && b < d && b < e){

    cout << "The Smallest numbers is : " << b <<"\n";

}
if(b > a && b > c && b > d && b > e){

    cout << "The Largest numner  is : " << b <<"\n";

}
if(c < a && c < b && c < d && c < e ){
    cout << "The Smaledt number is : "<<c <<"\n";
}

if(c > a && c > b && c > d && c > e ){
    cout << "The Largest number is : "<< c <<"\n";
}

if(d < a && d < b && d < c && d < e ){
    cout << "The Smaledt number is : "<< d <<"\n";
}

if(d > a && d > b && d > c && d > e ){
    cout << "The Largest number is : "<< d <<"\n";
}

if(e < a && e < b && e < d && e < c ){
    cout << "The Smaledt number is : "<< e <<"\n";
}

if(e > a && e > b && e > d && e > c ){
    cout << "The Largest number is : "<< e <<"\n";
}*/






//write the program that read in tw integres and determine and prints wether each integers, as well as the sum of the two integers
//is an odd umber. use the remainder oparator (%).an odd numbers is not a multiple of two.
//Any odd number has a remainder of one when divided by 2.
/*
int num;
cout <<"Enter A number : ";
cin >>num;

if(num % 2 == 0){
    cout << num <<" is an Even\n";

}
else if(num % 2 != 0){
    cout << num << " is an odd";
}
*/




//write a program that reads in three integers and determines  and print if the first two intergers are factors of the second.
//[Hint:use the remainder oparator (%).]
/*
int num1,num2;
cout << "Enter Two Value : ";
cin >> num1 >> num2;
int num3 = 5;

if (num1 % num2 == num3){
    cout << num1 << " and "<<num2 << " Are Factor of Second : " << num3 <<"\n";

}
if (num1 % num2 != num3){
    cout << num1 << " and " << num2 <<" Are Not Factor of " << num3 <<"\n";
}
*/




//display the following checkrboard Pattern with eight output
//statement, then disply the same pattern using as few as possible
/*
cout << "********" << endl;
cout << " ********" << endl;
cout << "********" << endl;
cout << " ********" << endl;
cout << "********" << endl;
cout << " ********" << endl;
cout << "********" << endl;
cout << " ********" << endl;
*/











return 0;

}
