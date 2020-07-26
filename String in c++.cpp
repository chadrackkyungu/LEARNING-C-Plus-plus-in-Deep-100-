#include <iostream>
using namespace std;

int main(){
/*
string First_Name;
string Second_Name;

string Full_Name;

Full_Name = First_Name + Second_Name;

cout << Full_Name;*/

//EXAMPLE TWO FIND THE LENGH OF A STRING

string long_Name = "uytghjksldfjslkjjdfhjhjhdjhfjhdjdhjsdjkdhjkfhjkhjd";

cout << "the lenght of this string is : "<< long_Name.length() <<"\n";



//EXAMPLE TWO FIND THE SIZE OF A STRING

string long_Name2 = "uytghjksldfjslkjjdfhjhjhdjhfjhdjdhjsdjkdhjkfhjkhjd";

cout << "the size of this string is : "<< long_Name2.size() <<"\n";



//ACCESS THE STRING to accaess it start from 0,1,2,3 to infinity so u can access any letter in the string hi chad
string Access_string = "hi chad";
cout <<"the letter access is :"<< Access_string[1] <<"\n";
cout <<"the letter access is :" << Access_string[3] <<"\n";
cout <<"the letter access is :" <<Access_string[4] <<"\n";



//YOU CAN ALSO PASS A VALUE TO A STRING  pass the value it more like replace the existing letter in this case i'm replacing G by K
string pass_value_into_a_string = "CHADRACG";
 pass_value_into_a_string[7] = 'K';
 cout << pass_value_into_a_string;


 //USER INPUT STRING
string fullName;
cout << "Type your full name: ";
//here you use getline  then paranthise ci, space is the space that wiil appear between the two name then enter your fulname
getline (cin, fullName);
cout << "Your name is: " << fullName;
return 0;
}
