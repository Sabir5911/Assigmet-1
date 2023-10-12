#include <iostream>
using namespace std;

int main()
{
    float Base;
    float Hypoteneous;
    float Prependiculer;
    cout << "Enter The Base of the Triangle = ";
    cin >> Base;
    cout << endl;

    cout << "Enter The Prependiculer of the Triangle = ";
    cin >> Prependiculer;
    cout << endl;
    cout << "Enter The Hypoteneous of the Triangle = ";
    cin >> Hypoteneous;

    if (((Base * Base) + (Prependiculer * Prependiculer)) == (Hypoteneous * Hypoteneous))
    {
        cout << "The Triangle is a right Angle Triangle";
    }
    else
    {
        cout << "The Triangle is not a right angle triangle";
    }

    return 0;
}