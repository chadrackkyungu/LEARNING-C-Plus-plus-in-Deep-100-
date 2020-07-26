#include <iostream>
#include <iomanip>
//#include <cstdlib>
#include <cmath>
using namespace std;

/*
void Display_Name(string Name){

cout << Name <<endl;
}

int main(){

Display_Name("chadrack");

return 0;
}
*/

/*
//default function

void Display_Countres(string country = "South Africa"){

    cout << country <<endl;

}


int main(){

Display_Countres();
Display_Countres("Burundi");
Display_Countres("Kenya");
Display_Countres("LEsotho");
Display_Countres("Zimbabwe");

return 0;
}
*/




/*
void Display_Name_And_Age(string Name, int Age){

cout << "The Name is : "<< Name << " And Age is: " << Age << endl;

}

int main()
{
    Display_Name_And_Age("chadrack kyungu", 52);

    return 0;
}
*/



/*
int Result(int num1, int num2)
{
   // int Sum;
   // Sum = num1 + num2;

    return num1 + num2;
}

int main(){



cout << Result(50, 52);

return 0;
}
*/



/*
int Display_me(int x, int y){

int sum;

sum = x + y;
return sum;
}

int main()
{
    int a,b;

    cout << "Input two number : \n\n";
    cin >> a >> b;
    cout << endl;

    cout << Display_me(a,b);
    cout << endl;

    return 0;
}
*/




/*

// THIS PROGRAMM IT CALCULATING THE AREA AND THE PERIMETER

double display_Result(double length, double width){

int Area, Perimeter;

Area = length + width;
Perimeter = 2 * (length + width);

cout <<" The Area is : " << Area << endl;
cout << "The Perimeter is " << Perimeter << endl;
}


int main()
{
    int val1, val2;
    cout << "Calculate the Area and the Perimeter \n\n";
    cin >> val1 >> val2;
    cout << endl;

    display_Result(val1, val2);

 return 0;
}
*/



/*
int Average_Result(int Math, int Science)
{
    int Average;
    char grade;


    Average = (Math + Science)/2;

    if(Average >= 90.00){
        grade = 'A';
    }

    else if(Average >= 80.00){
        grade = 'B';
    }
    else if(Average >= 70.00){
        grade = 'C';
    }
    else if (Average >= 50){
        grade = 'D';
    }
    else{
        grade ='E';
    }

   cout << endl;
   cout << "The Grade is :" << grade;
   cout << endl;

}

int main(){

int Marks_For_Math, Marks_For_Science;


cout << "Enter Your Two Marks : \n\n";
cin >> Marks_For_Math >> Marks_For_Science;
cout << endl;


 Average_Result(Marks_For_Math,Marks_For_Science);

return 0;
}
*/




/*

void PrintStart(int blanck, int startInline)
{

    int count;
    for (count = 1; count <= blanck; count++)

        cout << ' ';

    for(count = 1; count <= startInline; count++)

        cout << " *";
        cout << endl;

}

int main()
{
    int noOfLine, counter, noOfblanck;

    cout << "Enter Number of start lines (1 to 20) to Be Printed :\n";
    cin >> noOfLine;

    while(noOfLine < 0 || noOfLine > 20)
    {
        cout << "Enter the number of start lines "<< "(1 to 20) to be printed : \n";
        cin >> noOfLine;
    }

    cout << endl << endl;
    noOfblanck = 30;


    for(counter = 1; counter <= noOfLine; counter++)
    {
        PrintStart(noOfblanck, counter);
        noOfblanck--;
    }
    return 0;
}
*/








/*

void Functio_Value_Parameters(int num, int num1){


cout << " The of this 2 number is = " << num + num1;
cout << endl;

}
int main(){

cout << "This variable is holding number 6 \n\n";
int number = 6;
int number2;

cout << "Insert A value to represent number 2: ";
cin >> number2;
cout << endl;
//this line pass the value in the parameter call num using the variable number
Functio_Value_Parameters(number,number2);

return 0;
}
*/






//Create a programm that takes a course score(a value between 0 and 100) and determines a student's
//course grade.

/*
int Result(char Grade);

int main()
{
    int Pass_The_val_To_grade;

    cout << "Enter The Value : \n";
    cin >> Pass_The_val_To_grade;

    Result(Pass_The_val_To_grade);

    return 0;
}

int Result(char Grade)
{
    if(Grade >=90){
        cout <<"The Grade is  " <<'A';
    }
    else if(Grade >=80){
      cout <<"The Grade is  " <<  'B';
    }
    else if(Grade >= 70){
       cout <<"The Grade is  " << 'C';
    }

     else if(Grade >= 60){
       cout <<"The Grade is  " << 'D';
    }

     else if(Grade >= 50){
       cout <<"The Grade is  " << 'E';
    }

    else{
       cout <<"The Grade is  " << 'F';
    }
}
*/











/*

void DIT3_year()
{
    string Name;
    int ID_number;
    int Math_Score,Prog_score,Netwrk_score,result;

    cout << "Enter your Name : ";
    cin >> Name;
    cout << endl;

    cout << "Enter Your Id Number : ";
    cin >> ID_number;

    cout << "Enter your Marks For Each Module Math, Programming, Network: \n";
    cin >> Math_Score >> Prog_score >> Netwrk_score;
    cout << endl;

    result = (Math_Score + Prog_score + Netwrk_score) / 3;
    cout << "This is DIT_3_Year\n";
    cout << "Your Name is : " << Name << endl;
    cout << "Id Number is : " << ID_number << endl;
    cout << "Your Marks Score is : "<< result << endl;


    if(result >=80){
        cout << "Congratlation You Have got Distinction !!!\n\n";

    }
    else if(result >= 70){
         cout << "Congratlation You Have got Good Point !!!\n\n";

    }
    else if(result >=60){
         cout << "Congratlation You Have got Average !!!\n\n";
    }
    else if(result >= 50){
         cout << "You Pass !!!\n\n";
    }
    else{
         cout << "You have Fail !!!\n\n";
    }


}

void DIT2_Year()
{
    string Name;
    int ID_number;
    int Math_Score,Prog_score,Netwrk_score,result;

    cout << "Enter your Name : ";
    cin >> Name;
    cout << endl;

    cout << "Enter Your Id Number : ";
    cin >> ID_number;

    cout << "Enter your Marks For Each Module Math, Programming, Network: \n";
    cin >> Math_Score >> Prog_score >> Netwrk_score;
    cout << endl;

    result = (Math_Score + Prog_score + Netwrk_score) / 3;
    cout << "This is DIT_2_Year\n";
    cout << "Your Name is : " << Name << endl;
    cout << "Id Number is : " << ID_number << endl;
    cout << "Your Marks Score is : "<< result << endl;

    if(result >=80){
        cout << "Congratlation You Have got Distinction !!!\n\n";

    }
    else if(result >= 70){
         cout << "Congratlation You Have got Good Point !!!\n\n";

    }
    else if(result >=60){
         cout << "Congratlation You Have got Average !!!\n\n";
    }
    else if(result >= 50){
         cout << "You Pass !!!\n\n";
    }
    else{
         cout << "You have Fail !!!\n\n";
    }
}


void DIT1_Year()
{
    string Name;
    int ID_number;
    int Math_Score,Prog_score,Netwrk_score,result;

    cout << "Enter your Name : ";
    cin >> Name;
    cout << endl;

    cout << "Enter Your Id Number : ";
    cin >> ID_number;

     cout << "Enter your Marks For Each Module Math, Programming, Network: \n";
    cin >> Math_Score >> Prog_score >> Netwrk_score;
    cout << endl;

    result = (Math_Score + Prog_score + Netwrk_score) / 3;

    cout << "This is DIT_1_Year\n";
    cout << "Your Name is : " << Name << endl;
    cout << "Id Number is : " << ID_number << endl;
    cout << "Your Marks Score is : "<< result << endl;

    if(result >=80){
        cout << "Congratlation You Have got Distinction !!!\n\n";

    }
    else if(result >= 70){
         cout << "Congratlation You Have got Good Point !!!\n\n";

    }
    else if(result >=60){
         cout << "Congratlation You Have got Average !!!\n\n";
    }
    else if(result >= 50){
         cout << "You Pass !!!\n\n";
    }
    else{
         cout << "You have Fail !!!\n\n";
    }
}



int main()
{
    int num;
    cout << "Choose Your Qualification : (1) is DIT_1_Year, (2) is DIT_2_Year, (3)is DIT_3_Year \n";
    cin >> num;
    cout <<endl;

    switch(num)
    {
    case 1:
         DIT1_Year();

         break;

    case 2:
         DIT2_Year();

         break;

   case 3:
         DIT3_year();
         break;

    default:
        cout << "Invalid Qualification Try Again!!!\n\n";
    }

}











/*
int functions(int num,int num2)
{
    int result;
    result = num * num2;

    return result;
}



int main()
{
    int x,y;

    cout << "Insert Two Numbers : ";
    cin >> x >> y;
    cout << endl;

    cout <<" The Product is :"<< functions(x,y);

    return 0;
}






int functions()
{
    int num,num2,result;
    cout << "Insert Two Numbers : ";
    cin >> num >> num2;
    cout << endl;

    result = num * num2;

   cout << result;
}


int main()
{
    functions();

    return 0;
}
*/






/*
void sunny(int& a, int b)
{
    int temp = 20;
    int w;
    temp = (a + b) / 2;
    w = a / temp;
    b = a + w;
    a = temp - b;
}

void cloudy(int u, int& v)
{
    int temp = 20;
    temp = 2 * u + v;
    v = u;
    u = v;
}

int main()
{
    int num1 = 6;
    int num2 = 10;
    int  temp = 20;

    cout << num1 << "   " << num2 << "   "<< temp <<endl;

    sunny(num1, num2);
    cout << num1 << "   " << num2 << "   " << temp <<endl;

    cloudy(num1,num2);
    cout << num1 << "   " << num2 << "   " << temp << endl;
    return 0;
}
*/

/*
void compute(int x, int y, int z)
{
    int w = x + y -z;

    y = w % 2;
    cout << y <<endl;

    x = y + w ;
    cout << x <<endl;

    z = x * y;
    cout << z <<endl;
}



int main()
{
    int one =7, two = 5, three=6;

    compute(one, two, three);

}
*/







/*

int secret(int a, int b)
{
    int d;
    d = a + b;
    b = a * d;
    return b;
}

void func(int x, int y)
{
    int val1, val2;

    val1 = x + y;
    val2 = x + y;

    y = val1 + val2;

    cout << val1 << "   "<< val2 <<"  "<< y;
}




int main()
{
    int num,num2;

    cout << "Enter two values :";
    cin >> num >> num2;
    cout << endl;

    cout << secret(num,num2);
    cout << endl;
    func(num, num2);
}
*/





/*
void TrackVar(double x, double y)
{
    double z;
    z = floor(x) + ceil(y);
    x = x + z;
    y = y - z;

    cout << "z = " << z << " , ";
}

int main()
{
    double num1, num2;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter Two values : ";
    cin >> num1 >> num2;

    TrackVar(num1,num2);

    return 0;
}
*/

//OR

/*
double TrackVar(double x, double y)
{
    double z;
    z = floor(x) + ceil(y);
    x = x + z;
    y = y - z;

    return z;
}

int main()
{
    double num1, num2;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter Two values : ";
    cin >> num1 >> num2;

    cout << " the Value of z is " << TrackVar(num1,num2);

    return 0;
}
*/


/*
double rectangle(double l, double w);
double Circle(double r, double w);
double Cylinder(double bR, double l);

int main()
{
    double radius,heigth, length, width;
    int choice;

     cout << fixed << showpoint << setprecision(2);

     cout << "This Program  calutale the area of a rectangle, the area of a Circle, or"
     << "volume of a cylinder.\n\n";

     cout << "To run theprogramm enter : \n";

     cout << "  1: to find the area of a circle.\n";
     cout << "  2: to find the area of a rectangle.\n";
     cout << "  3: to find the Volume of a Cylinder.\n";
     cin >> choice;
     cout << endl;


    switch(choice){

    //IT EASY CHAD THIS SIDE WHICH IS THE MAIN FUNCTION YOU JUST INPUT AND PASS WHAT SO EVER YOU
    //INPUT INTO YOU FUNCTION
    case 1:
    cout << "Enter the radius of the base and the height of a cylinder: ";
    cin >> radius >> heigth;
    cout << endl;
    cout << "The Area of a circle is = " << Circle(radius, heigth) << endl;
    break;
    //END

    case 2:
    cout << "Enter the radius  of a Circle: ";
    cin >> length >> width;
    cout << endl;

    cout << "The Area of a rectangle is = " << rectangle(length,width) <<endl;
    break;


    case 3:
    cout << "To calculate the cylinder : Enter the lenght and the width of a rectangle : ";
    cin >> length >> width;
    cout << endl;

    cout << "The Volume of a cylinder is = " << Cylinder(length,width) <<endl;
    break;


    default:
        cout << "Invalid Choice!\n\n";

}

return 0;
}

//HERE YOU DO THE CALCULATION OF WHAT SO EVER YOU INPUT IN THE FUNCTION MAIN THIS SIDE YOU JUST
// PROCESS
double rectangle(double l, double w)
{
    //THIS IS WHAT WE CALL PROCESS 2 TYPE OUTPUT THE PROCESS USING "RETURN" KEY WORD OR
    //USING "COUT <<"
    return l * w;
}

double Circle(double r, double w)
{
    double PI = 3.1419;
    return PI * r * w;
}


double Cylinder(double bR, double l)
{
    double PI = 3.1419;
    return PI * bR * bR * l;
}

*/




//THESE ARE EXERCICES



/*a. Write the function sum() with four parameters that calculates the arguments provided and returns their sum.
Parameters: Four variables of type long.
Returns: The sum of type long.
Use the default argument 0 to declare the last two parameter of the
function sum().Test the function sum() by calling it by all three possible
methods. Use random integers as arguments.
b. Now restructure your program to store the functions main() and
sum() in individual source files, for example, sum_t.cpp and sum.cpp



 long sum(long num1, long num2, long num3 = 0, long num4 = 0)
{
    long sum;

    sum = num1 + num2 + num3 + num4;

    return sum;

}

int main()
{
    long a,b;
    cout << "Enter Two integers  :\n";
    cin >> a >> b;
    cout << endl;

    cout << sum(a,b);

    return 0;
}
*/








/*Exercise 2
a. Write an inline function, Max(double x, double y), which returns
the maximum value of x and y. (Use Max instead of max to avoid a collision with other definitions of max.) Test the function by reading values
from the keyboard.
Can the function Max() also be called using arguments of the types
char, int, or long?
b. Now overload Max() by adding a further inline function Max(char x,
char y) for arguments of type char .
Can the function Max() still be called with two arguments of type
int?



// the num3 variable as 80 inside so it is call default argument

//function one using double dataType

double Max(double num, double num2)
{
double MaxVal;

MaxVal = num;

if(num > num2)
{
    MaxVal = num;
}

else{
    MaxVal = num2;
}

return MaxVal;
}



//function two using char dataType
char Max2(char x, char y)
{
char res;

if(x > y)
{
    res = x;
}
else if(y > x){
    res = y;
}
else{
    cout << " Invalid input \n ";
}

 return res;
}


//function three using int dataType

int Max3(int i, int z)
{
    int display = i;

    if(i > z){
        display = i;
    }
    else if(z > i)
    {
        display = z;
    }
    else{
        cout << "Invalid input\n";
    }

    return display;
}


int main()
{
    cout << "\n\n";
    cout << "This Probleme is comparing two variables and display the greater one using different dataType : \n\n";

    //this represent function one
    double x,y;
    cout << "Enter Two Double Value to compare and display the bigest one : \n";
    cin >> x >> y;
    cout << " The Bigest Value is = " << Max(x,y) << endl;
    cout << endl;
    //end

    // this represente function two
    char c1, c2;
    cout << "Enter tow numbers to represente Characters and compare the bigest one :\n";
    cin >> c1 >> c2;
    cout <<endl;
    cout << " The bigest character is = " << Max2(c1,c2) << endl;
    //end

    //this represnte function three
    int t,j;
    cout << "Input  two integer value to compare and display the bigest one : \n";
    cin >> t >> j;
    cout << endl;

    cout << " The great value is = " << Max3(t,j) << endl;
    cout << endl;
    //end

    return 0;
}
*/









/*Exercise 3
The factorial n! of a positive integer n is defined as
n! = 1*2*3 . . . * (n-1) * n
Where 0! = 1
Write a function to calculate the factorial of a number.
Argument: A number n of type unsigned int.
Returns: The factorial n! of type long double.
Formulate two versions of the function, where the factorial is
a. calculated using a loop
b. calculated recursively
Test both functions by outputting the factorials of the numbers 0 to 20 as shown
opposite on screen.







int  N_MAX = 20;
long double fact1(unsigned int n);
long double fact2(unsigned int n);

int main()
{
unsigned int n;

cout << fixed << setprecision(0);

// --- Iterative computation of factorial ---
cout << setw(10) << "n" << setw(30) << "Factorial of n"
<< " (Iterative solution)\n"
<< " -----------------------------------------"
<< endl;


for( n = 0; n <= N_MAX; ++n){

cout << setw(10) << n << setw(30) << fact1(n) << endl;

cout << "\nGo on with <return>";
cin.get();
}

cout << setw(10) << "n" << setw(30) << "Factorial of n"
<< " (Recursive solution)\n"
<< " -----------------------------------------"
<< endl;

for( n = 0; n <= N_MAX; ++n)

cout << setw(10) << n << setw(30) << fact2(n) << endl;
cout << endl;

return 0;
}


long double fact1(unsigned int n)
{

long double result = 1.0;

for( unsigned int i = 2; i <= n; ++i)
result *= i;

return result;
}




long double fact2(unsigned int n)
{

if( n <= 1)
return 1.0;

else
return fact2(n-1) * n;

}
*/















/*Exercise 4
Write a function pow(double base, int exp) to calculate integral powers of
floating-point numbers.
Arguments: The base of type double and the exponent of type int.
Returns: The power baseexp of type double.
For example, calling pow(2.5, 3) returns the value
2.53 = 2.5 * 2.5 * 2.5 = 15.625
This definition of the function pow()means overloading the standard function
pow(), which is called with two double values.
Test your function by reading one value each for the base and the exponent
from the keyboard. Compare the result of your function with the result of the
standard function.*/




int pow(int base, double exponet)
{
    int result = 1;
    int res;

    for (int i=0; i < exponet; i++)
    {

        result  = result * i;
        res = result * base;

    }
    return res;
}

int main()
{
    int x, y;

    cout << setw(10) << "Enter 2 value : \n";
    cin >> x >> y;
    cout << endl;

    /*setw(70) se just bouger cette phrase a une distance de 70
    cout << setw(10) << "The base exponent is : " << pow(x,y);
    cout << endl;*/




    //OR YOU CAN USE THIS methode to pass the value to your own function
    //it depend which methode you want to use the first one or the second which is this
    int keep;

    keep = pow(x,y);
    cout << " Display = " << keep << endl;

    return 0;
}


