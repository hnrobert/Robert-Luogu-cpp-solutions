#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;
struct aline
{
    int layer;
    string content;
};

vector<aline> layers;
aline analyze_line(string line)
{
    int count = 0;
    while (line[0] == ' ')
    {
        count++;
        line.erase(0, 4);
    }
    aline al;
    al.layer = count;
    al.content = line;
    return al;
}
int main()
{
    string s;

    while (getline(cin, s))
    {
        aline res = analyze_line(s);
        if (res.content == "lag")
            ; // 如汇报为lag，则减将上一层
        if (res.layer + 1 > layers.size())
            layers.push_back(res);
        else
            layers[res.layer] = res; // 如汇报为层数，则替换;//如汇报为层数，则替换
    }
    system("pause");
}