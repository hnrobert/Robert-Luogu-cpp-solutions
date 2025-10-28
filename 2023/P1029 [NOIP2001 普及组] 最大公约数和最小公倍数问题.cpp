#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	long long x,y,num=0;cin>>x>>y;
	if(y==x) num--; y*=x;
	for(long long i=1;i<=sqrt(y);i++) if(x==__gcd(i,y/i)&&y%i==0) num+=2;
	cout<<num;
}

