#include <iostream>
#include <cmath>

using namespace std;

auto kesismeNoktasiX (double a, double b, double c, double d) -> double;
auto yBul (double dogruX, double dogruD, double X) -> double;

int main()
{
    double dogruAX, dogruBX, dogruAD, dogruBD;
    
    cout << "Iki dogrunun kesisimini hesaplama programi basladi." << endl;
    cout << "Ilk dogru katsayi giriniz: ";
    cin >> dogruAX;
    cout << "Ilk dogru 0 giriniz: ";
    cin >> dogruAD;
    cout << "Ikinci dogru katsayi giriniz: ";
    cin >> dogruBX;
    cout << "Ikinci dogru 0 giriniz: ";
    cin >> dogruBD;

    if(dogruAX == dogruBX && dogruAD == dogruBD)
    {
        cout << "Dogrular esit olup her noktada kesisirler." << endl;
        return 0;
    }

    if(dogruAX == dogruBX && dogruAD != dogruBD)
    {
        cout << "İki dogru paralel olup kesismezler." << endl;
        return 0;
    }

    double x = kesismeNoktasiX (dogruAX, dogruAD, dogruBX, dogruBD);
    double y = yBul(dogruAX, dogruAD, x);

    cout << "Dogrular ( " << x << ", " << y << " ) noktasinda kesisirler." << endl;

    return 0;
}

auto kesismeNoktasiX (double a, double b, double c, double d) -> double
{
    return (d - b) / (a - c);
}

auto yBul (double dogruX, double dogruD, double X) -> double
{
    return dogruX * X + dogruD;
}
