#include <iostream>
using namespace std;

int main(){

/*
string Animals[][3]={

{"dog","cut","pork"},
{"Mouse","dark","snak"},
{"boa","pink","blue"} };

for(int i=0; i< sizeof(Animals) / sizeof(Animals[0]); i++){

    for(int j=0; j< sizeof(Animals[0]) / sizeof(string); j++){
        cout << Animals[i][j] <<" ";

    }
      cout <<"\n";
}*/



/*

int a[5][4] = {{10,25,58,20}, {11,97,30,2}, {22,15,18,53}, {67,55,32,31}, {85,65,20,55} };

for (int i=0; i< 5; i++){

    for(int j=0; j< 4; j++){

        cout << a[i][j] << " ";
    }
    cout << "\n";
    }
*/





//in this one ww have 5 rows and three column
/*int a[5][3] = { {20,35,46}, {55,66,89}, {44,42,48} };

for(int i =0; i<5; i++){

    for(int j=0; j< 3; j++){

        cout << a[i][j] << " ";

    }
    cout << "\n";
}*/






/*
int rainfull[5];

rainfull[0];
rainfull[1];
rainfull[2];
rainfull[3];
rainfull[4];

cout << "Enter Your Numbers for your aarays : \n\n";

cout << "Enter Your First Number : ";
cin >> rainfull[0];
cout << "Enter Your Second Number : ";
cin >> rainfull[1];
cout << "Enter Your Third Number : ";
cin >> rainfull[2];
cout << "Enter Number 4 :";
cin >> rainfull[3];
cout <<"E nter The Number 5 : ";
cin >> rainfull[4];

cout << "\n";
for ( int i=0; i < 5; i++){
    cout << rainfull[i] <<"\n";
}
*/




/*
int number[3];

number[0];
number[1];
number[2];



cout << "Enter Number one : ";
cin >> number[0];
cout << "Enter Number Two : ";
cin >> number[1];
cout << "Enter Number Third : ";
cin >> number[2];



for (int i=0; i < 3; i++){


    cout << number[i] << "\n";
}*/








/*
//THIS IS THE BEST METHODE WHEN USING ARRAY
string guess[] = {"chad", "john", "kerene","jeff"};
int size = sizeof(guess) / sizeof(guess[0]);

for(int i=0; i < size; i++){

    cout << guess[i] <<"\n";
}



int numbers[]={1,5,2,3,4,65};

int size = sizeof(numbers) / sizeof(numbers[0]);

for ( int i =0; i < size; i++){
    cout << numbers[i] <<"\n";
}
*/




/*
int numb[5][2] = {  {1,2}, {23,56}, {2,13}, {55,10}, {10,15} };

for (int i=0; i< 5; i++){

    for(int j=0; j < 2; j++){

        cout << "a [" << i <<"] [" << j <<"]" << " = :";
        cout << numb[i][j] <<"\n";
    }

}

cout << "Deuxieme example :\n";

int numbers[3][2] = { {12,22}, {50,38}, {89,71} };

for(int i =0; i< 3; i++){

    for(int j=0; j < 2; j++){

        cout << numbers[i][j] << " ";
    }
    cout << "\n";
}
*/

/*
int num[3][2] = { {12,32}, {20,61}, {88,41} };

for (int i=0; i< 3; i++){


    for(int j =0; j< 2; j++){

        cout << "a [" << i << "] " << "[" << j <<"] = ";
        cout << num[i][j] << endl;
    }
}*/



/*

//THIS IS PERFECT

int scores[5];

for(int i =0; i< 5; i++){
    cout << "Enter Your Scores : " <<"["<< i <<"] : ";
    cin >> scores[i];


}
cout <<"\n\n";
for(int i=0; i< 5; i++){


 cout << "Scores Input for : " << i << " is :";
 cout << scores[i] <<"\n";

}

*/


/*
string Status[5];

for(int i=0; i< 5; i++){

    cout << "Enter Your Country is Name : " << i <<": ";
    cin >> Status[i];

}
cout << "States : \n\n";

for (int i=0; i< 5; i++){

    cout << "The Status are :" ;
    cout << Status[i] << "\n";
}*/








/*THE SUM OF OUR ARRAYS

int siz,Average,score[5];
int sum =0;
 for(int i=0; i< 5; i++)
{

    cout <<"Insert Your Scores : " <<i<< " = ";
    cin >> score[i];
    sum = sum + score[i];

    siz = sizeof(score) / sizeof(score[i]);

    Average = sum / siz;
 }

 cout <<"\n\n";

 for(int i=0; i<5; i++)
 {

    cout << "Your Input Scores are :" << i <<" =";
    cout << score[i] << "\n";

 }
 cout << "\n";
 cout << "The sum of this integers are : " << sum;
 cout <<"\n\n";
 cout << "The Average is " << Average;
 */




/*
 int lenght,scores[5];
 double sum = 0;
 double average;

 lenght = sizeof(scores) / sizeof(scores[0]);

 for (int i=0; i< lenght; i++){
    cout << "Enter Your Scores : " << i <<" = ";
    cin >> scores[i];
    lenght = sizeof(scores) / sizeof(scores[i]);
    sum = sum+scores[i];

    average = sum / lenght;
 }

 cout <<"\n\n";

 for (int i=0; i < lenght; i++){

    cout << "Our Input Scores Are :" << i <<" = ";
    cout << scores[i] <<"\n";
 }

 cout <<"\n\n";
 cout << "The Sum of All Our Input Scores Are : = " << sum << "\n\n";
 cout << "And The Average Of everthing is : " << average << "\n\n";
*/




/*
int marks[5][2];

for (int i=0; i < 5; i++){

    for(int j=0; j < 2; j++){

    //j represente the two column which is the marks that i'm entering and i represente the five rows that will turn five time for five student
        cout << "Enter Marks :" << j << " " <<"For Student : "<< i << endl;
        cin >> marks[i][j];
    }
}

double sum = 0;
int avrg[5];


for(int i=0; i < 5; i++){

    sum =0;
    for (int j=0; j < 2; j++)
    {

        sum += marks[i][j];
    }

    avrg[i]= sum /2;

    cout << "Average for student is " << i <<" " <<avrg[i] << endl;

}

*/





/*
int marks[2][3];

for(int i=0; i < 2; i++)
{

    for(int j = 0; j <3; j++)
    {
    //j+1 means start counting from one even for i+1
        cout << "Enter Marks " << j+1 << " For student " << i+1 << endl;
        cin >> marks[i][j];
    }
}


double sum = 0;
int average[2];

for(int i=0; i < 2; i++)
    {
    sum = 0;

    for (int j=0; j < 3; j++)
    {
        sum += marks[i][j];

    }

cout <<" The Sum of student " << i+1 << " Marks is :" <<sum << endl;
cout <<"\n";

average[i] = sum /3;
cout << "The Average is  : " << average[i];
cout << endl;
}

*/


//100% CORRECT

int marks[2][2];
double sum =0;
double average;

for (int i=0; i < 2; i++){

    for (int j=0; j < 2; j++)
    {
        cout << "Enter Marks "<< j+1 << endl;
        cout << "For Student "<< i+1 << endl;
        cin >> marks[i][j];
    }
}

for (int i=0; i < 2; i++)
{
    //ALWAYS MAKE SURE TO INITIALISED THE SUM INSIDE THE LOOP
    sum =0;
    for(int j=0; j < 2; j++)
    {
    sum += marks[i][j];
    average = sum/2;
    }

     cout << "The  marks sum of student " << i+1 << " is " << sum <<"\n";
     cout << "\n";
     cout << "The Average of student  " << i+1 << " is " << average << endl;
}


return 0;
}

