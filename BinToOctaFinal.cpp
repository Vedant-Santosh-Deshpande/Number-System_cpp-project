#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Binary;
    cout<<"Enter the Binary Number : "<<endl;
    cin>>Binary;
    
    // cout<<"The Decimal Number conversion of this Binary Number "<<Binary<<" is : ";
    int Decimal = 0 , p = 0 , Rem;
    while(Binary!=0){
        Rem = Binary % 10 ;
        Decimal = Decimal + Rem * pow(2,p);
        ++p;
        Binary = Binary / 10;
    }
    p = 1 ;
    int octa = 0;
    while(Decimal !=0){
        octa = octa + (Decimal % 8) * p;
        Decimal = Decimal / 8;
        p = p * 10;
    }
    cout<<"The octadecimal conversion of Binary number is :"<<octa<<endl;
    return 0;
}

// using class 
#include <iostream>
#include <cmath>
using namespace std;

class BinToOcta{
    public:
    void conversion(int Binary){
 int Decimal = 0 , p = 0 , Rem;
    while(Binary!=0){
        Rem = Binary % 10 ;
        Decimal = Decimal + Rem * pow(2,p);
        ++p;
        Binary = Binary / 10;
    }
    p = 1 ;
    int octa = 0;
    while(Decimal !=0){
        octa = octa + (Decimal % 8) * p;
        Decimal = Decimal / 8;
        p = p * 10;
    }
    cout<<"The octadecimal conversion of Binary number is :"<<octa<<endl;
    }
};

int main (){
    int Binary;
    cout<<"Enter the Binary Number : "<<endl;
    cin>>Binary;

    BinToOcta BTO;
    BTO.conversion(Binary);

    return 0;

}