#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main()
{
    int Octa;
    cout << "Enter the Octadecimal Number : ";
    cin >> Octa;

    int Decimal = 0, power = 0;
    while (Octa > 0)
    {
        Decimal = Decimal + (Octa % 10) * pow(8, power);
        Octa /= 10;
        power++;
    }
    string Hexa = "";
    // int Hexa;           // It gives the numerical value of alphabets.
    int Rem;
    while (Decimal > 0)
    {
        Rem = Decimal % 16;
        if (Rem < 10)
        {
            Hexa = char(Rem + 48) + Hexa;
        }
        else
        {
            Hexa = char(Rem + 55) + Hexa;
        }
        Decimal /= 16;
    }
    cout << "The HexaDecimal conversion of Decimal Number is : " << Hexa << endl;
    return 0;
}

// using class

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

class OctaToHexa
{
public:
    void conversion()
    {
            int Octa;
            cout << "Enter the Octadecimal Number : ";
            cin >> Octa;

            int Decimal = 0, power = 0;
            while (Octa > 0)
            {
                Decimal = Decimal + (Octa % 10) * pow(8, power);
                Octa /= 10;
                power++;
            }
            string Hexa = "";
            // int Hexa;           // It gives the numerical value of alphabets.
            int Rem;
            while (Decimal > 0)
            {
                Rem = Decimal % 16;
                if (Rem < 10)
                {
                    Hexa = char(Rem + 48) + Hexa;
                }
                else
                {
                    Hexa = char(Rem + 55) + Hexa;
                }
                Decimal /= 16;
            }
            cout << "The HexaDecimal conversion of Decimal Number is : " << Hexa << endl;
        }
};

    int main()
    {
        int Octa;
        OctaToHexa OTH;
        OTH.conversion();

        return 0;
    }


