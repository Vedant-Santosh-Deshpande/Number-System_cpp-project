#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int Octa;
    cout<<"Enter the Octadecimal Number : ";
    cin>>Octa;
    
    int Bin = 0 , place = 1;
    while(Octa>0){
        Bin = Bin + (Octa % 2) * place;
        Octa/=2;
        place = place * 10 ;
    }
    cout<<Bin;
    return 0;
}

// using class 
#include <iostream>
#include <cmath>
using namespace std;


class OctaToBin{
    public:
    void conversion(int Octa){
     int Bin = 0 , place = 1;
    while(Octa>0){
        Bin = Bin + (Octa % 2) * place;
        Octa/=2;
        place = place * 10 ;
    }
    cout<<Bin;     
    }
};

int main (){
    int Octa;
    cout<<"Enter the Octadecimal Number : ";
    cin>>Octa;

    OctaToBin OTB;
    OTB.conversion(Octa);

    return 0;

}