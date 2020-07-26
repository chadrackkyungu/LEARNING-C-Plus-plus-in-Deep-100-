#include <iostream>
using namespace std;



/*
//MULTIPLE INHERITANCE
class A{

private: int NoOfRoll;

public:
    void  Value_of_Number(int x)
    {
        NoOfRoll = x;
    }

    void disp()
    {
        cout << "The Numbre of Roll for this student is : " << NoOfRoll <<endl;
    }
};

class B{

//USING PROTECTED MEANS THIS VARIABLE CAN BE ACCESS EVERY WHERE
protected: int num1, num2;

public:
    void addition(int a, int b)
    {
        num1 = a;
        num2 = b;

    }
    void display()
    {
        cout << " The Value of num1 one is: " << num1 <<endl;
        cout << " The Value of num2 two is : "<< num2 <<endl;
    }
};


class C : public A, public B
{
protected:
    float Total;

public:
    void calculate_and_Display()
    {
        Total = num1 + num2;
        disp();
        display();
        cout << "The Total is : " << Total <<endl;
    }


};

int main()
{
    int nOfRol;
    cout << " Enter number of roll: "; cin >> nOfRol; cout <<endl;

    class C object;

    object.Value_of_Number(nOfRol);
    object.addition(55,20);
    object.calculate_and_Display();

    return 0;
}
*/


/*

//HIERARCHICAL  INHRETANCE

class shaps{

public:
    int num1, num2;

void input(int a, int b)
{
    num1 = a;
    num2 = b;
}

};

// i create a public clas and assign another public class from the previouse class
class rectangle : public shaps
{

public:
    int areaOftringle;
public:

    void tring()
    {
        areaOftringle = num1 * num2;

    }
    void distringle()
    {
        cout << " The area of a triangle is: " << areaOftringle <<endl;
    }
};

// i create a public clas and assign another public class from the previouse class
class circle : public rectangle{

private:
    float areaOfcircle;

public:
    void calareaofcircle()
    {
        areaOfcircle = 3.14352 *(num1 + num2);

        distringle();
        cout << " the Area of a circle is : " << areaOfcircle <<endl;
    }
};



int main()
{
    circle object;
    object.input(55,33);
    object.calareaofcircle();

    return 0;
}
*/













/*
class A
{
	     	int 	data;
 public:
 	     	  	void f(int arg)
 	  	  	{
 	  	  	  	data = arg;
 	  	  	}

 	     	  	int g()
 	  	  	{
 	  	  	  	return data;

 	  	  	}

};

class B : public A { };

int main()
{
     	B  obj;
 obj.f(20);

 	     	cout << obj.g() << endl;

    return 0;
}








class First_Class{

int  Number;

public:
    void collect(int insertNumber){

    Number = insertNumber;

    }

    int Display()
    {

    return Number;
    }

};

class Second_Class : public First_Class{};

int main()
{
    class Second_Class object;
    object.collect(55);

    cout << "The Answer is: " << object.Display() <<endl;

    return 0;
}





class first{

private:
    char name[30];
    int ID, Marks;

public:
    void collect_info()
    {
      cout << "\n\n\n Enter Your Details: \n";
      cout <<" Enter Your Name :"; cin >>name; cout <<endl;
      cout <<" Enter Your Id Number: "; cin >> ID; cout <<endl;
      cout <<" Enter Your Marks: "; cin >> Marks; cout <<endl;
    }

        void Display_info()
        {
            cout << "\n Your Details are: \n";
            cout << " Your Name is : " << name << endl;
            cout << " Your ID Number is : " << ID << endl;
            cout << " Your Name is: " << Marks << endl << endl;
        }

};

class Second_class : public first{};

int main()
{

    class Second_class object;
    object.collect_info();
    object.Display_info();

    return 0;
}

*/


/*
//this programm is about two different poeple which share same quality on the other and they don't and i dont wan't to
// repeat my code over and over that why we have inheritence in c++ is to solve such problem
//actually we have 3 class the main class which is the personne and we all know that a personne can have a name,prfession,
//some time we can have 2 poeple having same profession or same name
//we are creating a programm of a mani class call personne and under that class with got 2 more class
// so we have got 2 different poeple who got 4 things in comone and they have got few things in come on
//so we have to create a class wich can hold the things that make them in come on and
//2 more class that makes them do things not in come on

//this the man class
class person{

public:
    string profession;
    int age;

   //this sentence it useless person() : profession("unemploy"), age(16){};

     void walk()
    {
        cout << " I Can Walk." <<endl;
    }
    void talk()
    {
        cout << " I can talk." <<endl;
    }

    void Collect()
    {
    cout <<"\n Enter your profession  :"; cin >> profession; cout <<endl;
    cout <<"\n Enter your age  :"; cin >> age; cout <<endl;

    }

    void Display()
    {

       // cout << "\n Enter Your Profession :"; cin >> profession; cout <<endl;
        //cout << "\n Enter Your age :"; cin >> age; cout <<endl;
        Collect();
        cout << "\n My Profession is: " << profession << endl;
        cout << "\n My Age is :" << age << endl;

        walk();
        talk();
    }

};

class MathTeacher : public person{

public:
    void teachMath(){

    cout << " i can teach math " <<endl;
    }
};


class Footballer : public person{
public:
    void PlayFootBall(){

    cout << " i can play soccer " <<endl;
    }
};

int main()
{
    MathTeacher object;
    object.Display();
    object.teachMath();

    Footballer object2;
    object2.Display();
    object2.PlayFootBall();

    return 0;
}

*/



/*
class famille{

public:
    string papa;
    string maman;

    void kid1()
    {
        cout << " johny \n";
    }
    void kid2()
    {
        cout << " Rebecca \n";
    }

    void collet()
    {
    cout << "\n Enter Father's Name: "; cin >> papa; cout <<endl;
    cout << " Enter Mother's Name:  "; cin >> maman; cout <<endl;

    }

    void Display()
    {
        collet();
        kid1();
        kid2();
    }

};


class Intelligent_Kids : public famille{
//inside here i create a function
public:
void intell()
{
    int marks;
    cout << " Enter Marks obtain : ";
    cin >> marks;
    cout << "The Marks obtain is : "<<marks <<endl;
}

};


class anotherkid : public famille{

public:

void intellect()
{
    int marks2;
    cout << " Enter your marks : "; cin >> marks2; cout << endl;
    cout << " Your Marks is : " << marks2 << endl;

}

};


int main()
{
    class Intelligent_Kids object;
    object.collet();
    object.intell();
    object.Display();

    class anotherkid object2;
    object2.collet();
    object2.intellect();
     object2.Display();

   return 0;
}
*/








/*
class base{

public:
    int number;

    void func(int passValue){

        number = passValue;
    }

    int func2()
    {
        return number;
    }

};
class derived :public base
        {
//the class is emppty

public:
    char name[35];
    void func3()
    {
        cout <<" Enter Your Name\n";
        cin >> name; cout <<endl;
        cout << " Your Name is : "<< name <<endl;
    }

};


int main()
{
    class derived object;

    object.func(56);
    object.func3();

    cout << " the Marks obtain is : "<< object.func2() <<endl;

    return 0;
}
*/




/*
class person
{
 public:
     string Eat, drink, breath;

    void collect()
    {
        //cout << "\n Enter A personne characters : ";
        //cin >> Eat >> drink >> breath; cout <<endl;

        Eat = "Food";
        drink = "Water";
        breath = "breathing";

    }
    void display()
    {
        cout << " Personne charactaristics \n";
        cout << " I eat : " << Eat << endl;
        cout << " i drink : " << drink <<endl;
        cout << " i'm : " << breath <<endl;
    }

};

class thins_that_defferetiat_this_two_poeple : public person {

public:

    void first_person(string smart, string Love_Comedy)
    {
        cout << " i'm : " << smart <<endl;
        cout << " i love " << Love_Comedy << endl;
    }
};


class second_person : public person{

public:

    void secondPerson()
    {
        cout << " I love music \n";
        cout << " i'm calm\n ";
    }

};

int main()
{

class thins_that_defferetiat_this_two_poeple object;
    object.collect();
    object.display();
    object.first_person("smart","comedy");



class second_person object2;
    object2.collect();
    object2.display();
    object2.secondPerson();


    return 0;
}

*/










/*
class waepon
{
public:
    void pack_The_gun()
    {
        cout << "\n waepon one\n";
        cout << " waepon two\n";
        cout << " waepon three\n";
    }

};

class bomb : public waepon
{
public:

void Prepare_The_bomb()
    {
    cout << " Get ready to hit the bombe\n";
    cout << " We need to lance it \n";
    }

};

class gun : public waepon
{

public:

    void packed_the_gun()
    {
        cout << " First bullete\n";
        cout << " second bullete\n";
        cout << " third bullete\n";
    }
};


int main()
{
   class bomb object;
   object.pack_The_gun();
   object.Prepare_The_bomb();



   class gun object2;
   object2.pack_The_gun();
   object2.packed_the_gun();

return 0;
}
*/





/*
//VIRTUAL FUNCTION

class waepon
{
public:
    void pack_The_Weapon()
    {
        cout << "\n waepon one\n";
        cout << " waepon two\n";
        cout << " waepon three\n";
    }

};

class bomb : public waepon
{
public:

void Prepare_The_bomb()
    {
    cout << " Get ready to hit the bombe\n";
    cout << " We need to lance it \n";
    }

};

class gun : public waepon
{

public:

    void packed_the_gun()
    {
        cout << " First bullete\n";
        cout << " second bullete\n";
        cout << " third bullete\n";
    }
};


int main()
{
   waepon *w = new waepon;
   bomb *b = new bomb;
   gun *g = new gun;

   w-> pack_The_Weapon();
   b-> Prepare_The_bomb();
   g-> packed_the_gun();

return 0;
}
*/





/*

class Myclass{

public:
    int Addition(int num, int num2)
    {
        int store;
        store = num + num2;
        return store;
    }

};

class My_ChildClass : public Myclass{
private:
    int a, b;

public:

    void division()
    {
        cout << "Enter 2 value that will represent  a and b : \n";
        cin >> a >> b; cout <<endl;
        int keep;
        keep = a / b;
        cout << "The rest is : " << keep <<endl;
    }

};

class grand_child : public Myclass{

public:
    void Multiplication()
    {
        int x,y,z;
        z = x * y;
        cout << " The Anser is : "<< z <<endl;
    }


};


int main()
{
    class My_ChildClass obj;
    cout << " The Addition is : " << obj.Addition(55,6) <<endl;
    obj.division();


    class grand_child object;
    cout << " The Addition is : " << object.Addition(5,6) <<endl;
    object.Multiplication();

    return 0;
}


*/









/*
class mm{

protected: int rollno;
public:

    void get_num(int a)
           	{
               rollno = a;
 	  	  	}

    void put_num(){

    cout << "Roll Number Is: " << rollno << "\n";

        }
};

class marks : public mm
{
    protected:
        	  	int sub1;
                int sub2;
	 	public:
        void get_marks(int x, int y)
	           	{
             	  	sub1= x;
                    sub2 = y;
                }

        void put_marks()
	           	{
                cout << "Subject 1:" << sub1 << "\n";
                cout << "Subject 2:" << sub2 << "\n";
                }
};

class res : public marks
{

protected: float tot;

        	public:
         	  	void disp(){
         	  	 tot = sub1 + sub2;

                put_num();
                put_marks();

	 	  		cout << "Total:" << tot;
 	             	}
};

int main()
{

res std1;
std1.get_num(5);
std1.get_marks(10,20);
std1.disp();

  	return  0;
}
*/











/*

//ASSIGNEMENT THIRD QUESTION
#define MAX 10
class employees
{
 protected:
      string Name_And_SurName;
      char ID_Number[30];

public:

    void getInfos()
    {
        cout << "   Enter Your Name : "; cin >> Name_And_SurName; cout <<endl;
        cout << "   Enter Your Id Number : "; cin >> ID_Number; cout <<endl;

    }

    void Displ_Details()
    {
        cout << "\n       Name : " << Name_And_SurName <<endl;
        cout << "\n       Id Number : " << ID_Number <<endl;
    }

};


class salary : public employees
{
protected:

    float AnnualSalary = 50000;
    int Number_of_days_work;
    float Income_Tax_WithHolding;
    float FICA_Tax_With_Holding;
    float Deduction;
    float Net_Pay;
    float Gross_pay;

public:
    void getSalary(float Wkday, float inctax, float fitax)
    {
        Number_of_days_work = Wkday;
        Income_Tax_WithHolding = inctax;
        FICA_Tax_With_Holding = fitax;
    }

    void ClaculateNetPay()
    {

         Gross_pay = AnnualSalary / Number_of_days_work;
         Deduction = Income_Tax_WithHolding + FICA_Tax_With_Holding;
         Net_Pay = Gross_pay - Deduction;

         Displ_Details();
         cout << "\n       Number of days work  : " << Number_of_days_work <<endl;
         cout<<"\n       The Net Pay Salary  : R " << Net_Pay <<endl;

    }

};


int main()
{
    class salary  MyObject[MAX];

    int numberOfempl;
    float a,b,c;

    cout << "\n Enter  The Number of Employees : ";cin >> numberOfempl; cout <<"\n";

    for(int i=0; i< numberOfempl; i++)
    {
        cout << "\n Enter The Details for Employees : " << i+1 <<"\n\n";
        MyObject[i].getInfos();

        cout << "   Enter Salary Details for Employees : "<< i+1 <<"\n";
        cout << "\n   Enter the Total Days Work : "; cin >> a;cout <<endl;
        cout << "   Enter Income Tax : "; cin >> b; cout <<endl;
        cout << "   Enter Fica Tax : "; cin >> c; cout <<endl;

        MyObject[i].getSalary(a,b,c);

    }

    cout <<endl;

  for(int z=0; z < numberOfempl; z++)
    {
        cout << "\n   ******* The details for student *******  " << z+1 << " is : \n";

        MyObject[z].ClaculateNetPay();
        cout <<endl;
    }

    return 0;

}
*/





/*


// IT NOT COOL IS THE ASSIGNEMENT DON'T MIND IT IT NOT COOL
//float claculateCharges(float hours[3]);
//int main()
//{
//float str;
//float hour[3];
//float sum = 0;
//float charges[3];
//float keep;
//
//  cout << "\n    ********* Enter The Number of hours worked *************** :   \n";
////  cout << " Enter number of h for all 3 customer : ";
//    for(int i=0; i<3; i++)
//    {
//         cin >> hour[i];
//         //cin >> charges[i];
//         sum = sum + hour[i];
//         keep = claculateCharges(hours[i]);
//
//    }
//
//    cout <<endl;
//
//    for(int y =0; y<3; y++)
//    {
//         cout << y+1 << "       " << hour[y] << "                 " << claculateCharges(hours[y]) << endl;
//
//    }
//     cout <<"total  " <<  sum;
//
//}
//
//float calculateCharges(float hours[3])
//{
//    float total_charge = 12.00;
//    float charge_per_hour = total_charge /3; //three represente the three hours
//    float Store;
//    float additional_charge = 0.90;
//
//    if(hours[3] > 3){
////    total_charge += (ceil(hours) - 3) * 0.5;
//        Store = charge_per_hour * hours[3] + additional_charge;
//    }
//
//    if(hours == 24){
//        Store = charge_per_hour * hours[3] + 20.00;
//    }
//
//     else {
//        Store = charge_per_hour * hours[3] ;
//    }
//    return Store;
}
*/






/*
#include <iomanip>
#include <math.h>
float calculateCharges(float hours);
void DisplayCharges(float car1, float car2, float car3);

int main()
{
    float car1, car2, car3;
    cout << "\n    START ****** PARKING GARAGE APP ***** START" << endl;
    cout     << "    ------------------------------------------" << endl;

        cout << "\n          Enter Hours Park for Car 1: "; cin >> car1;
        cout << "          Enter Hours Park for Car 2: "; cin >> car2;
        cout << "          Enter Hours Park for Car 3: "; cin >> car3;
        cout << " ";
        DisplayCharges(car1, car2, car3);

    return 0;
}


 float calculateCharges(float hours)
{

    const float total_charge = 12.00;
    const float charge_per_hour = total_charge /3; //three represente the three hours
    float Store;
    const double additional_charge = 0.90;

     if(hours > 3){

        Store = (charge_per_hour * hours) + (additional_charge * hours);
    }

     if (hours == 24){
        Store = (charge_per_hour * hours) + 20.00;
    }

     else if(hours <=3 )
        {
        Store = charge_per_hour * hours ;
    }
    return Store;
}


void DisplayCharges(float car1, float car2, float car3)
{

            cout << fixed << showpoint; cout << setprecision(2); //this line is  displaying the decimal place

    cout << "\n    RESULT **** HERE IS THE RESULT ****** RESULT " << endl;
    cout << "\n    ---------------------------------------------" << endl;

         cout<< "    ****  Car\tHours\tCharge  ****" << endl;
         cout<< "         ---------------------------" << endl;
         cout<< "          1\t" << car1 << "\tR" << calculateCharges(car1) << endl;
         cout<< "          2\t" << car2 << "\tR" << calculateCharges(car2) << endl;
         cout<< "          3\t" << car3 << "\tR" << calculateCharges(car3) << endl;
         cout<< "         ---------------------------" << endl;

         cout<< "    ****  TOTAL " << car1 + car2 + car3 << "\tR"
         << calculateCharges(car1) + calculateCharges(car2) + calculateCharges(car3)<<" YESTERDAY RECEIPT  ****"<< endl;
         cout<< "    END   ---------------------------" <<"  END  \n\n\n\n";
}

*/







#include <iostream>
using namespace std;

int nume, deno;
int Check_reminder(int num, int denom){

	return denom == 0 ? num : Check_reminder(denom, num % denom);
}

int reduce(int num, int denom){

	if(num == 0 || denom == 0 || num == -1 || denom == -1){

		return 0;
	}

	else{
		nume = num / Check_reminder(num,denom);
		deno = denom / Check_reminder(num,denom);

		return 1;
	}
}

int main(){
	cout << "Enter an integer to represente the numerator: ";
	cin >> nume;
	cout << "Enter an integer to represente the denomitor: ";
	cin >> deno;

	if(reduce(nume,deno)){

		cout << nume << '/' << deno << endl;
	}
	else
    {
		cout << " Fraction error " << endl;
	}
	return 0;
}









