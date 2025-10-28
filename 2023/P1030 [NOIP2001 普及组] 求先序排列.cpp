#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
void bef_ord(string mid, string aft)
{
    if (mid.size() > 0)
    {
        char ch = aft[aft.size() - 1];
        cout << ch;
        int k = mid.find(ch);
        bef_ord(mid.substr(0, k), aft.substr(0, k));
        bef_ord(mid.substr(k + 1), aft.substr(k, mid.size() - k - 1)); // 递归左右子树；
    }
}
int main()
{
    string mid_ord, aft_ord;
    cin >> mid_ord;
    cin >> aft_ord;
    bef_ord(mid_ord, aft_ord);
    cout << endl;
    system("pause");
    return 0;
}