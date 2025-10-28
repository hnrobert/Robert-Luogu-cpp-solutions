#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
bool his[1000001], exi[1000001];
pair<int, int> get_extreme(int num)
{
    int max_d = 0, mind = 9, d;
    while (num)
    {
        d = num % 10;
        max_d = max(max_d, d);
        if (d)
            mind = min(mind, d);
        num /= 10;
    }
    return make_pair(max_d, mind);
}
void calc(int num)
{
    pair<int, int> extreme = get_extreme(num);
    int num_smaller = num - extreme.first, num_bigger = num - extreme.second;
    if (!exi[num_smaller])
        calc(num_smaller);
    if (!exi[num_bigger])
        calc(num_bigger);
    if (his[num_smaller] == 1 && his[num_bigger] == 1)
        his[num] = 0;
    else
        his[num] = 1;
    exi[num] = true;
}

int main()
{
    int n, d;
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        his[i] = 1;
        exi[i] = true;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        if (!exi[d])
            calc(d);
        if (his[d])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}