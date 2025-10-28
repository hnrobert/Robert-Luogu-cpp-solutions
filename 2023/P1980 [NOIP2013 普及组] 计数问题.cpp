#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	int maxn;cin>>maxn;
	char f;cin>>f;
	stringstream eve;
	for(int i=1;i<=maxn;i++) eve<<i;
	string result=eve.str(); int num=0;
	for(int i=0;i<result.size();i++) if(result[i]==(char)f) num++;
	cout<<num;
	return 0;
}
