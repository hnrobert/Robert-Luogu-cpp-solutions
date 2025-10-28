#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

string setToString(const set<char> &s)
{
    std::string result;
    for (const char &c : s)
    {
        result += c;
    }
    return result;
}

set<char> *lengthened(set<char> v[128])
{
    int apd = 0;
    for (int i = 0; i < 128; i++)
    {
        int l = v[i].size();
        string svi=setToString(v[i]);
        for (int j = 0; j < l; j++)
        {
            char c = svi[j];
            for (char c2 : v[c])
            {
                v[i].insert(c2);
            }
        }
    }
    return v;
}

bool equ(set<char> a[128], set<char> b[128])
{
    for (int i = 0; i < 128; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    set<char> v[128];
    string s[50], ans[50];
    char key, val;

    for (int i = 0; i < m; i++)
    {
        cin >> key >> val;
        v[key].insert(val);
    }
    set<char> prev[128];
    do
    {
        copy (&v[0], &v[128], &prev[0]);
        set<char>* nv = lengthened(v);
        copy (&nv[0], &nv[128], &v[0]);
    } while (equ(v, prev));

    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> ans[i];
    }
    for (int i = 0; i < n; i++)
    {
        int l = s[i].length();
        if (l - ans[i].length())
        {
            cout << "no" << endl;
            continue;
        }
        int j = 0;
        for (j; j < l; j++)
        {
            char sc = s[i][j], ac = ans[i][j];
            if (!(sc == ac || count(v[int(sc)].begin(), v[int(sc)].end(), ac) > 0))
            {
                cout << "no" << endl;
                break;
            }
        }
        if (j == l)
            cout << "yes" << endl;
    }
    return 0;
}