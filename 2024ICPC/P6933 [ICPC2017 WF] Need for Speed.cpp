#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

double calc(int n, int t, int *d, int *s, double x)
{
    double res = -t;
    for (int i = 0; i < n; i++)
    {
        res += d[i] / (s[i] + x);
    }
    return res;
}

double bio_section(int n, int t, int *d, int *s, double a, double b, double tol)
{
    double c;
    while (b - a > tol)
    {
        c = (a + b) / 2;
        double res = calc(n, t, d, s, c), r_a = calc(n, t, d, s, a);
        if (res == 0)
            return c;
        else if (res < 0)
            b = c;
        else
            a = c;
    }
    return (a + b) / 2;
}

int main()
{
    int n, t;
    cin >> n >> t;        // Count & Total time
    int d[1000], s[1000]; // Distance & Speed
    for (int i = 0; i < n; i++)
    {
        cin >> d[i] >> s[i];
    }
    double min_s = *min_element(s, s + n);
    cout << fixed << setprecision(7) << bio_section(n, t, d, s, -min_s, 1145141919810, 1e-7) << endl;
}