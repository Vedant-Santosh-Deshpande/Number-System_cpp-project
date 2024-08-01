#include <iostream>

#include <cmath>

#include <string>

using namespace std;

void dectobin(int);
void dectoocta(int);
void dectohexa(int);
void bintohexa(int);
void bintoocta(int);
void bintodec(int);
void octatobin(int);
void octatohexa(int);
void octatodec(int);
void hexatodec(void);
void hexatobin(void);
void hexatoocta(void);

void dectobin(int decimal)
{
    int binary = 0;

    int base = 1, remainder;

    int temp = decimal;

    while (decimal > 0)
    {
        remainder = decimal % 2;

        binary = binary + remainder * base;

        decimal = decimal / 2;

        base = base * 10;
    }
    decimal = temp;

    cout << "\n\t THE BINARY EQUIVALENT OF " << decimal << " IS " << binary;
}
void dectohexa(int decimal)
{
    char hex[100];

    int i = 0, remainder;

    int temp = decimal;

    while (decimal > 0)
    {
        remainder = decimal % 16;
        if (remainder < 10)
        {

            hex[i] = remainder + 48;
        }
        else
        {

            hex[i] = remainder + 55;
        }

        i++;
        decimal = decimal / 16;
    }
    decimal = temp;

    cout << "\n\t Hexadecimal equivalent of " << decimal << " is ";

    for (int j = i - 1; j >= 0; j--)
    {

        cout << hex[j];
    }
}
void dectoocta(int decimal)
{
    int octadec = 0;

    int base = 1, remainder;

    int temp = decimal;

    while (decimal > 0)
    {
        remainder = decimal % 8;

        octadec = octadec + remainder * base;

        decimal = decimal / 8;

        base = base * 10;
    }
    decimal = temp;

    cout << "\n\t The Octaldecimal equivalent number of " << decimal << " is " << octadec;
}
void bintohexa(int binary)
{
    int decimal = 0, i = 0;

    int now = binary;

    while (binary != 0)
    {

        decimal = decimal + (binary % 10) * pow(2, i);
        ++i;
        binary = binary / 10;
    }

    char hex[100];

    int k = 0, remainder;

    binary = now;

    while (decimal > 0)
    {
        remainder = decimal % 16;
        if (remainder < 10)
        {

            hex[k] = remainder + 48;
        }
        else
        {

            hex[k] = remainder + 55;
        }

        k++;
        decimal = decimal / 16;
    }

    cout << "\n\t Hexadecimal equivalent of " << binary << " is ";
    for (int j = k - 1; j >= 0; j--)
    {
        cout << hex[j];
    }
}
void bintoocta(int binary)
{
    int decimal = 0, i = 0;
    int temp = binary;

    while (binary != 0)
    {
        decimal = decimal + (binary % 10) * pow(2, i);
        ++i;
        binary = binary / 10;
    }
    binary = temp;

    int octadec = 0;

    int base = 1, remainder;

    while (decimal > 0)
    {
        remainder = decimal % 8;

        octadec = octadec + remainder * base;

        decimal = decimal / 8;

        base = base * 10;
    }

    cout << "\n\t The Octaldecimal equivalent number of " << binary << " is " << octadec;
}
void bintodec(int binary)
{
    int decimal = 0, i = 0;
    int temp = binary;

    while (binary != 0)
    {
        decimal = decimal + (binary % 10) * pow(2, i);
        ++i;
        binary = binary / 10;
    }
    binary = temp;

    cout << " \n\t The decimal equivalent of " << binary << " is " << decimal;
}
void octatodec(int octadec)
{
    int decimal = 0, i = 0;
    int temp = octadec;
    while (octadec != 0)
    {
        decimal = decimal + (octadec % 10) * pow(8, i);
        ++i;
        octadec = octadec / 10;
    }
    octadec = temp;
    cout << "\n\t The Decimal Equivalent Of " << octadec << " is " << decimal;
}
void octatobin(int octadec)
{
    int dec = 0, i = 0;

    int temp = octadec;

    while (octadec != 0)
    {
        dec = dec + (octadec % 10) * pow(8, i);

        ++i;

        octadec = octadec / 10;
    }
    octadec = temp;

    int binary = 0;
    int base = 1, remainder;
    while (dec > 0)
    {
        remainder = dec % 2;

        binary = binary + remainder * base;

        dec = dec / 2;

        base = base * 10;
    }

    cout << " \n\t The Binary Equivalent Of " << octadec << " Is " << binary << endl;
}
void octatohexa(int octadec)
{

    int decimal = 0, i = 0;
    int temp = octadec;
    while (octadec != 0)
    {
        decimal = decimal + (octadec % 10) * pow(8, i);
        ++i;
        octadec = octadec / 10;
    }
    octadec = temp;

    char hex[100];
    int j = 0, remainder;
    int now = decimal;

    while (decimal > 0)
    {
        remainder = decimal % 16;
        if (remainder < 10)
        {
            hex[j] = remainder + 48;
        }
        else
        {
            hex[j] = remainder + 55;
        }

        j++;
        decimal = decimal / 16;
    }
    decimal = now;

    cout << "\n\t Hexadecimal equivalent of " << octadec << " is ";
    for (int k = j - 1; k >= 0; k--)
    {

        cout << hex[k];
    }
}
void hexatodec(string hexa)
{
    cout << "ENTER THE NUMBER ";
    cin >> hexa;

    int decimal = 0;
    int power = 0;

    string temp = hexa;

    for (int i = hexa.length() - 1; i >= 0; i--)
    {

        char hex_digit = hexa[i];
        int decimal_digit;

        if (hex_digit >= '0' && hex_digit <= '9')
        {
            decimal_digit = hex_digit - '0';
        }
        else if (hex_digit >= 'A' && hex_digit <= 'F')
        {
            decimal_digit = hex_digit - 'A' + 10;
        }
        else
        {
            cout << "Invalid hexadecimal number." << endl;
        }

        decimal = decimal + decimal_digit * pow(16, power);
        power++;
    }
    hexa = temp;

    cout << "Decimal equivalent of  " << hexa << " is " << decimal << endl;
}
void hexatobin(string hexa)
{
    cout << "\n\t\t\t ENTER THE NUMBER ";
    cin >> hexa;

    int decimal = 0;
    int power = 0;

    string temp = hexa;

    for (int i = hexa.length() - 1; i >= 0; i--)
    {

        char hex_digit = hexa[i];
        int decimal_digit;

        if (hex_digit >= '0' && hex_digit <= '9')
        {
            decimal_digit = hex_digit - '0';
        }
        else if (hex_digit >= 'A' && hex_digit <= 'F')
        {
            decimal_digit = hex_digit - 'A' + 10;
        }
        else
        {
            cout << "Invalid hexadecimal number." << endl;
        }

        decimal = decimal + decimal_digit * pow(16, power);
        power++;
    }
    hexa = temp;

    // cout << "Decimal equivalent of  " << hexa << " is " << decimal << endl;
    int binary = 0;

    int base = 1, remainder;
    int now = decimal;

    while (decimal > 0)
    {
        remainder = decimal % 2;

        binary = binary + remainder * base;

        decimal = decimal / 2;

        base = base * 10;
    }
    decimal = now;

    cout << "\n\t THE BINARY EQUIVALENT OF " << decimal << " IS " << binary;
}
void hexatoocta(string hexa)

{
    cout << "\n\t\t\t ENTER THE NUMBER ";
    cin >> hexa;

    int decimal = 0;
    int power = 0;

    string temp = hexa;

    for (int i = hexa.length() - 1; i >= 0; i--)
    {

        char hex_digit = hexa[i];
        int decimal_digit;

        if (hex_digit >= '0' && hex_digit <= '9')
        {
            decimal_digit = hex_digit - '0';
        }
        else if (hex_digit >= 'A' && hex_digit <= 'F')
        {
            decimal_digit = hex_digit - 'A' + 10;
        }
        else
        {
            cout << "Invalid hexadecimal number." << endl;
        }

        decimal = decimal + decimal_digit * pow(16, power);
        power++;
    }

    hexa = temp;

    int octadec = 0;

    int base = 1, remainder;

    int now = decimal;

    while (decimal > 0)
    {
        remainder = decimal % 8;

        octadec = octadec + remainder * base;

        decimal = decimal / 8;

        base = base * 10;
    }
    decimal = now;

    cout << "\n\t The Octaldecimal equivalent number of " << hexa << " is " << octadec;
}

int main()

{
    int n, ch;

    cout << "\n\n\t     MENU" << endl;
    cout << "-------------------------------" << endl;

    cout << "1.DECIMAL      -->  BINARY" << endl;
    cout << "2.DECIMAL      -->  HEXADECIMAL" << endl;
    cout << "3.DECIMAL      -->  OCTADECIMAL" << endl;
    cout << "4.BINARY       -->  HEXADECIMAL" << endl;
    cout << "5.BINARY       -->  OCTADECIMAL" << endl;
    cout << "6.BINARY       -->  DECIMAL" << endl;
    cout << "7.OCTADECIMAL  -->  BINARY" << endl;
    cout << "8.OCTADECIMAL  -->  HEXADECIMAL" << endl;
    cout << "9.OCTADECIMAL  -->  DECIMAL " << endl;
    cout << "10.HEXADECIMAL -->  DECIMAL" << endl;
    cout << "11.HEXADECIMAL -->  BINARY " << endl;
    cout << "12.HEXADECIMAL -->  OCTADECIMAL" << endl;

    cout << "\n\n\n\t\t ENTER THE OPTION ";
    cin >> ch;

    if (ch < 10)
    {
        cout << "\n\t\t\t ENTER THE NUMBER  ";
        cin >> n;
    }

    string s;

    switch (ch)
    {

    case 1:

        dectobin(n);
        break;

    case 2:
        dectohexa(n);
        break;

    case 3:
        dectoocta(n);
        break;

    case 4:
        bintohexa(n);
        break;

    case 5:
        bintoocta(n);
        break;

    case 6:
        bintodec(n);
        break;

    case 7:
        octatobin(n);
        break;

    case 8:
        octatohexa(n);
        break;

    case 9:
        octatodec(n);
        break;

    case 10:
        hexatodec(s);
        break;

    case 11:
        hexatobin(s);
        break;

    case 12:
        hexatoocta(s);
        break;

    default:
        cout << "\n\t INVALID INPUT";
        break;
    }

    return 0;
}

a
