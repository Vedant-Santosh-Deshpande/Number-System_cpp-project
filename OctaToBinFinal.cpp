#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Octa;
    cout << "Enter the Octadecimal Number : ";
    cin >> Octa;

    int Decimal = 0, p = 0;
    while (Octa > 0)
    {
        Decimal = Decimal + (Octa % 10) * pow(8, p);
        Octa /= 10;
        p++;
    }
    p = 1;
    int Bin = 0;
    while (Decimal > 0)
    {
        Bin = Bin + (Decimal % 2) * p;
        Decimal = Decimal / 2;
        p = p * 10;
    }
    cout << Bin;
    return 0;
}

// using class

class OctaToBin
{
public:
    void conversion(int Octa)
    {
        int Decimal = 0, p = 0;
        while (Octa > 0)
        {
            Decimal = Decimal + (Octa % 10) * pow(8, p);
            Octa /= 10;
            p++;
        }
        p = 1;
        int Bin = 0;
        while (Decimal > 0)
        {
            Bin = Bin + (Decimal % 2) * p;
            Decimal = Decimal / 2;
            p = p * 10;
        }
        cout << Bin;
    }
};

int main()
{
    int Octa;
    cout << "Enter the Octadecimal Number : ";
    cin >> Octa;

    OctaToBin OTB;
    OTB.conversion(Octa);

    return 0;
}
