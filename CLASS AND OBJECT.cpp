#include <iostream>
using namespace std;

/*CLASS AND OBJECT
class My_FirstClass{

//ATTENTION : this is call access specifier it can also be : private, public or protected
public:
    string Name;
    string S_Name;
    int Age;

};

int main()
{
    My_FirstClass My_Object;

    My_Object.Name = "chadrack";
    My_Object.S_Name = "Kyungu";
    My_Object.Age = 12;

    cout << "Your Name is : " <<  My_Object.Name << endl;
    cout << "Your SurName is : " <<  My_Object.S_Name <<endl;
    cout << "Your Age is : " <<  My_Object.Age <<endl;
    return 0;
}
*/





/*
class Cars{

public:
    string Brand;
    string Modle;
    int Year;
};
int main()
{
    //this is the First Object
    Cars CarsObject;

    CarsObject.Brand = "BMW";
    CarsObject.Modle = "X6";
    CarsObject.Year = 1998;

    //seond Object
    Cars carObject2;

    carObject2.Brand = "Toyota";
    carObject2.Modle = "X5";
    carObject2.Year = 2001;

    cout <<"First : "<< CarsObject.Brand << "," << CarsObject.Modle << "," << CarsObject.Year <<endl;
    cout <<"Second :"<< carObject2.Brand << "," << carObject2.Modle << "," << carObject2.Year <<endl;

}

*/




/*
class Box1{

public:
    double lenght;
    double breadth;
    double height;

};

int main()
{
    double Volume;
  Box1 Box2Objct;

   Box2Objct.lenght = 10.0;
   Box2Objct.breadth = 12.0;
   Box2Objct.height = 13.0;

   Box1 Box3Objct;

   Box3Objct.lenght = 5.0;
   Box3Objct.breadth = 7.0;
   Box3Objct.height = 6.0;

   Volume = Box2Objct.lenght * Box2Objct.breadth * Box2Objct.height;
   cout << "The Volume Box2 is : "<< Volume <<endl;

   Volume = Box3Objct.lenght* Box3Objct.breadth * Box3Objct.height;
   cout << "The Volume Box3 is : "<< Volume <<endl;

   return 0;
}
*/

//CLASS AND METHODE
/*
class box1{

public:
//i use void function because i'm not returning but displaying using "cout <<" but if u are
// using the keyword return don't put void at the begenning
    void MyMethode()
    {
        cout << "I'm function call Methode\n";
    }

};

int main()
{
    box1 box1Object;
    box1Object.MyMethode();

    return 0;
}
*/





/*
class box1{
public:
    //ATTENTION when u are using the key word returning make sure at the begenning of ur function
    // u put a dataType int or double,char depending of the datatype u are using
    int MyMethode(int num, int num2) //this is the first attribute for my class
    {
        int result;
        result = (num + num2)/2;
        return result;
    }

    string Methode2(string module1, string module2) //second attribute for my class
    {
       cout << "My First Module is : " << module1 <<endl;
       cout << "The Second Module is : " << module2<< endl;
    }

};

int main()
{
    int a,b;
    cout << "Input The Marks : \n";
    cin >> a >> b;
    cout << endl;

    string M1,M2;
    cout << "Enter Your Modules : \n";
    cin >> M1 >> M2;
    cout << endl;

    //object
    box1 box2Object;
    box2Object.Methode2(M1,M2);

    //object
    box1 box1Object;//end
    //i use "cout<<" because i need to pass the 2 value enter and displya it
    cout << "The Average of this two marks are : " << box1Object.MyMethode(a,b);
    //end

    return 0;
}

*/



/*
//USING CLASS AND METHODE OUTSIDE THE CLASS
class Sample{

public:
    void PrintText1();
    void PrintText2(int value);
};


//this is outside the class
void Sample:: PrintText1()
{
   cout << "\n           Let Learn Together!\n";
}


void Sample:: PrintText2(int value)
{
  cout << "\n           The Value is : " << value <<"\n\n\n\n\n\n\n\n\n\n\n\n\nn\n";
}

int main()
{
    cout << "\n           Class using attribution outside the class\n";
    int a;
    cout << "\n           Enter Something: ";
    cin >> a;
    cout << endl;

   Sample SampleObjectPrintText1; //let create the object
   SampleObjectPrintText1.PrintText1();

   Sample SampleObjectPrintText2;
   SampleObjectPrintText2.PrintText2(a);

   return 0;
}
*/






/*
class cars{

public:
    //this 3 are attribute like variable
    int num;
    int num2;
    int My_funct(){   //end

      //this is the stament of this function
    int a,b,result;

    cout << "Enter two value  :\n";
    cin >> a >> b;

    result = a + b;

    return result;  //end;

    }
};

int main()
{
    //this the input
    int store,a,b;
    cout << "insert two value : \n";
    cin >> a >> b;
    cout << endl;
    //end

    // object
    cars carsObject; //end
   //this is the object for those two attribute in the class
    carsObject.num = a;
    carsObject.num2 = b;

    //now i display for those two attribute in the class
    store = carsObject.num + carsObject.num2;
    cout << "The sum is : " << store << endl; //end


    //here is the result that will display of that function which is theattribute inside the class
    cout << "the sum of the function object is : " << carsObject.My_funct();

    return 0;
}

*/








/*//LET USE PRIVATE AND PUBLIC
class Test{

private :
    int data1;
    float data2;
    int result;

public:
    void insertIntegerData(int d)
    {
        //instead of declaring data varaible inside here but u declare them in the private class
        // on line 185 and 186
        data1 = d;
        result = data1;
        cout << "\n Number inserted is:" << result;
    }

    float insertFloat()
    {
        //instead of declaring data varaible inside here but u declare them in the private class
        // on line 185 and 186
        cout << "\nEnter data: ";
        cin >> data2;
        cout << endl;

        return data2;
    }
};

int main()
{
    int number;
    cout << "\nEnter a number: ";
    cin >> number;
    cout << endl;

    Test TestObjectFloat2;
    TestObjectFloat2.insertIntegerData(number);

    Test TestObjectVoid1;
    cout << "\n the Data inserted is: " << TestObjectVoid1.insertFloat();
    return 0;
}
*/

/*
class StudentDetails{

private:
    //these are the attribution to private
    int RollNo;
    string Name;
    float percantage; //end

public:
    void SetVal()
    {
        //ATTRIBUTION FOR PRIVATE
        RollNo = 0;
        Name = "CHADRACK";
        percantage = 85.6;

        cout << "\n Your Roll No. is: " << RollNo << endl;
        cout << "\n Your Name is: " << Name << endl;
        cout << "\n Your Percantage is: " << percantage << endl;
    }
};

int main()
{
    //creation of object THIS IS THE OBJECT = StdentDetlsOBject AND THIS = StudentDetails IS THE CLASS NAME
    StudentDetails StdentDetlsOBject;//END

     StdentDetlsOBject.SetVal();

    return 0;
}
*/


/*
//ATTENTION THIS IS A VERY GOOD METHODE TO CREATE A FUNCTION THAT WILL JUST DISPLAY EVERTHING
//AND OTHERS ARE PERFORMING OTHER TASK

//OR YOU CAN USE TO FUNCTION ONE TO PASS VALUE AND ANOTHER ONE TO DISPLAY IT A GOD METHODE AS WELL

class StudentDetails{

private:
    //these are the attribution to private
    int RollNo;
    string Name;
    float percantage; //end

public:
    void SetVal()
    {
        //ATTRIBUTION FOR PRIVATE AND THIS FUNCTION CAN DO ANYTHING
        RollNo = 0;
        Name = "CHADRACK";
        percantage = 85.6;

    }


void S_dtls()
    {
        //AND THIS FUNCTION IS JUST DISPLAYING
        cout << "\n              Your Roll No. is: " << RollNo << endl;
        cout << "\n              Your Name is: " << Name << endl;
        cout << "\n              Your Percantage is: " << percantage << endl;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    }

};

int main()
{
    //creation of object THIS IS THE OBJECT = StdentDetlsOBject AND THIS = StudentDetails IS THE CLASS NAME
    StudentDetails StdentDetlsOBject;//END

     StdentDetlsOBject.SetVal();
     StdentDetlsOBject.S_dtls();
    return 0;
}

*/




/*
//CREATE A PROGRAM THAT ENTER STUDENT DETAILS AND DISPLAY

class student{

private:
    //THIS IS INTERESTING TAKE A LOOK THE 30 AND 10 THIS TWO SPECIFY NUMBER OF CHARACTER
    char nam[30],clas[10];
    int rol,Age;

public:
    void Enter()
    {
       cout << "\n Enter your Name: ";
       cin >> nam;
       cout << endl;

       cout << "\n Enter Your Class: ";
       cin >> clas;
       cout <<endl;

       cout << "\n Enter Your Rol: ";
       cin >> rol;
       cout << endl;

       cout << "\n Enter Your Age: ";
       cin >> Age;
       cout << endl;
    }

    void Display()
    {
        cout <<"\n   Name        Class    rol    Age \n";
        cout <<"\n   "<< nam <<"    "<< clas << "    "<< rol <<"    "<< Age <<endl;
    }

};

int main()
{
    class student studentObject;
    studentObject.Enter();
    studentObject.Display();
    return 0;
}
*/


/*
//OR U CAN DO IT THIS WAY

//CREATE A PROGRAM THAT ENTER STUDENT DETAILS AND DISPLAY

class student{


public:
    void Display(string nam,string clas, int rol, int Age)
    {
       cout <<"\n   Name        Class    rol    Age \n";
        cout <<"\n   "<< nam <<"       "<< clas << "      "<< rol <<"      "<< Age <<endl;
    }


};

int main()
{
    string a,b;
    int c,d;

       cout << "\n Enter your Name: ";
       cin >> a;
       cout << endl;

       cout << "\n Enter Your Class: ";
       cin >> b;
       cout <<endl;

       cout << "\n Enter Your Rol: ";
       cin >> c;
       cout << endl;

       cout << "\n Enter Your Age: ";
       cin >> d;
       cout << endl;

    class student studentObject;
    //this line is passing the values back to the function
    studentObject.Display(a,b,c,d);

    return 0;
}


*/





/*
class cars{

private:
    int Car_Number;
    char Car_Model[10];

public:

    void Collect_from_The_user()
    {
        cout << "\n  Enter Your Car Number: ";
        cin >> Car_Number;
        cout << endl;

        cout << " Enter Your Car Model: ";
        cin >> Car_Model;
        cout << endl;
    }

    void Display_What_You_have_collect()
    {
        cout << "\n  Your Car number is: "<< Car_Number<<endl;
        cout << "\n  The Model car is: "<< Car_Model <<endl;
    }

};

int main()
{
  class cars carsObject;
    carsObject.Collect_from_The_user();
    carsObject.Display_What_You_have_collect();

    return 0;
}

*/


/*
// ATTENTION IF YOU DON'T INCLUDE THIS IT WILL NOT WORK
#define MAX 10
class student{

private:

    char name[30];
    int RollNo,total;
    float percentage;

public:

    void getStudentDetails()
    {
        cout << "\n Enter Your Name: "; cin >> name;
        cout << endl;
        cout << "\n Enter Your Roll Number: "; cin >> RollNo;
        cout << endl;
        cout << "\n Enter Your Total Marks: "; cin >> total;
        cout << endl;
        cout << "\n Enter Your Percentage marks: "; cin >> percentage;
        cout << endl;

    }
    void DisplayStudentDetails()
    {
        cout << "\n The Name is: "<< name <<endl;
        cout << "\n The Roll number is: " << RollNo <<endl;
        cout << "\n The Total Marks is: " << total <<endl;
        cout << "\n the Percentage marks is: " << percentage <<endl;

        //percentage = total/500*100;
    }

};

int main()
{

    student studentObject[MAX];

    int numberOf_student;
    cout << "Enter Number of student: ";
    cin >> numberOf_student;
    cout << endl;

    for (int i=0; i < numberOf_student; i++ )
    {
        cout << "\n Enter Details of student :" << i+1 << ":\n";
        studentObject[i].getStudentDetails();

    }
    cout << endl;

    for(int y=0; y < numberOf_student; y++)
    {
        cout << "\n Display the details of the student : " << y+1 << ":\n";
        studentObject[y].DisplayStudentDetails();
    }

    return 0;
}
*/



/*
#define MAX 10
class studentDetails{

private:
    char name[30];
    int ID;
    char Subject[20];
    float Perc;

public:
    void Collect_details()
    {

      cout << "\nEnter  Your Name : "; cin >> name;
      cout << endl;
      cout << "\nEnter Your Id Number : "; cin >> ID;
      cout << endl;
      cout << "\nEnter Your Subject : "; cin >> Subject;
      cout <<endl;
      cout << "\nEnter Your Percentage : "; cin >> Perc;
      cout << endl;
    }
    void DiplayDetails()
    {


        cout << "\n Name : " << name <<endl;
        cout << "\n ID Number : " << ID <<endl;
        cout << "\n Subject : " << Subject <<endl;
        cout << "\n Percentage : " << Perc <<endl;

    }

};


int main()
{
    class studentDetails studentDetailsOBject[MAX];
    int N_OfStdnt;
    cout << "\n Enter the number of student "; cin >> N_OfStdnt;
    cout <<endl;

    for(int i =0; i < N_OfStdnt; i++)
    {
        cout << "\n Enter the details for student : " << i+1 << ":\n";
        studentDetailsOBject[i]. Collect_details();

    }
    cout << endl;
    for(int z=0; z < N_OfStdnt; z++)
    {
        cout << "\n The Details for student : " << z+1 << " is :\n";
        studentDetailsOBject[z].DiplayDetails();
    }

   return 0;
}

*/







/*
//CREATE A PROGRAMM THAT READ AND ADD TWO TIMES USING CLASS

class Time{

private:
    int hous;
    int minutes;
    int second;
public:

    void collect()
    {
        cout <<"\n Enter Your Time: \n";

        cout << " Enter Hours : "; cin >> hous;
        cout <<endl;
        cout << " Enter minutes : "; cin >> minutes;
        cout <<endl;
        cout << " Enter second : "; cin >> second;
        cout <<endl;

    }


void Display()
{
    cout << "\n Display the the time: \n";
    cout << " hours : " << hous <<endl;
    cout << " minutes : "<< minutes <<endl;
    cout << " second : "<< second <<endl;

}

void Adding_two_time(Time T1,Time T2)
{
    this->second = T1.second + T2.second;
    this->minutes = T1.minutes + T2.minutes + (this->second/60);
    this->hous = T1.hous + T2.hous + (this->minutes/60);
    this->minutes %=60;
    this->second %=60;
}
};

int main()
{
  class Time T1,T2,T3;

    T1.collect();
    T2.collect();

    T3.Adding_two_time(T1,T2);
    T3.Display();

return 0;
}

*/





/*
#define MAX 10

class MyClassTime{

private:
    int hours, minutes,second;

public:

void collectTime()
{
    cout << "\n Enter Time : \n";
    cout << " Enter Hours :"; cin >> hours;
    cout <<endl;
    cout << " Enter Minutes :"; cin >> minutes;
    cout <<endl;
    cout << " Enter second :"; cin >> second;
    cout <<endl;
}

void Display_time()
{
    cout <<"\n The Time is : " << hours << ":" << minutes << ":" << second << endl;
}

//Time t1 Time is our class name
void AddTime(MyClassTime T1, MyClassTime T2)
{
    this->second = T1.second + T2.second;
    this->minutes = T1.minutes + T2.minutes + (this->second/60);
    this->hours = T1.hours + T2.hours +(this->minutes/60);
    this->second %=60;
    this->minutes %=60;

}

};


int main()
{

class MyClassTime T1;
class MyClassTime T2;
class MyClassTime T3;

//this means it is going to ask the input twice
T1.collectTime();
T2.collectTime();//end

T3.AddTime(T1,T2);
T3.Display_time();


    return 0;
}


*/





/*
class time{

private:
    int h, m, s;

public:
    void Collect()
    {
      cout << " Enter hours : "; cin >> h;
      cout <<endl;
      cout << " Enter minute : ";cin >> m;
      cout << endl;
      cout <<" Enter second : "; cin >> s;
      cout <<endl;
    }
    void display()
    {
        cout << "The time is : " << h << ":" << m << ":" << s << endl;
    }
    void add(time t1, time t2)
    {
        this-> s = t1.s + t2.s;
        this-> m = t1.m + t2.m + (this->s/60);
        this-> h = t1.h + t2.h + (this->m/60);
        this->s %= 60;
        this->m %= 60;
    }


};

int main()
{
    class time t1;
    class time t2;
    class time t3;

    t1.Collect();
    t2.Collect();

    t3.add(t1, t2);
    t3.display();
}

*/




/*

//CREATE A PROGRAM THAT CONVERT YOUR TIME INTO SECOND


class convertTimeIntoSEconcd{

private:
    int h, mm, s;
    int SecondConvert;

public:
    void collectTime_mm_SEcond()
    {
        cout << "\n Enter Hours : "; cin >> h; cout <<endl;
        cout << " Enter Minutes : "; cin >> mm; cout <<endl;
        cout << " Enter Second : "; cin >> s; cout <<endl;
    }


    void Display_Time()
    {
        cout << "\n The Time is : " << h << ":" << mm <<":"<< s<<endl;
    }

    int ConvertTimeInSecond()
    {
      SecondConvert = h*3600 + mm*60 + s;
      return SecondConvert;
    }
};

int main(){

   class convertTimeIntoSEconcd object;

   object.collectTime_mm_SEcond();
   object.Display_Time();
   cout << " The Time Convert into Second is : " << object.ConvertTimeInSecond();

   return 0;
}

*/






/*

class time{

private:
    int hh, mm, ss;
    int CvrtTime_into_second;

public:
    void collectTime()
    {
       cout << "\n Enter hours : "; cin >> hh; cout <<endl;
       cout << " Enter minutes : "; cin >> mm; cout <<endl;
       cout << " Enter second : "; cin >> ss; cout <<endl;
    }
    void DisplayTime()
    {
        cout << "\n The time is : " << hh <<":" << mm << ":" << ss <<endl;
    }

    int TimeConvert()
    {
        CvrtTime_into_second = hh*3600 + mm*60 + ss;
        return  CvrtTime_into_second;
    }
};

int main()
{
    class time timeObject;

    timeObject.collectTime();
    timeObject.DisplayTime();
    cout <<"\n After converting in second is : " << timeObject.TimeConvert() <<endl;
    return 0;
}

*/






/*

//THIS PROGRAM IS COUNTING THE NUMBER OF OBJECT U HAVE CREATED

    class Message{

private:

    static int count;

public:
    Message()
    {
        count++;
    }

    void CollectMsg(string PassMe)
    {
        cout << PassMe << "\n";
    }


    static int totaobject()
    {
        return count;
    }

};

    int Message::count = 0;

int main()
{
        Message M1; //object 1
        Message M2; //object 2
        Message M3; //object 3
        Message M4; //object 4

       M1.CollectMsg(" Message one ");
       M2.CollectMsg(" Message two ");
       M3.CollectMsg(" Message three ");
       M4.CollectMsg(" Message four ");


       cout <<"\n Total objects created are :  "<< Message::totaobject() <<endl;

       return 0;
}

*/






/*

//create a program that call another function using class

class Details_Student{

private:
    //start private
    char name[20];
     int phone;

    void input(){
    cout << "\n                Start The Input!!!\n";
    }

    void input_OFF()
    {
        cout <<"                End of The input \n\n";
    }
//end private


public:
    //start public
    void collect_Details()
    {
    input();

    cout << "\n                Enter Your Name : "; cin >> name; cout <<"\n";
    cout << "                Enter Phone Number : "; cin >> phone; cout <<"\n";
    }

    void Display_Details()
    {
    input_OFF();

    cout << "                The student details are : \n";
    cout << "                Name : " << name<<endl;
    cout << "                Phone number is : " << phone <<"\n\n\n\n\n\n\n\n\n\n\n\n";
    }
    //end public
};

int main()
{

  class Details_Student object;

  object.collect_Details();
  object.Display_Details();

  return 0;
}
*/






/*

class number{

private:
    int a,b;

public:
    void set1(int num)
    {
        a = num;

    }
    void set2(int num2)
    {
        b = num2;
    }
    int get() const
    {
        int c;
        c = a + b;
         return c;
    }
    int get1() const
    {
         /*if you want to change the value of a to the value which is with d the program will give u an error because
        //we tell this function to remain constante
        int d = 2;
        a = d;
        */
        /*
        int c;
        c = a * b;
        return c;
    }

};

int main()
{
    class number objct;
    objct.set1(120);
    objct.set2(5);

    cout << "the sum is : " << objct.get() <<endl;

    cout << "The time is : " << objct.get1() <<endl;
    return 0;
}
*/






/*
class numbers{

public:

    int a,b;

};

int main()
{
  class numbers object;

  object.a = 100;
  object.b = 200;


  cout << "\n The value of a is : " << object.a <<endl;
  cout << "\n The value of b is : " << object.b <<endl;
  return 0;


}

*/




/*
class point{

private:
    int x, y;

public:
    void setpoint(int num1, int num2)
    {
        x = num1;
        y = num2;
    }

    int getThem( )
    {
        int c;
        return c = y + x;
    }
    int getit()
    {
        return y;
    }

};

int main()
{
    class point object;
    object.setpoint(20,25);
    object.setpoint(20,25);

    cout << "Display x value :" << object.getThem()<<endl;
    cout <<" Display y value :" << object.getit()<<endl;
    cout <<" Display y value :" << object.getit()<<endl;

    return 0;
}


*/




/*

//POINTER AND CLASS OBJECT
class number{

private:
    int num;

public:
   void inputfunction()
   {
       cout << "\n Enter A number : "; cin >>num; cout << endl;
   }

   void DisplayFunction()
   {
       cout << " The Number Enter is :" << num <<endl;

   }
};

int main(){

class number numObject;

    numObject.inputfunction();
    numObject.DisplayFunction();

    // number is thename of our class
    number *pointerNumber;
    pointerNumber = new number;

    cout <<"\n Display the defaults number\n"; //the display defaults will display nonses because  our class is now
                                            //empty at the moment
    pointerNumber->DisplayFunction(); //to put it inaction youneed to use that arrow

    //thi is asking for a new number
    pointerNumber->inputfunction();
    pointerNumber->DisplayFunction();

    return 0;
}

*/














/*
class StdntDetails{

private:
    char name[30],Module[20];
    int ID,Phone;
    float Percantage;

    void inputStart()
    {
        cout << "\n Input Start\n";
    }
    void DisplayStart()
    {
        cout << "\n Your Details Are: \n";
    }

public:
    void collectDetails()
    {
        inputStart();
        cout <<" Enter Your Name: "; cin >>name; cout <<endl;
        cout <<" Enter Your Phone Number: "; cin >> Phone; cout<<endl;
        cout <<" Enter Your ID Number: "; cin >> ID; cout <<endl;
        cout <<" Enter your Module Name: "; cin >> Module; cout<<endl;
        cout <<" Enter Your Percantage: "; cin>>Percantage; cout<<endl;
        cout <<" End Input\n";
    }

    void DisplaDetails()
    {
        DisplayStart();
        cout << " Your Name is: "<< name <<endl;
        cout << " Your Phone number is: "<< Phone <<endl;
        cout << " Your ID Number is: "<< ID <<endl;
        cout << " Your Module Name: "<<Module<<endl;
        cout << " Your Percantage is: "<<Percantage<<endl;
        cout <<" End \n";

    }

};
int main()
{

class StdntDetails StdntDetailsOBject;

StdntDetailsOBject.collectDetails();
StdntDetailsOBject.DisplaDetails();

//what is the need of pointer here because i can ask twice the input instead of using the for Loop here you go

//the magic start here
StdntDetails *PointerDetails; //in this line there is our class name which is the first one and pointer name
//which is our pointer you don't declare u just create it
PointerDetails = new StdntDetails;
// and it end here

//this is just to display
PointerDetails->collectDetails(); // we have the pointer nameand our function to collect for the second time
PointerDetails->DisplaDetails(); //pointer name and our function to display



return 0;
}

*/






/*

//UAING POINTER TO ACCESS THE ADRESS OF THE OBJECT

class Example{

public:

    Example *AccessAdress()
    {
        return this;
    }

};
int main()
{
   class Example Obj1;
   class Example Obj2;
   class Example Obj3;

cout << "\n The First Object Adress is : " << Obj1.AccessAdress() <<endl;
cout << "\n The second Object Adress is : " << Obj1.AccessAdress() <<endl;
cout << "\n The the third Object Adress is : " << Obj1.AccessAdress() <<endl;

   return 0;
}

*/



/*
class y{

private:
    char *a;
public:
    char *func()
    {

        cout << "\n The answer is : " << a<<endl;
    }

};

int main()
{
    class y obj;
    obj.func();
    //cout << "The answer is : " <<  <<endl;

    return 0;
}

*/





/*
class number{

public:
    //remember variable inside the class are call member in this case this is call public member
    int num;
    string name;
    float number;
};

int main()
{
    class number obj;

    obj.num = 200;
    obj.name = "chadrack";
    obj.number = 85.6;

    cout << "\n  The number is :" << obj.num <<endl;
    cout << "\n  The number is :" << obj.name <<endl;
    cout << "\n  The number is :" << obj.number <<endl;
    return 0;
}

*/



/*

class myclass{

public:
    string name;
    int id;
    int marks;

};

int main()
{
    string a;
    int b,c;
    cout << "\n Enter Your Details :\n";
    cout <<" Enter Your name: ";
    cin >>a; cout <<endl;
    cout <<" Enter Your id: ";
    cin >>b; cout <<endl;
    cout << "Enter Your Marks: ";
    cin >>c; cout <<endl;


    class myclass obj;
    obj.name = a;
    obj.id = b;
    obj.marks =c;

    cout << "Your Name is: " << obj.name <<endl;
    cout << "Your id is: " << obj.id <<endl;
    cout << "Your Marks is: " << obj.marks <<endl;

    return 0;
}
*/






class Candidate{

public:
    string name;
    int votes;

void OutputEllection(Candidate *arr)
{
    int total_vote = 0;
    for(int i=0; i<5; i++)
    {
        total_vote = total_vote +arr[i].votes;
    }
    cout << "Result of the Election ..........."<<endl;
    cout << "Name of Candidate "<<"\t"<<"votes received"<<"\t"<<"Percentage"<<endl;

    for(int i=0; i<5; i++)
    {
        cout << arr[i].name << "\t\t\t";
        cout << arr[i].votes<<"\t\t";
        cout << (arr[i].votes * 100)/total_vote <<"%" <<endl;
    }
}

int max = INT_MIN,count = 0;
int index[5]={0};

for (int i=0; i<5; i++)
{
    if(arr[i].votes>max){

        max=arr[i].votes;
    }
}
for(int i=0; i<5; i++)
{
    if(arr[i].votes == max)
    {
        index[count] = 1;
        count++;
    }
}

if(count == 1)
{
    cout << "The winner is "<<arr[index[count -1]].name<<endl;

}else{

cout << "There is between: "<<endl;
for(int i=0; i<count-1; i++)
{
    cout <<arr[index[i]].name<< ",";
    cout <<arr[index[count -1]].name<<endl;
    cout <<"all are winner\n";
}

}
return;

};

int main()
{
    string s;
    int v;
    Candidate arr[5];
    cout<<"Enter candidates last name,there are five candidates\n";
    for(int i=0; i<5; i++)
    {
        cout <<"enter candidate "<<i<<"last name\n";
        cin >> s;
        arr[i].name =s;
        cout << "Enter number of votes received by candidate "<<i<<endl;
        cin >>v;
        arr[i].votes = v;
    }

    OutputEllection(arr);

    return 0;
}











