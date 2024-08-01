
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Decimal;
    cout<<"Enter the Decimal Number :";
    cin>>Decimal;
     
    int place = 1 ,octa = 0;
    while(Decimal !=0){
        octa = octa + (Decimal % 8) * place;
        Decimal = Decimal / 8;
        place = place * 10;
    }
    cout<<"The octadecimal conversion of Decimal number is :"<<octa<<endl;
    return 0;
}
// using class 
#include <iostream>
#include <cmath>
using namespace std;

class DecToOcta{
    public:
        int place = 1 , octa = 0;
    void conversion(int Decimal){
        while(Decimal !=0){
        octa = octa + (Decimal % 8) * place;
        Decimal = Decimal / 8;
        place = place * 10;
    }
    cout<<"The octadecimal conversion of Decimal number is :"<<octa<<endl;
    }
};

int main(){
    int Decimal;
    cout<<"Enter the Decimal Number :";
    cin>>Decimal;
    
    DecToOcta DTO;
    DTO.conversion(Decimal);
}