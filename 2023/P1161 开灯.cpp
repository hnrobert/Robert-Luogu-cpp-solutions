#include<iostream>
using namespace std;
double a,t;
int main(){
	int n,lt[2000001]={};cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>t;
		for(double j=1;j<=t;j++){
			lt[int(j*a)]=!lt[int(j*a)];
		}
	}
	for(int p=0;p<2000001;p++) if(lt[p]) {cout<<p;break;}
	return 0;
} 
