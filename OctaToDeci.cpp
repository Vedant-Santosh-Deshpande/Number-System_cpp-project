#include <iostream>
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
    cout << Decimal;

    return 0;
}

// using Class
#include <iostream>
#include <cmath>
using namespace std;

class OctaToDeci
{
public:
    void conversion(int Octa)
    {
        int Decimal = 0, power = 0;
        while (Octa > 0)
        {
            Decimal = Decimal + (Octa % 10) * pow(8, power);
            Octa /= 10;
            power++;
        }
        cout << Decimal;
    }
};

int main()
{
    int Octa;
    cout << "Enter the Octadecimal Number : ";
    cin >> Octa;

    OctaToDeci OTD;
    OTD.conversion(Octa);

    return 0;
}
