#include <iostream>
using namespace std;

int main(){

    /*
cout << "For the String : \n";
string cars[4] = {"TOYOTA","BMW","RAV","TRUCK"};
cout << "\n";
cout << "The Arrays is : " << cars[0] << "\n";
cout << "The Arrays is : " << cars[1] << "\n";
cout << "Then Arrays is : "<< cars[2] << "\n";
cout << "the Arrays is : " << cars[3] << "\n\n";


cout << "for the integers : \n\n";

int numbers[5]={10, 12, 15,23,13};
cout << "The Array is : " << numbers[0] <<"\n";
cout << "The Array is : " << numbers[1] <<"\n";
cout << "the Array is : " << numbers[2] <<"\n";
cout << "The Array is : " << numbers[3] <<"\n";
cout << "the Array is : " << numbers[4] <<"\n";



//AARAYS AND LOOP

int numbers[10] = {53,89,45,16,47,82,35,64,24,94};

for (int i =0; i < 10; i++){
    cout << i << " = " << numbers[i] <<"\n";
}
*/

//OMIT IN THE ARRAY:
/*
int numbers[10] = {55,52,53,56,42,41,43};

for(int i=0; i<10; i++){
    numbers[7] = 36;
    numbers[8] = 38;
    numbers[9] = 29;
    cout << i << " = " << numbers[i] << "\n";
}
*/







/*
int numbers[5];
cout << "Enter The First numbers : ";
cin >>numbers[0];
cout << "Enter The Second Number : ";
cin >>numbers[1];
cout << "Enter The Second Number : ";
cin >>numbers[2];
cout << "Enter The Third Numbre : ";
cin >> numbers[3];
cout << "Enter The Fourth Number : ";
cin >> numbers[4];

int str,str1,str2,str3,str4;
str = numbers[0];
str1 = numbers[1];
str2 = numbers[2];
str3 = numbers[3];
str4 = numbers[4];

numbers[0] = str;
numbers[1] = str1;
numbers[2] = str2;
numbers[3] = str3;
numbers[4] = str4;
cout <<"\n\n";
for(int i = 0; i< 5; i++){

    cout << i << " = " << numbers[i] <<"\n";

}


string numbers[3];
string str,str1,str2;

cout << "Enter Any Car Name : ";
cin >> numbers[0];

cout << "Enter Any Car Name  : ";
cin >> numbers[1];

cout << "Enter Any Car Name  : ";
cin >> numbers[2];

cout << "\n\n";

str = numbers[0];
str1 = numbers[1];
str2 = numbers[2];

numbers[0] = str;
numbers[1] = str1;
numbers[2] = str2;


for(int i =0; i < 3; i++){

    cout << i << " = " << numbers[i] <<"\n\n";

}
*/



//this is an empty arry so i'm passing integer to this empty array this what we call omiting in the array

/*
int number[3];
int str,str1,str2;
cout << "number[0] = ";
cin >> number[0];

cout << "number[1] = ";
cin >> number[1];

cout << "number[2] = ";
cin >> number[2];

str = number[0];
str1 = number[1];
str2 = number[2];


number[0] = str;
number[1] = str1;
number[2] = str2;



for (int i = 0; i< 3; i++){
    cout << i << " = " << number[i] << "\n\n";

}
*/



int billy[] = {16,2,77,40,12071};
int n,result = 0;
for(n=0; n < 5; n++){

    result += billy[n];
}
cout << result << "\n";




return 0;
}
