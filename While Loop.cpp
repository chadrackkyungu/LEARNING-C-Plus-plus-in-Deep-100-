#include <iostream>
using namespace std;

int main(){
/*
int i = 1;
while(i < 10){

    cout <<"The Incrementation is :" << i <<"\n";
    i++;
}
*/

/*int i = 2;

while(i < 5){

    cout << i <<"\n";
    i++;
}*/

//EXAMPLE TWO
/*
int i = 1;
cout << "Enetr A Number : ";
int Condition;
cin >> Condition ;
while (i < Condition){

    cout <<"The Incementation is : "<< i <<"\n";
    i++;
}*/



// DO WHILE LOOP
/*int condition;
cout << "Enter a condition :";
cin >> condition;

 int x = 1;
do {

    cout << "The Increamentation is :" << condition <<"\n";
    x++;
}

while ( x < condition);
*/
/*
int cond;
cout << "Enter The condition : ";
cin >> cond;

  do {
    cout << "The Increment is :"<< cond << "\n";
    cond++;
  }
  while (cond < 10);
*/


/*
int y = 0;
int condition;
cout << "Enter Your Condition :";
cin >> condition;
do{
    cout << "the Increamentation is  : "<< y <<"\n";
    y++;
}
while(y < condition);
*/


/*
int Number,cond;
cout << "Enter Your Number : ";
cin >> Number;
cout << "Enter Your Condition : ";
cin >> cond;


while (cond <= Number){
    cout << "The While is : "<< cond << "\n";
    cond++;

    if (cond == 15){
        break;
    }
}
*/

/*The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
This example skips the value of 4:*/

int Number;
cout << "Enter Your Number : ";
cin >> Number;

for ( int cond = 0; cond <= Number; cond++){

    if(cond == 10){
        continue;
    }
    //if you put this sentence on tp of the if condition it w3ant skip the number 10
    cout << "The Loop Execution is : "<< cond << "\n";
}
return 0;
}


