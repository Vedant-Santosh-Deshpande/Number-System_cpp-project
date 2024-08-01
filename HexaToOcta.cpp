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

    int place = 1, octa = 0;
    while (Decimal != 0)
    {
        octa = octa + (Decimal % 8) * place;
        Decimal = Decimal / 8;
        place = place * 10;
    }
    cout << "The octadecimal conversion of Decimal number is :" << octa << endl;
    return 0;
}
// using class

#include <iostream>
#include <math.h>
using namespace std;

class HexaToOcta
{
public:
    void conversion()
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

            int place = 1, octa = 0;
            while (Decimal != 0)
            {
                octa = octa + (Decimal % 8) * place;
                Decimal = Decimal / 8;
                place = place * 10;
            }
            cout << "The octadecimal conversion of Decimal number is :" << octa << endl;
        }
    };

int main()
{
    HexaToOcta HTO;
    HTO.conversion();

    return 0;
}

