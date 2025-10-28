#include<iostream>
#include<bitset>
#include<string>
#include<cmath>
using namespace std;
int main(){
	int n,avg=0,step=0;cin>>n;
	int *p=new int[n];
	for(int i=0;i<n;i++){cin>>p[i];avg+=p[i];}
	avg/=n;
	for(int j=0;j<n;j++) p[j]-=avg;
	for(int k=0;k<n;k++) if(p[k]){p[k+1]+=p[k];step++;}
	cout<<step;
	delete[] p;
}
