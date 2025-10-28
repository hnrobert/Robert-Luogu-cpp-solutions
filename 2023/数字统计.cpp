#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	int minn,maxn;cin>>minn>>maxn;
	stringstream eve;
	for(int i=minn;i<=maxn;i++) eve<<i;
	string result=eve.str(); int num=0;
	for(int i=0;i<result.size();i++) if(result[i]=='2') num++;
	cout<<num;
	return 0;
}
