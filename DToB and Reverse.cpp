#include <iostream>
using namespace std;

int main()
{
    int n,rev,rem;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    
    // cout<<"The binary number is :"<<endl;
    // while(n!=0){
    //     rem = n % 2;
    //     cout<<rem;
    //     n = n/2;
    // }
    // cout<<endl;
    
    rev = 0;
    while(n>0){
        rev = (rev*10) + n%10;
        n = n/10;
    }
    cout<<"Reverse of a number is: "<<rev<<endl;

    return 0;
}
