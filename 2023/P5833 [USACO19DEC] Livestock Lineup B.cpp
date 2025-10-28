#include <iostream>
#include <cstring>
#include <vector>
#include <cstdlib>
using namespace std;
vector<string> conda, condb;
string cows[8] = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
int n, don;
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
        if (abs(find(conda[i]) - find(condb[i])) != 1)
            return 0;
    }
    return 1;
}
void swap_data(int i, int j)
{
    string temp = cows[i];
    cows[i] = cows[j];
    cows[j] = temp;
}
void perm(int i, int j)
{
    if (i == j)
    {
        if (meet() && !don)
        {
            for (int m = 0; m < 8; m++)
            {
                cout << cows[m] << endl;
            }
            don = 1;
        }
    }
    else
    {
        for (int k = i; k < j; k++)
        {
            swap_data(i, k);
            perm(i + 1, j);
            swap_data(i, k);
        }
    }
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
    perm(0, 8);
    system("pause");
    return 0;
}