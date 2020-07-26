
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;



//for this code to work u need to include this two line at the top
//#include <iomanip>
//#include <cstdlib>








//FIRST EXAMPLE

/*
int Maximum_Value (int a, int b, int c);

int main(){

cout << "Comparing 3 value and tell us which one is big \n\n" ;
//here i'm declaring those value
int first_Value;
int Second_Value;
int Third_Value;

//THIS LINE IS ASKING TO INPUT THE 3 NUMBERS

cout << "Entere the First Value :";
cin >> first_Value;
cout << endl;
cout << "Enter The Second Value :";
cin >> Second_Value;

cout << endl;
cout << "Enter The Third Value :";
cin >> Third_Value;

cout << endl;
//THIS LINE IS DISPLAYING THE 3 NUMBERS INSERTED
cout <<"The Numbers Insert are : " <<first_Value<<"," << Second_Value <<"," <<Third_Value <<"\n\n";
//AND THIS FINAL LINE DISPLAY THE LARGEST NUMBER AMONG THOSE 3 NUMBER
cout << "The Largest Number is : " << Maximum_Value(first_Value, Second_Value, Third_Value) << endl;

return 0;
}

//THIS IS MY FUNCTION IT CALLED FUNCTION PROTOTYPE
int Maximum_Value (int a, int b, int c){

//THIS WHERE ALL YOUR PROCECUSS WILL BE HAPPENED

//THIS LINE BASICLY SAY LARGETS HOLD THE NUMBER OF a
int hold_For_me = a;


//THIS LINE SAYS IF IS b > THEN THE NUMBER WHICH I PUT ASSIGN IN THE VARIBLE CALL HOLD FOR ME THEN REPLACE THAT NUMBER
//BY THE NUMBER WHICH IS IN B
if(b >= hold_For_me){
    hold_For_me = b;
}

//SAME AS THIS
if(c >= hold_For_me){
    hold_For_me = c;
}

return hold_For_me;
}
*/


/*
int Largest(int x, int y, int z);


int main(){

cout << "Create a programe that compare 3 number and dsiply the bigest number : \n\n";

int number1, number2, number3;

cin >> number1 >> number2 >> number3;
cout << endl;



cout << number1 << number2 << number3 << "\n\n";
cout << "The Largest number Among this tree number is : " << Largest(number1, number2,number3);

return 0;
}

//this the function and this function it call prototype
int Largest(int x, int y, int z){

int Hold_For_Me;

//THIS LINE BASICLY SAY LARGETS HOLD THE NUMBER OF X
Hold_For_Me = x;


if(y > Hold_For_Me){
    Hold_For_Me = y;
}


else if(z > Hold_For_Me){

    Hold_For_Me = z;
}

return Hold_For_Me;
}



int Large_Number(int a, int b, int c);

int main(){
cout << "Enter 3 number : \n\n";

int num1, num2, num3;

cin >> num1>> num2 >> num3;

cout << "The number iserdted are :" << num1 <<"," << num2 <<"," << num3 << "\n\n";
cout << "The Largest Number is : " << Large_Number(num1, num2, num3) <<"\n\n";

}

int Large_Number(int a, int b, int c){

int Just_Hold_For_me = a;

if(b > Just_Hold_For_me){

    Just_Hold_For_me = b;

}

if(c > Just_Hold_For_me){

    Just_Hold_For_me = c;

}
return Just_Hold_For_me;

}

*/



/*
int main(){

for ( int counter = 1; counter <= 20; counter++)
{

//ATTENTION SETW MEANS ONLY THE SPACE BETWEEN THE NUMBERS U CAN CHANGE THAT NUMBER WHICH IS 2 TO ANY NUMBER
    cout << setw(2) << (1 + rand() % 6);

    if(counter % 5 == 0){
        cout << endl;
    }
}


}*/



//THIS METHODE IS SHORT AND GOOD FOR SEARCHING FOR THE BIGEST VALUE

int Largest_Number(int a, int b);

int main(){

int Prompt_Me_a_Number = 1, Compare;

Compare = Prompt_Me_a_Number;

cout << "Input 5 Number from 0 to 5\n\n";

for(int i=0; i<5; i++){

    cin >> Prompt_Me_a_Number;

    Compare = Largest_Number(Prompt_Me_a_Number,Compare);
    cout <<endl;
}

cout << "The Largest Number is : "<< Compare;
cout <<endl;

return 0;
}

int Largest_Number(int a, int b){

if (a > b){
    return a;
}
else{
    return b;
}
}
*/















int nthFibonnacciNum(int first, int second, int nthFibNum);

//SECOND EXAMPLE

int main(){

int firstFibonacciNum;
int secondFibonnaciNum;
int nthFibonnacci;

cout << "Enter The First Two Fibonacci Numbers : \n\n";
cin >> firstFibonacciNum >> secondFibonnaciNum;
cout << endl;

cout << "The First Two Fibonacci numbers are "<< firstFibonacciNum << " And " << secondFibonnaciNum <<"\n\n";

cout << "Enter the position of the desired Fibonacci Number :\n";
cin >> nthFibonnacci;
cout <<"\n\n";

cout << "The Fibonacci Number at position " << nthFibonnacci <<"\n\n";

cout << "The Fibonacci Number at that position  is " << nthFibonnacciNum(firstFibonacciNum,secondFibonnaciNum,nthFibonnacci);
cout << endl;

return 0;

}


int nthFibonnacciNum(int first, int second, int nthFibNum){

int current;
int counter;

if(nthFibNum == 1)
    current = first;

else if (nthFibNum == 2)
    current = second;

else {
    counter = 3;
    while (counter <= nthFibNum)
        {
   current = second + first;
    first = second;
    second = current;


    counter++;
    }//end while
}//end else

return current;
}


int position_one(int x, int y, int z);

//TROISIEME EXAMPLE
int main(){
cout << "Enter your Numbers : \n\n";
int num1, num2, position;

cin >> num1 >> num2;
cout << endl;

cout << "The First two number " << num1 << " End " << num2 << endl;

cout << "Enter The Position : \n";
cin >> position;
cout << endl;

cout << "The Position Number is :"<< position <<"\n\n";

cout << "The Position of this numbers are :" << position_one(num1, num2,position);
cout << endl;


}


int position_one(int x, int y, int z){

int store, counter;

if (z == 1)
{
store = x;

}
else if(z ==2)
{
    store = y;
}
else{
    counter = 3;
    while(counter <= z){

        store = x * z;
        counter ++;
    }
}
return store;
}

*/



/*example 3
int My_function(int a, int b);
int main(){

int num1,num2;

cout << "Enter Two numbers :\n\n";
    cin >> num1 >> num2;
    cout <<endl;

cout << "The Result is :" << My_function(num1,num2);
cout <<endl;

return 0;
}

int My_function(int a, int b){

int result;
result = a + b;

return result;

}
*/


int My_function(int a, int b, char c);

//ATTENTION IN THE MAIN FUNCTION WHAT YOU HAVE TO INCLUDE IS THE INPUT AND THE DISPLAY
int main(){

//LIKE HERE I DECLARE 2 VARIABLE
int num1,num2;
char controle_The_Programm;

cout << "Insert 2 Values :\n\n";
//NOW I INPUT THE VALUE OF THE 2 VARIABLE
cin >> num1 >> num2;
cout << endl;

//AND NOW I DISPLAY THOSE VARIABLE THAT I INSERTED
cout << "The two values are : " << num1 << " and " << num2 << endl;



cout << "Insert Any Sign :\n\n";
cin >> controle_The_Programm;
cout <<endl;

//THIS LINE DISPLAY THE SIGN ENTER BY THE USER
cout << "The sign Enter is " << controle_The_Programm <<endl;

//AND THIS LINE DISPLAY THE ANSER OF THOSE TWO VARIABLE
cout << "The Result is : " << My_function(num1,num2,controle_The_Programm);
cout <<endl;
return 0;
}

//BUT WITH THE FUNCTION THAT I CREATE BY MY OWN THIS IS WHERE YOU NEED TO INCLUDE ALL PROCESS LIKE CALCULATING
int My_function(int a, int b, char c){

int result;
int counter = 0;


while(counter < 7){

    if(c == '+'){

        result = a + b;
    }

    else if(c == '-' ){
        result = a - b;
    }

    else if(c == '*'){
    result = a * b;
    }

    else if(c == '/'){
        result = a/b;
    }

    else if(c == '%'){
        result = a/b;
    }

    else{

    cout << "Sorry Enter the right sign \n\n";
    break;
    }

    counter++;

}

return result;

}

*/





/*

string Form_Details(string N,string Snm);
int Passs(int p);

int main(){
string Name,Surname;
int Password;

cout << "Insert Your Name Surname And Password:\n\n";
cin >> Name >> Surname >> Password;
cout <<"\n\n";

cout << "The Name  Enter is : " << Name <<endl;
cout << "the Surname enter is " << Surname <<endl;

//SETW(3)MEANS SPACE
cout << "The full name is : " << setw(3) << Form_Details(Name,Surname)<< endl;
cout << "the password is : " << setw(3) << Passs(Password) << endl;

return 0;
}



string Form_Details(string N, string Snm){

string HOld_My_Name;

HOld_My_Name = N + Snm;

return HOld_My_Name;
}

int Passs(int p){

int dis;

dis = p;

return dis;
}


*/















//EXAMPLE 4 NICE ONE THIS IS CALL USER DEFINE FUNCTION

//NAMED CONSTANTS - RESIDENTIAL CUSTOMERS
const double RES_BILL_PROC_FESS = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

//NAMED CONSTANTS - BUSINESS CUSTOMERS
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BESIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;



double residential();
double business();

int main(){

    //variable
int accountNumber;
char customerType;
double amountDue;


//this fixe the comma
cout << fixed << showpoint;
cout << setprecision(2);
//end

cout << "This Programm Compute the cable Bill.\n\n";
cout << "Enter Account Number :\n";
cin >> accountNumber;
cout << endl;

cout << "Enter Customer Type: R, r" << "(Residential) and B,b(Business) :\n\n";
cin >> customerType;
cout << endl;


switch(customerType){

case 'R':
case 'r':
    amountDue = residential();
    cout << "Account Number = "<< accountNumber <<endl;
    cout << "Amount Due = $"<< amountDue <<endl;
    break;

case 'B':
case 'b':

    amountDue = business();
    cout << "Account Number = " << accountNumber << endl;
    cout << "Amount Deu = $" << amountDue <<endl;
    break;

default:
    cout << "Invalide Customer type :\n\n";

}

return 0;
}

double residential(){

int noOfPREmiumChanels; //numbr of premium chanel
double bAmount; //billing amount

cout << "Enter The Number of Premium chanel used : \n";
cin >> noOfPREmiumChanels;
cout <<endl;

bAmount = RES_BILL_PROC_FESS + RES_BASIC_SERV_COST + noOfPREmiumChanels * RES_COST_PREM_CHANNEL;


return bAmount;
}

double business(){

int noOfBasicServiceConnections;
int noOfchannels;
double bAmount;

cout << "Enter the Number of Basic Service connection : \n";
cin >> noOfBasicServiceConnections;
cout <<endl;

cout << "Enter the number of premium channel used: \n";
cin >> noOfchannels;
cout << endl;

if(noOfBasicServiceConnections <= 10){
    bAmount = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST+noOfchannels * BUS_COST_PREM_CHANNEL;
}
  else{

    bAmount = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + (noOfBasicServiceConnections - 10)*
    BUS_BESIC_CONN_COST + noOfchannels + BUS_COST_PREM_CHANNEL;

  }

return bAmount;
}








/*

//NAMED CONSTANTS - RESIDENTIAL CUSTOMERS
const double RES_BILL_PROC_FESS = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

//NAMED CONSTANTS - BUSINESS CUSTOMERS
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BESIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

double residential(){

int number_OF_Premium_Channel;
int Bill_Amount;

cout << "You are in Residential Acount \n";
cout << "Enter The number of premium channel :\n";
cin >> number_OF_Premium_Channel;
cout << endl;
cout << "the number of premium channel are : " << number_OF_Premium_Channel << endl;

Bill_Amount = RES_BILL_PROC_FESS + RES_BASIC_SERV_COST + number_OF_Premium_Channel * RES_COST_PREM_CHANNEL;

return Bill_Amount;
}

double Business(){

int number_Of_basic_Connect;
int number_Of_Premium_Chanel;
double billing_Amount;

cout << "You are in Business Account : \n";
cout << "Enter the Number of basic service connection : ";
cin >> number_Of_basic_Connect;
cout << endl;
cout << "Enter The number of premium channel : ";
cin >> number_Of_Premium_Chanel;
cout << endl;


if(number_Of_basic_Connect <= 10){
    billing_Amount = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + number_Of_Premium_Chanel *
    BUS_COST_PREM_CHANNEL;
}
else {
    billing_Amount = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST +BUS_BESIC_CONN_COST + number_Of_Premium_Chanel
    *BUS_COST_PREM_CHANNEL;
}

return billing_Amount;
}








int main(){

int Account_Number;
char Customer_Type;
double My_Balance_I_Need_To_Pay;

cout << fixed << showpoint;
cout << setprecision(2);

cout << "Fill Free To Check Your Balance \n\n";
cout << "Enter Your Account Number : \n";
cin >> Account_Number;
cout << endl;

cout << "Choose Customer Type (R,r) it For Residential Cutomers and (B,b) it for  Business Account Customers\n\n";
cin >> Customer_Type;
cout << endl;


switch(Customer_Type){

case 'R':
case 'r':

    My_Balance_I_Need_To_Pay = residential();
    cout << "Your Account Number is : " << Account_Number << endl;
    cout << "The Balance is : $" << My_Balance_I_Need_To_Pay << endl;
    cout << "Make sure to pay on time !!!\n\n";
break;

case 'B':
case 'b':
    My_Balance_I_Need_To_Pay = Business();
    cout << " Your Account Number is : " << Account_Number << endl;
    cout << "Your Due Balance is : " << My_Balance_I_Need_To_Pay << endl;
    cout << "Make sure to pay on time !!!\n\n";
break;

default :
    cout << "Customer Type Invalid try again late\n\n";
}

return 0;
}



*/









/*
const double RES_BILL_PROC_FESS = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

//NAMED CONSTANTS - BUSINESS CUSTOMERS
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BESIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;


double residential(){

//int ACoountNumber;
int Number_Of_Prem;
double Bill_Amount;

cout << "RESIDENTIAL ACCOUNT!!!\n\n";
cout << "Enter The Number OF Premium Channel : ";
cin >> Number_Of_Prem;
cout << endl;

Bill_Amount = RES_BILL_PROC_FESS + RES_BASIC_SERV_COST + Number_Of_Prem * RES_COST_PREM_CHANNEL;


return Bill_Amount;
}


double Business(){

int number_OF_Prem_Channel;
int Number_Of_Basic_Ser_Conn;
double Billing_Amount;

cout << "BUSINESS ACCOUNT!!!!\n\n";
cout << "Enter The Number of premium channel : ";
cin >> number_OF_Prem_Channel;
cout <<endl;
cout << "Enter the Number of Basic Channel Connection : ";
cin >> Number_Of_Basic_Ser_Conn;
cout << endl;

if(number_OF_Prem_Channel <= 10){
    Billing_Amount = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + number_OF_Prem_Channel * BUS_COST_PREM_CHANNEL;

}
else{
  Billing_Amount = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST +   (number_OF_Prem_Channel - 10) * BUS_BESIC_CONN_COST
  +number_OF_Prem_Channel * BUS_COST_PREM_CHANNEL ;

}

return Billing_Amount;

}


int main(){

int Account_Number;
char Customr_Type;
double Display_The_Balance;

cout << fixed << showpoint;
cout << setprecision(2);


cout << "Enter Your Customer Number : ";
cin >> Account_Number;
cout<< "\n\n";
cout << "Enter Customer type residential(R,r) or business(B, b) :";
cin >> Customr_Type;
cout << endl;

switch(Customr_Type){

case 'R':
case 'r':
//THIS VARIABLE Display_The_Balance IS  HOLDING ALL THE CALCUALTION OF THE FUNCTION CALL RESIDENTIAL()
    Display_The_Balance = residential();

    cout << "RESIDENTIAL ACCOUNT!!!\n\n";
    cout << "The Account Number is : " << Account_Number;
    cout << "\n\n";
    //here i display the variable Display_The_Balance it display me all the information that is in
    cout << "The Balance You have To Pay is : $" << Display_The_Balance;
    cout << endl;
break;

case 'B':
case 'b':

//THIS VARIABLE Display_The_Balance IS HOLDING ALL THE CALCUALTION OF THE FUNCTION CALL BUSINESS()
    Display_The_Balance = Business();

    cout << "BUSINESS ACCOUT!!!\n\n";
    cout << "The Account Number is :" << Account_Number;
    cout << "\n\n";
     //here i display the variable Display_The_Balance it display me all the information that is in
    cout << "The Balance You Have To pay is : $" << Display_The_Balance;
    cout << endl;
break;
}

return 0;
}

*/







//THERE IS A SERIES OF NUMBER BUT DISPLAY ME THE LARGEST NUMBER

int Largest(int x, int y);

int main(){

int numbers = 1, maxeVal;

maxeVal = numbers;

cout << "his Program is reading 5 numbers inserted by the user and display the largest one \n\n";

for(int i=0; i<5; i++){

    cin >> numbers;

    maxeVal = Largest(numbers, maxeVal);
}

cout << "The Largest Number is " << maxeVal;

return 0;
}


int Largest(int x, int y){

if(x > y){
    return x;
}
else{
    return y;
}
}

*/
























/*
int sum(int num, int num2)
{
    int result;
    result = num + num2;
    return (result);
}

int main()
{


    cout << "The Sum of this values are : " << sum(10, 50);
    cout << endl << endl;



    //let me pass the paramaters values to my function parameters
    int first,second;
    cout << "Enter First Value : ";
    cin >> first;
    cout << "Enter The Second value : ";
    cin >> second;
    cout << endl;
    cout << "The Answe is : "<< sum(first,second);
    return 0;
}

*/



/*

int comparing_Value(int a, int b)
{
    int maxValue;

    if(a > b)
    {
    maxValue = a;
    }
    else
    {

    maxValue = b;

    }

    return maxValue;
}

int main(){

int one, two, three;

cout << "Enter The First Number : ";
cin >> one;
cout << "Enter The Second Number : ";
cin >> two;

cout << endl;
cout << "The MaximumValue AMong This Three Number is : " << comparing_Value(one,two);
cout << endl;

return 0;
}

*/


/*
int time(int x)
{
    if (x > 10)
    {
        return 5 * x;
    }

}

int main()
{
    int value;
    cout << "Enter The Value of x : ";
    cin >> value;
    cout << endl;
    cout << "The Multiplication is : " << time(value) <<endl;
    return 0;
}
*/





/*
int function1()
{
    int x = 45;
    return x;
}

int function2(int y)
{
    int a = 5,b = 5;

    return y + a * b;
}

int main()
{


    cout << "The Value of x is : " << function1();
    cout << endl;

     int num;
     cout << "Insert the value of y : ";
     cin >> num;
     cout << endl;
     cout << "The Value is : " << function2(num);
     return 0;
}
*/


/*
char courseGrade(int score)
{
    switch(score)
    {
   case 1:
   case 2:
   case 3:
   case 4:
   case 5:
    return 'F';
   case 6:
    return 'G';
   case 7:
    return 'T';
   case 8:
    return 'H';
   case 9:
    return 'L';
   case 10:
    return 'P';

   default :
    return 'N';

    }
}

int main()
{
    double value;
    cout << "Insert the value :";
    cin >> value;

    cout << endl;
    cout << "The Grade is : " << courseGrade(value);
    return 0;

}
*/


















/*
void myfunction();

int main(){
myfunction();
cout <<endl;

return 0;
}

/*
//my function
void myfunction(){
int num,num1,num2,store,average;

cout << "Enter Your Numbers : \n";
cout <<"Number one : ";
cin >>num;
cout <<"Number one : ";
cin >>num1;
cout <<"Number one : ";
cin >>num2;

cout <<endl;

store = num * num2 * num1;
average = store / 3;

cout << "The Product Of this numbers are : " << store;
cout << "\n\n";
cout << "The Average is : " << average;
cout << "\n";
}
*/



/*
//OR YOU CAN WRITE IT THIS WAY
void myfunction(){
int num,num1,num2,store,average;

cout << "Enter Your Numbers : \n";
cout <<"Number one : ";
cin >>num;
cout <<"Number one : ";
cin >>num1;
cout <<"Number one : ";
cin >>num2;

cout <<endl;

store = num * num2 * num1;
average = store / 3;

cout << "The Product Of this numbers are : " << store;
cout << "\n\n";
cout << "The Average is : " << average;
cout << "\n";
}

int main(){
myfunction();
cout <<endl;
*/














