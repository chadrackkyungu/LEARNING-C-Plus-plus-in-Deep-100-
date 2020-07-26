#include <iostream>
using namespace std;

int main(){
/*
int day;
cout <<"Enter Your Switch Number = ";
cin >> day;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  default:
    cout <<"looking Forward to the weekend";
}*/









//EXERCICE TWO
/*char Signs;
cout << "Enetr Your Signs : ";
cin >> Signs;

int total;
int total1;
int total2;

int num0;
int num4;
cout << "Enetr num0 : ";
cin >> num0;
cout << "Enter num4 : ";
cin >> num4;

total = num0 + num4;

total1 = num0 - num4;
total2 = num0 * num4;

switch (Signs){
    case '+':
        cout << "The Total of this number is : "<< total;
    break;

     case '-':
        cout << "The Total of this number is : "<< total1;
    break;

     case '*':
        cout << "The Total of this number is : "<< total2;
    break;
}*/


char Signs;

cout << "Enter A signs";
cin >> Signs;

int Num1;
cout << "Eneter First Number : ";
cin >> Num1;

int Num2;
cout << "Enter Second Number : ";
cin >> Num2;

int Totaux;
int Totaux1;
int Totaux2;
double Totaux3;
Totaux = Num1 + Num2;
Totaux1 = Num1 - Num2;
Totaux2 = Num1 * Num2;
Totaux3 = Num1 / Num2;


switch (Signs){

case '+':
    cout << "The Addition Of this is  : " << Totaux <<"\n";
break;

case '-':
    cout << "The Minus of this is : "<< Totaux1 <<"\n";
    break;

case '*':
    cout << "The Time of this is : "<< Totaux2 << "\n";
    break;
case '/':
    cout << "the Division of this is : " << Totaux3 << "\n";
    break;
default :
    cout << "Choose The Rigth Signs !";

}
return 0;
}
