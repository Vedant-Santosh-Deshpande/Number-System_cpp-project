#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Decimal;
    cout << "Enter the decimal number :" << endl;
    cin >> Decimal;

    int place = 1, Bin = 0;
    while (Decimal > 0)
    {
        Bin = Bin + (Decimal % 2) * place;
        Decimal = Decimal / 2;
        place = place * 10;
    }
    cout << Bin;
    return 0;
}
// #include<math.h>
// int main(){
//     int n;
//     cin>>n;

//     int bin = 0;
//     int i =0;
//     while (n!= 0)
//     {
//         int bit = n&1;
//         bin = (bit * pow(10,i)) + bin ;
//         n = n>>1;
//         i++;
//     }
//     cout<<bin ;
    
// }
// using class

#include <iostream>
#include <cmath>
using namespace std;

class DecToBin
{
public:
    void conversion(int Decimal)
    {
        int place = 1, Bin = 0;
        while (Decimal > 0)
        {
            Bin = Bin + (Decimal % 2) * place;
            Decimal = Decimal / 2;
            place = place * 10;
        }
        cout << Bin;
    }
};

int main()
{
    int Decimal;
    cout << "Enter the decimal number :" << endl;
    cin >> Decimal;

    DecToBin DTB;
    DTB.conversion(Decimal);

    return 0;
}