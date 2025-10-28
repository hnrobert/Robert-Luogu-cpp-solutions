#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	string a,b;cin>>a>>b;
	int c=1,d=1;
	for(int i=0;i<a.length();i++) c*=static_cast<int>(a[i])-64;
	for(int i=0;i<b.length();i++) d*=static_cast<int>(b[i])-64;
	if(c%47==d%47)cout<<"GO";
	else cout<<"STAY";
	return 0;
}
