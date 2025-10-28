#include<iostream>
using namespace std;
int spline(int a,long long &cnt){
	if(a>=1) cnt++;
	for(int b=(int)a/2;b>0;b--) spline(b,cnt);
}
int main(){
	int n;cin>>n;
	long long cnt=0;
	spline(n,cnt);
	cout<<cnt;
}
