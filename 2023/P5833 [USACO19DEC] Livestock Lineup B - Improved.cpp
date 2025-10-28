#include <iostream>
#include <cstring>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;
vector<string> conda, condb;
vector<string> cows = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
int n;
int find(string c)
{
    for (int i = 0; i < 8; i++)
    {
        if (cows[i] == c)
        {
            return i;
        }
    }
    return -1;
}
int meet()
{
    for (int i = 0; i < n; i++)
    {
        if (abs(find(conda[i]) - find(condb[i])) > 1)
            return 0;
    }
    return 1;
}

int main()
{
    cin >> n;
    string sa, sb, u;
    for (int i = 0; i < n; i++)
    {
        cin >> sa;
        for (int j = 0; j < 4; j++)
        {
            cin >> u;
        }
        cin >> sb;
        conda.push_back(sa);
        condb.push_back(sb);
    }
    do
    {
        if (meet())
        {
            for (int m = 0; m < 8; m++)
            {
                cout << cows[m] << endl;
            }
            break;
        }
    } while (next_permutation(cows.begin(), cows.end()));

    system("pause");
    return 0;
}