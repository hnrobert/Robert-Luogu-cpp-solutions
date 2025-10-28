#include<iostream>
#include<cmath>
using namespace std;
double H,S,V,L,K;
int n,ans;
int main(){
	cin>>H>>S>>V>>L>>K>>n;
	double t1=sqrt((H-K)/5),t2=sqrt(H/5);
	for(double i=0.0000;i<n;i+=1.0000){
		if(S-V*t2-0.001<i&&S+L-V*t1+0.001>i){
			ans++;
		}
	}
	cout<<ans;
} 
