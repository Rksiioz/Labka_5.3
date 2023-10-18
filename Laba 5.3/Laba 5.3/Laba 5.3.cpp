#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double z(const double x);

int main()
{
    double kp, kk, s;
    int n;

    cout << "kp = "; cin >> kp;
    cout << "kk = "; cin >> kk;
    cout << "n = "; cin >> n;
    cout << "-----------------------------" << endl;
    cout << "| " << setw(5) << "s" << "         |"
        << setw(10) << "n" << " |"
        << endl;
    cout << "-----------------------------" << endl;


    double dk = (kk - kp) / n; //dk = δ³ιρνε k

    double k = kp;

    while (k <= kk)
    {
        s = z(2 * k + 1) - pow(z(2 * k - 1), 2) + sqrt(z(k));
        cout << "|" << setw(7) << s << "\t|"
            << setw(10) << k << " |"
            << endl;
        cout << "-----------------------------" << endl;
        k += dk;
    }

    return 0;
}


double z(const double x)
{
    if (abs(x) >= 1)
    {
        return ((cos(x) + 1) / (pow(sin(x), 2) + exp(x)));
    }
    else {
        double S = 0;
        int j = 0;
        double a = 1;
        S = a;
        do
        {
            j++;
            double R = -x / j;
            a *= R;
            S += a;
        } while (j <= 7);
        return S * (1 / exp(x));
    }
}