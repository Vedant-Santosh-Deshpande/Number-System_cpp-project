#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int Bin;
    cout<<"Enter the Binary Number : ";
    cin>>Bin;
    
    int Octa = 0 , power = 0;
    while(Bin>0){
        Octa = Octa + (Bin % 10) * pow(2,power);
        Bin/=10;
        power++;
    }
    cout<<Octa;
    return 0;
}

// using class 
#include <iostream>
#include <cmath>
using namespace std;


class BinToOcta{
    public:
    void conversion(int Bin){
    int Octa = 0 , power = 0;
    while(Bin>0){
        Octa = Octa + (Bin % 10) * pow(2,power);
        Bin/=10;
        power++;
    }
    cout<<Octa;
    }
};

int main(){
    int Bin;
    cout<<"Enter the Binary Number : ";
    cin>>Bin;
     
    BinToOcta BTO;
    BTO.conversion(Bin);

    return 0;
}
