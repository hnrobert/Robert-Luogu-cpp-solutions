#include <iostream>

using namespace std;

int calc(int a, int b, int c, int k)
{
    return a * a + b * b + c * c - k * (a * b + b * c + c * a) - 1;
}

int meet(int a[3]){
    if (!(a[0]<a[1]&&a[1]<a[2]))
        return 0;
}

int* approach(int a[3], int k, int stage)
{
    int ori_a[3];
    copy(a, a + 3, ori_a);
    if (stage<2){
        a[stage]++;
        stage++;
        
    }
    while (calc(a[0], a[1], a[2], k) < 0 && meet(a))
    {
        a[2]++;
    }

    if (!calc(a[0], a[1], a[2], k))
    {
        return a;
    } else {
        return 0;
    }
}

int main()
{
    int k, n;
    cin >> k >> n;
    const int m = n;
    int a[3] = {0};
    int *r[1000] = {};
    while (n > 0)
    {
        r[m - n] = {approach(a, k, 0)};
        n--;
    }
}