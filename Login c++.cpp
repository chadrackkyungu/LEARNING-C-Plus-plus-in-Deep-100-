#include <iostream>
using namespace std;

int main()
{
    /*
    //100% CORRECT
const string name = "abc";
const int Password = 12;

string input_name;
int input_Password;

cout << "Enter Your Name : ";
cin >> input_name;
cout << "Enter Your Password : ";
cin >> input_Password;



if (input_name == name){
    cout << "Name Successfully!\n\n";
    }

    else{
   while(input_name != name){

    cout << "Incorret Name : \n\n";
    cout << "Enter Your Name : ";
    cin >> input_name;

    }
    cout <<"name Correct! \n\n" ;
}


if (input_Password == Password){
    cout << "Password Successfully \n\n";
}

    else{

while(input_Password != Password){

    cout << "Password Incorrect ?\n\n";
    cout << "Enter You Password :";
    cin >> input_Password;
}

cout << "Password Correct!";
}
*/




//200% WORKING

string name;
int password;

cout << "REGISTRATION \n\n";
cout << "Enter Your name : ";
cin >> name;
cout << "Create a Password : ";
cin >> password;
cout << "\n";
cout << "REGISTRATION SUCCESS FULLY!\n";
cout << "Make Sure To Remember your name and password when you want to login your account";

cout << "\n\n";
cout << "You are Now Login To Your Account \n";

string input_name;
int input_password;

int number_of_entering_password = 1;

while (number_of_entering_password < 5){

cout << "Enter Your input name : ";
cin >>input_name;
cout << "\n";
cout << "Enter Your Input password : ";
cin >> input_password;

if(input_name == name && input_password == password){
    cout << "Welcome Back To Your Account! \n\n";
    break;
}
else {

if(input_name != name){
   cout << "invalid name \n\n";

}else{
cout <<" Valid Name\n\n";

}

if(input_password != password){
    cout << "Invalide Password ?\n\n";

}else{
cout << "Password Valid\n\n";

}

}



    number_of_entering_password++;
}


 if(number_of_entering_password == 5){
    cout << "To Many Attempt Try Again Letter!\n\n";
 }

  return 0;
}


