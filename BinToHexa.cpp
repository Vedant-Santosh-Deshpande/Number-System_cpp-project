#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Hexa;
    int i = 1, j = 0, Rem, Decimal = 0, Binary;
    cout << "Enter the Binary Number : ";
    cin >> Binary;
    while (Binary > 0)
    {
        Rem = Binary % 2;
        Decimal = Decimal + Rem * i;
        i = i * 2;
        Binary = Binary / 10;
    }
    i = 0;
    while (Decimal != 0)
    {
        Hexa = Decimal % 16;
        Decimal = Decimal / 16;
        i++;
    }

    cout <<" The HexaDecimal Conversion of Binary Number is : " ;
    for (j = i - 1; j >= 0; j--)
    {
        if (Hexa > 9)
            cout << (char)(Hexa + 55);
        else
            cout << Hexa;
    }
}

// USing class

class BinToHexa
{
public:
    void conversion(int Binary)
    {
        int Hexa;
        int i = 1, j = 0, Rem, Decimal = 0;
        while (Binary > 0)
        {
            Rem = Binary % 2;
            Decimal = Decimal + Rem * i;
            i = i * 2;
            Binary /= 10;
        }
        i = 0;
        while (Decimal > 0)
        {
            Hexa = Decimal % 16;
            Decimal /= 16;
            i++;
        }

        cout << " The HexaDecimal Conversion of Binary Number is : ";
        for (j = i - 1; j >= 0; j--)
        {
            if (Hexa > 9)
                cout << (char)(Hexa + 55);
            else
                cout << Hexa;
        }
    }
};

int main()
{
    int Binary;
    cout << "Enter the Binary Number : ";
    cin >> Binary;

    BinToHexa BTH;
    BTH.conversion(Binary);

    return 0;
}
