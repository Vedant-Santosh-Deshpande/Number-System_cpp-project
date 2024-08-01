#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

class NumberSystem
{
private:
    int number;

public:
    NumberSystem(int n)
    {
        number = n;
    }

    void BinToDeci()
    {
        cout << "You are converting Binary Number into Decimal Number ." << endl;
        string input;
        int Binary;
        cout << "Enter the Binary number : ";
        cin >> Binary;
        int Decimal = 0, power = 0, Rem;
        while (Binary > 0)
        {
            Rem = Binary % 10;
            Decimal += Rem * pow(2, power);
            ++power;
            Binary /= 10;
        }
        cout << "The Decimal conversion of Binary number is :" << Decimal << endl;
    }

    void BinToOcta()
    {
        cout << "You are converting Binary Number into OctaDecimal Number. " << endl;
        int Binary;
        cout << "Enter the Binary number : ";
        cin >> Binary;
        int Decimal = 0, p = 0, Rem; // Here P is equivalent to power.
        while (Binary > 0)
        {
            Rem = Binary % 10;
            Decimal += Rem * pow(2, p);
            ++p;
            Binary /= 10;
        }
        p = 1; // Here P is equivalent to place.
        int octa = 0;
        while (Decimal > 0)
        {
            octa += (Decimal % 8) * p;
            Decimal /= 8;
            p *= 10;
        }
        cout << "The octadecimal conversion of Binary number is :" << octa << endl;
    }

    void BinToHexa()
    {
        cout << "You are converting Binary Number into HexaDecimal Number. " << endl;
        int Binary;
        cout << "Enter the Binary Number : ";
        cin >> Binary;

        int i = 1, j = 0, Rem, Decimal = 0;
        while (Binary > 0)
        {
            Rem = Binary % 2;
            Decimal += Rem * i;
            i = i * 2;
            Binary /= 10;
        }

        int Hexa;
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

    void DeciToBin()
    {
        cout << "You are converting Decimal Number into Binary Number. " << endl;
        int Decimal;
        cout << "Enter the Decimal number : ";
        cin >> Decimal;

        int place = 1, Binary = 0;
        while (Decimal > 0)
        {
            Binary += (Decimal % 2) * place;
            Decimal /= 2;
            place *= 10;
        }
        cout << "The Binary conversion of Decimal number is :" << Binary << endl;
    }

    void DeciToOcta()
    {
        cout << "You are converting Decimal Number into OctaDecimal Number. " << endl;
        int Decimal;
        cout << "Enter the Decimal number : ";
        cin >> Decimal;
        int place = 1, octa = 0;
        while (Decimal > 0)
        {
            octa += (Decimal % 8) * place;
            Decimal /= 8;
            place *= 10;
        }
        cout << "The octadecimal conversion of Decimal number is :" << octa << endl;
    }

    void DeciToHexa()
    {
        cout << "You are converting Decimal Number into HexaDecimal Number. " << endl;
        int Decimal;
        cout << "Enter the Decimal number : ";
        cin >> Decimal;
        string Hexa = "";
        // int Hexa;                                                     // It gives the numerical value of alphabets.
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

    void OctaToBin()
    {
        cout << "You are converting OctaDecimal Number into Binary Number. " << endl;
        int Octa;
        cout << "Enter the OctaDecimal number : ";
        cin >> Octa;
        int Decimal = 0, p = 0; // Here P is equivalent to power.
        while (Octa > 0)
        {
            Decimal += (Octa % 10) * pow(8, p);
            Octa /= 10;
            p++;
        }
        p = 1; // Here P is equivalent to place.
        int Binary = 0;
        while (Decimal > 0)
        {
            Binary += (Decimal % 2) * p;
            Decimal /= 2;
            p *= 10;
        }
        cout << "The Binary conversion of OctaDecimal number is :" << Binary << endl;
    }

    void OctaToDeci()
    {
        cout << "You are converting OctaDecimal Number into Decimal Number. " << endl;
        int Octa;
        cout << "Enter the OctaDecimal number : ";
        cin >> Octa;
        int Decimal = 0, power = 0;
        while (Octa > 0)
        {
            Decimal += (Octa % 10) * pow(8, power);
            Octa /= 10;
            power++;
        }
        cout << "The Decimal conversion of OctaDecimal number is :" << Decimal << endl;
    }

    void OctaTOHexa()
    {
        cout << "You are converting OctaDecimal Number into HexaDecimal Number ." << endl;
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

    void HexaToBin()
    {
        cout << "You are converting HexaDecimal Number into Binary Number. " << endl;
        string Hexa;
        cout << "Enter the Hexa Number : ";
        cin >> Hexa;

        int Decimal = 0;
        int size = Hexa.size();

        for (int i = 0; i < size; i++)
        {
            int sum = 0;
            if (Hexa[i] >= '0' && Hexa[i] <= '9')
            {
                sum = Hexa[i] - '0';
            }
            else if (Hexa[i] >= 'A' && Hexa[i] <= 'F')
            {
                sum = Hexa[i] - 'A' + 10;
            }
            else if (Hexa[i] >= 'a' && Hexa[i] <= 'f')
            {
                sum = Hexa[i] - 'a' + 10;
            }
            Decimal += sum * pow(16, size - i - 1);
        }

        int place = 1, Binary = 0;
        while (Decimal > 0)
        {
            Binary += (Decimal % 2) * place;
            Decimal = Decimal / 2;
            place *= 10;
        }
        cout << "The Binary conversion of HexaDecimal Number is : " << Binary << endl;
    }

    void HexaToDeci()
    {
        cout << "You are converting HexaDecimal Number into Decimal Number. " << endl;
        string Hexa;
        cout << "Enter the HexaDecimal Number : ";
        cin >> Hexa;

        int Decimal = 0;
        int size = Hexa.size();

        for (int i = 0; i < size; i++)
        {
            int sum = 0;
            if (Hexa[i] >= '0' && Hexa[i] <= '9')
            {
                sum = Hexa[i] - '0';
            }
            else if (Hexa[i] >= 'A' && Hexa[i] <= 'F')
            {
                sum = Hexa[i] - 'A' + 10;
            }
            else if (Hexa[i] >= 'a' && Hexa[i] <= 'f')
            {
                sum = Hexa[i] - 'a' + 10;
            }
            Decimal += sum * pow(16, size - i - 1);
        }
        cout << "The Decimal conversion of HexaDecimal Number is : " << Decimal << endl;
    }

    void HexaToOcta()
    {
        cout << "You are converting HexaDecimal Number into OctaDecimal Number. " << endl;
        string Hexa;
        cout << " Enter the HexaDecimal Number : ";
        cin >> Hexa;

        int Decimal = 0;
        int size = Hexa.size();

        for (int i = 0; i < size; i++)
        {
            int sum = 0;
            if (Hexa[i] >= '0' && Hexa[i] <= '9')
            {
                sum = Hexa[i] - '0';
            }
            else if (Hexa[i] >= 'A' && Hexa[i] <= 'F')
            {
                sum = Hexa[i] - 'A' + 10;
            }
            else if (Hexa[i] >= 'a' && Hexa[i] <= 'f')
            {
                sum = Hexa[i] - 'a' + 10;
            }
            Decimal += sum * pow(16, size - i - 1);
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
    int number, choice;
    NumberSystem NS(number);

    cout << "1.Binary       -->   Decimal     " << endl;
    cout << "2.Binary       -->   OctaDecimal " << endl;
    cout << "3.Binary       -->   HexaDecimal " << endl;
    cout << "4.Decimal      -->   Binary      " << endl;
    cout << "5.Decimal      -->   OctaDecimal " << endl;
    cout << "6.Decimal      -->   HexaDecimal " << endl;
    cout << "7.OctaDecimal  -->   Binary      " << endl;
    cout << "8.OctaDecimal  -->   Decimal     " << endl;
    cout << "9.OctaDecimal  -->   HexaDecimal " << endl;
    cout << "10.HexaDecimal -->   Binary      " << endl;
    cout << "11.HexaDecimal -->   Decimal     " << endl;
    cout << "12.HexaDecimal -->   OctaDecimal " << endl;

    cout << "              ** WELCOME TO NUMBER SYSTEM PROGRAM **          " << endl;

    cout << "Select the conversion you want to do : ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        NS.BinToDeci();
        break;

    case 2:
        NS.BinToOcta();
        break;

    case 3:
        NS.BinToHexa();
        break;

    case 4:
        NS.DeciToBin();
        break;

    case 5:
        NS.DeciToOcta();
        break;

    case 6:
        NS.DeciToHexa();
        break;

    case 7:
        NS.OctaToBin();
        break;

    case 8:
        NS.OctaToDeci();
        break;

    case 9:
        NS.OctaTOHexa();
        break;

    case 10:
        NS.HexaToBin();
        break;

    case 11:
        NS.HexaToDeci();
        break;

    case 12:
        NS.HexaToOcta();
        break;

    default:
        cout << "\n\t InValid Input";
        break;
    }

    return 0;
}