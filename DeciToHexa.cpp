#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Decimal;
    cout << "Enter the Decimal Number : ";
    cin >> Decimal;

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

class DeciToHexa
{
public:
    void conversion(int Decimal)
    {
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
    int Decimal;
    cout << "Enter the Decimal Number : ";
    cin >> Decimal;

    DeciToHexa DTH;
    DTH.conversion(Decimal);

    return 0;
}
