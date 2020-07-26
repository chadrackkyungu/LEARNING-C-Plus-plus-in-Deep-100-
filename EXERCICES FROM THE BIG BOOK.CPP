#include <iostream>
//THIS IS WHAT I ADD IN CASE HOW WANT TO ADD TWO NUMBER AFTER THE COMMA
#include <iomanip>
using namespace std;


int main(){
/*





const double PI = 3.14159265;

double radius = 10.67;
double height = 12.00;

//make sure to add this line as well
cout << fixed << showpoint;


//TO USE SETPRECISION U ADD IOMANIP ON TOP OF THE CODE
cout << setprecision(2) << "Line 13: setprecision(2) "<< endl;
cout << "The Numbers of the raduis is : " <<radius <<endl;
cout << "The Numbers of the height is : " <<height <<endl;
cout << " Volume is : "<< PI*radius*radius << endl;
cout << "The PI is : "    <<PI <<endl <<endl;

cout << endl;

//NOW YOU CAN SEE AFTER RUNING THE PROGRAMM THIS OUTPUT WILL GIVE THE  RADUIS,HEIGHT,VOLUME WITH 3 VIRGULE AT THE END
cout << setprecision(3)  << "This is the line which create the set precision " <<endl;
cout << "The The number of the radius is : " << radius << endl;
cout << "The The number of the height is : " << height << endl;
cout << " Volume is : " << PI*radius*radius << endl;
cout << "The PI is : "    << PI << endl << endl;



cout << setprecision(4)  << "This is the line which create the set precision " <<endl;
cout << "The The number of the radius is : " << radius << endl;
cout << "The The number of the height is : " << height << endl;
cout << " Volume is : " << PI*radius*radius << endl;
cout << "The PI is : "    << PI << endl << endl;

*/






/*
//program to complet the penalty on an unpaid credit card balance.
//the program assumes that the interest rate on the unpaid balance is 1.5% per month

const double interest_rate = 0.015;

double credit_Card_balance;
double payment;
double balance;
double penalty = 0.0;

cout << fixed << showpoint << setprecision(2);

cout << "Enter The credit card balance : ";
cin >> credit_Card_balance;

cout << endl;

cout << "Enter Your Payment : ";
cin >> payment;
cout << endl;

balance = credit_Card_balance - payment;

if(balance > 0){

    penalty = payment * interest_rate;
    cout << "The Balance is : " << balance;
    cout << endl;

    cout << "The Penalty to be add to your month bill is : " << penalty <<endl;

}*/









/*
const double PI = 3.14159265;

double penalty;
double credit_Card_Balance;
double interset_rate = 0.015;
double balance;
double payment;

//this sentence here it for display my answer with two number after the comma
// and for it to work you must add #include <iomanip> afeter the #include <iostream>
cout << fixed << showpoint << setprecision(2);

cout << "Enter Your Credit card balance : ";
cin >>credit_Card_Balance;
cout <<endl;

cout << "Enter Your payment : ";
cin >>payment;

balance = credit_Card_Balance - payment;

if(balance > 0)
{
    penalty = balance * interset_rate;
    cout << "The balance is : R" << balance;
    cout << endl;
    cout << "The penalty is : R" << penalty;
    cout << endl;
}
cout << endl;
*/




/*
//THE FOLLOWING PROGRAM DETERMINES AN EMPLOYEE'S WEEKLY WAGES. IF THE HOURS WORKED EXCEED 40.0 THE WAGES INCLUDE OVERTIME PAYMENT.
//the program says include the overtime inside the wages so at the end u just need to display wages only but if the time work as exceed 40 display wages
//and inside wages u need to include the overtime money.

//rate represente overtime
double wages,hours_Worked,rate;

cout << fixed << showpoint << setprecision(2);

cout << "insert Hours worked and rate : ";
cin >> hours_Worked >> rate;

cout <<endl;

if(hours_Worked > 40.0)
{

    wages = hours_Worked * rate + 1.5 * rate *(hours_Worked - 40.0);

}else{
wages = hours_Worked * rate;
}
cout << endl;

cout << " The wages are : " << wages;
*/







/*
//TYPICAL ON AN ECONOMY FLIGHT, IF EITHER THE SUITECASE DIMENSION(lenght+width+deph) IS MORE THAN 108 INCHES  OR THE WEIGHT IS MORE THAN 50 POUND
//, THEN THE AIRLINE MAY APPLY ADDITIONALCHRGES TO THE PASSAGER  DETERMINE IF ADDITIONAL CHARGES MAY BE APPLIED TO THE SUITECASE

double suitecase_Dimension, weigth_dimension, additional_charges;

cout << fixed << showpoint << setprecision(2);

cout << "Enter the suite case dimension (lenght + width + deph) :  ";
cin >>suitecase_Dimension;
cout << endl;

cout << "Enter weight dimension pound : ";
cin >> weigth_dimension;
cout << endl;



if (suitecase_Dimension > 108 || weigth_dimension > 50 )
{

    additional_charges = 50;

}

cout << "The additional charges is : " <<" R"<<additional_charges;
cout << endl;
*/




/*
//THIS PROGRAM COMPARE INTEGERS AND OUTPUT THE LARGEST NUMBER



int num1,num2;


cout << "Enter Your Numbers to Compare : ";
cin >> num1 >> num2;
cout << endl;


cout << "The Two Entegers Entered are " << num1 << " And " << num2 <<"\n\n";

if(num1 > num2)
{
    cout << "The Largest Number is : " << num1;
    cout <<endl;
}
else if(num2 > num1)
{
    cout << "The Largest Number is " << num2;
cout << endl;
}
else {
cout << "Both Numbers are equal! \n";

}
*/






/*switch cases

//the following program illustrates the effect of the break statement. it asks the user to input a number between 0 and 7

int num;
cout << "Enter a Number Between 0 and 7 : ";
cin >> num;

switch(num)
{
case 1:
case 2:
    //in this program as i did not put the break afeter this sentence the program is going to display this line and go straight to the next line
    //form there it will stopped because there is a break
    cout << "Learning to use switch case! ";

case 3:
case 6:
    cout << "C++ 's ";
    break;
case 4:
    cout << "Switch Structure ";
    break;
case 5:
    cout <<"Go haed and Learn ";
default :
    cout << "done";

}*/







int age;
cout << "Enter Your Age! ";
cin >> age;
cout <<endl;

switch(age > 18)
{

case true :
    cout << "Old Enough to take care of urself! ";
    break;
case false :
    cout << "You are still minor!";
    break;


}
return 0;
}
