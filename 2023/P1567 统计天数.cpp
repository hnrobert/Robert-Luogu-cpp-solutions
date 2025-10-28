#include<iostream>
using namespace std;
int main(){
	int n,d1=0,d2=0,cday=1,maxday=0;cin>>n;
	for(int i=0;i<n;i++){
		d1=d2;
		cin>>d2;
		if(d2>=d1) cday++; else cday=1;
		if(cday>maxday) maxday=cday;
	}
	cout<<maxday;
}
