#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string Hexa;
    cout << " Enter the HexaDecimal Number : ";
    cin >> Hexa;

    int Decimal = 0;
    int size = Hexa.size();

    for (int i = 0; i < size; i++)
    {
        int Digit = 0;
        if (Hexa[i] >= '0' && Hexa[i] <= '9')
        {
            Digit = Hexa[i] - '0';
        }
        else if (Hexa[i] >= 'A' && Hexa[i] <= 'F')
        {
            Digit = Hexa[i] - 'A' + 10;
        }
        else if (Hexa[i] >= 'a' && Hexa[i] <= 'f')
        {
            Digit = Hexa[i] - 'a' + 10;
        }
        Decimal += Digit * pow(16, size - i - 1);
    }
    cout << "The Decimal conversion of HexaDecimal Number is : " << Decimal;

    return 0;
}

// using class

class HexaToDeci
{
public:
    void conversion(string Hexa)
    {
        int Decimal = 0;
        int size = Hexa.size();

        for (int i = 0; i < size; i++)
        {
            int Digit = 0;
            if (Hexa[i] >= '0' && Hexa[i] <= '9')
            {
                Digit = Hexa[i] - '0';
            }
            else if (Hexa[i] >= 'A' && Hexa[i] <= 'F')
            {
                Digit = Hexa[i] - 'A' + 10;
            }
            else if (Hexa[i] >= 'a' && Hexa[i] <= 'f')
            {
                Digit = Hexa[i] - 'a' + 10;
            }
            Decimal += Digit * pow(16, size - i - 1);
        }
        cout << "The Decimal conversion of HexaDecimal Number is : " << Decimal;
    }
};

int main()
{
    string Hexa;
    cout << " Enter the HexaDecimal Number : ";
    cin >> Hexa;

    HexaToDeci HTD;
    HTD.conversion(Hexa);
}
