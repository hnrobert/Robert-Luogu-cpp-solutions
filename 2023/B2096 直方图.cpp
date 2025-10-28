#include<iostream>
using namespace std;
int a[100001];
int main(){
	int n,d,maxd=0;cin>>n;
	for(int i=0;i<n;i++){
		cin>>d;a[d]++;
		if(d>maxd)maxd=d;
	}
	for(int i=0;i<=maxd;i++){
		cout<<a[i]<<endl;
	}
} 
