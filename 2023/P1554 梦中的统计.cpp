#include<iostream>
using namespace std;
int main(){
	int m,n;cin>>m>>n;
	int c[11]={};
	for(int i=m;i<=n;i++){
		int num=i;
		while(num){
			c[num%10]++;
			num/=10;
		}
	}
	for(int i=0;i<10;i++) cout<<c[i]<<' ';
	return 0;
}
