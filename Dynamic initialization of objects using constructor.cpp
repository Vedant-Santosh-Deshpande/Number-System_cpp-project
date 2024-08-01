#include <iostream>
#include <cmath>
using namespace std;

class BankDeposite
{
    int principal_value;
    int Time ;
    int Interestrate;

    public:
    int returnvalue;
    BankDeposite(){}

    BankDeposite(int p , int t , float r)
    {
        principal_value = p;
        Time = t;
        Interestrate = r;
        returnvalue = principal_value;
        for(int i=1 ; i<= t ; i++){
         returnvalue = returnvalue * (1+r); 
    }
    }

   void display()
      {
        cout<<"The value of your interest is " <<returnvalue;
      }


};

int main()
{
    int p , t ;
    float r;
    cout<<"Enter the values of p , t , r :"<<endl;
    cin>>p>>t>>r;
    BankDeposite b1(p,t,r);
    b1.display();

    return 0;
}