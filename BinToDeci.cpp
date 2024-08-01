#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Binary;
    cout<<"Enter the Binary Number : "<<endl;
    cin>>Binary;
    
    cout<<"The Decimal Number conversion of this Binary Number "<<Binary<<" is : ";
    int Decimal = 0 , power = 0 , Rem;
    while(Binary!=0){
        Rem = Binary % 10 ;
        Decimal = Decimal + Rem * pow(2,power);
        ++power;
        Binary = Binary / 10;
    }
    cout<<Decimal;

    return 0;
}

//using class :
#include <iostream>
#include <cmath>
using namespace std;

class BinToDeci{
    public:
    void conversion(int Binary){
    int Decimal = 0 , power = 0 , Rem;
    while(Binary!=0){
        Rem = Binary % 10 ;
        Decimal = Decimal + Rem * pow(2,power);
        ++power;
        Binary = Binary / 10;
    }
    cout<<Decimal;
    }

};

int main(){
    int Binary;
    cout<<"Enter the Binary Number : "<<endl;
    cin>>Binary;

    BinToDeci BTD;
    BTD.conversion(Binary);  
    
    return 0;
}