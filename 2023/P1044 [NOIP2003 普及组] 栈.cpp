#include<iostream>
using namespace std;
int f[20][20];
int geta(int a, int n){
	if(f[a][n]){return f[a][n];}
	if(!n) return 1;
	if(a) f[a][n]+=geta(a-1,n);
	f[a][n]+=geta(a+1,n-1);
	return f[a][n];
}
int main(){
	int n; cin>>n;
	geta(0,n);
	cout<<geta(0,n);
}
