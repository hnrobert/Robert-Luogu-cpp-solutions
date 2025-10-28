#include<iostream>
using namespace std;
int main(){
	int l,n;cin>>l>>n;
	int min=0,max=0;
	for(int i=0;i<n;i++){
		int p;cin>>p;p--;
		int a=l-p,b=p+1;
		if(a<b) swap(a,b);
		if(a>max) max=a;
		if(b>min) min=b;
	}
	cout<<min<<' '<<max;
}
