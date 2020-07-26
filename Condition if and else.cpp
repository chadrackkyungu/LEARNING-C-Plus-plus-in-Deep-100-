#include <iostream>
using namespace std;

int main(){
/*
//FIRST EXAMPLE
int time = 20;

if (time < 15){
cout << "Bonjour";

}else if (time < 18){
cout << "Bonne Apres Midi";

}else{
cout << "Bonne Soiree";
}*/



//SECOND EXAMPLE
/*int num1;

cout << "Eneter Num1 :";
cin >>num1;

if (num1 < 15){
    cout << "Hi Chad";

}else if(num1 < 20){
cout << "Hi John";

}else{
cout <<"Hi Mom";
}*/


//this following programm is comparing two number given by the user and tell the condition if it true or false
/*int number1{0},number2{0};

cout << "Enter Your Number To start Comparing : \n";
cin >> number1 >>number2;

if (number1 == number2){
    cout << number1 << " == " << number2 << "\n";
}
if (number1 != number2){
    cout << number1 << " != " << number2 << "\n";
}
if (number1 < number2){
    cout << number1 << " < " << number2 << "\n";
}
if (number1 > number2){
    cout << number1 << " < " << number2 << "\n";
    }
if(number1 > number2){
    cout << number1 << " > " << number2 << "\n";
    }
if(number1 <= number2){
    cout << number1 << " <= " << number2 << "\n";
    }
if (number1 >= number2){
    cout << number1 << " >= " << number2 <<"\n";
    }*/

/*
int num;
cout << "Enter Your Number  : \n";
cin >> num;

if (num <= 15){
    cout << "Your Answer is : " << num + 10 <<"\n";

}
else if (num > 15){
    cout <<"Your Ansswer is : " << num - 5;
}*/






/*
int scrore1;
int scrore2;
int scrore3;
int Average;
string Name;
cout << "Enter Your Name : ";
cin >> Name;
cout <<"Enter Your Scores : \n";
cin >> scrore1 >> scrore2 >> scrore3;

Average = (scrore1 + scrore2 + scrore3)/3;

if (Average >= 49){


     if (Average >= 90){
        cout << Name << " You Have pass With Distinction! "<< Average << "\n";

     }
     if ((Average >= 80) && (Average < 90)){
        cout << Name <<" You Have Passed With Good Marks! " << Average <<"\n";
    }


}
*/






//write a program that prompt the user to input a number. the program should then output
// the number and the message saying whether the number is positive or zero
/*
int number;
string positive = "positive", negative = "negative";

cout << "Please enter your number ";
cin >> number;
cout <<endl;

cout << "The Integer You Entred is : " << number ;
cout << endl;

if(number > 0){
    cout << "The Number was : " << number << " And it :" << positive <<"\n\n";

}else{

cout << "The Number was : " << number << " And it :" << negative << "\n\n";
}
*/







//write a program that prompt the user to input three numbers. the program should output the numbers in ascending
/*
int a,b,c;

cout << "Enter The Numbers : ";
cin >> a >> b >> c;

    if(a < b && b < c){

    cout << a << b << c;
}
    else if(a > b && b > c){

    cout << c << b << a;
}
    else if (a < b && b > c){

        cout << a << c << b;
    }
    else {

        cout << "Sorry no answered for you! ";
    }
*/





//write a program that prompt the user to input the shape type (rectangle, circle, or cylinder ) and the appropiate dimension of the shape
//and the program output the following informtion for the rectangle = area and perimeter, circle = area and circumferance, for cylinder it ouput the the volume
// and the surface and the area

/*
string input_Shape ;
const double  PI = 3.141531;
int radius,width,lenght,height;
double area,circumference,perimeter,area1,volume;



cout << "Enter the shape : ";
cin >> input_Shape;
cout <<endl;

if(input_Shape == "circle")
{


    cout << "Enter The radius : ";
    cin >> radius;
    cout << endl;

    area = PI * radius *radius;
    cout << "The Area Of a Circle is : ";
    cout << area <<endl;

    circumference = 2 *PI * radius;
    cout << "The circumferance is : " << circumference;
    cout <<endl;
}
else if(input_Shape == "rectangle")
{

    cout << "Enter the width and lenght : ";
    cin >> width >> lenght;
    cout << endl;

    perimeter = 2*(width + lenght);
    cout << "The Perimeter of the rectangle is : "<< perimeter <<endl;

    area1 = width*lenght;
    cout << "The Area of the rectangle is : " << area1 <<endl;

}
else if(input_Shape == "cylinder")
{

    cout << "Enter the the radius and the eight : " ;
    cin >> radius >> height;
    cout << endl;

    volume = PI *radius * radius * height;
    cout << "The Volume Of a cylinder is : " << volume << endl;

    area = 2*PI*radius*(radius+height);
    cout << "The surface area of the cylinder is : " << area << endl;

}
*/





//write the program that prompt the user to input an integer between  0 and 35 if the number is less than or equal to 9 the program should output the number;
//otherwise is should output A for 10, B for 11 C for 12 and Z for 35 (hint use the cast operator static_cast <char>(), for  number > = 10
return 0;
}







