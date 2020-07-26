#include <iostream>
using namespace std;


    int m,n;

    int valueCheck(int num, int demon)
    {

            return demon ==0?num:valueCheck(denom,num%denom);

    }
    int reduce(int num, int denom)
    {
        if(num ==0 || denom==0){
            return 0;
        }else{

        m=num/valueCheck(num,denom);
        n=denom/valueCheck(num,denom);
        return 1;
        }
    }

int main()
{
        cout <<"\n      Enter integer(m): ";
        cin>> m; cout<<endl;
        cout <<"\n      Enter integer(n): ";
        cin>> n; cout <<endl;

        if(reduce(m,n)==1)
        {
            cout << m << '/'<< n <<endl;
        }
        else{
            cout <<" Fraction error" << endl;
        }
        system("pause");

    return 0;
}
