
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














