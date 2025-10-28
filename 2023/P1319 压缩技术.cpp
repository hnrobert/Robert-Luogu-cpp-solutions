#include<iostream>
using namespace std;
int main(){
	int n,r[10000]={},sum=0,t;cin>>n;
	int j=0,m=0;
	do{
		cin>>t;
		if(j%2)for(int i=sum;i<sum+t;i++)r[i]=1;
		else for(int i=sum;i<sum+t;i++)r[i]=0;
		sum+=t;j++;
	}while(sum<n*n);
	for(int k=0;k<n;k++){
		for(int l=0;l<n;l++) cout<<r[m++];
		cout<<endl; 
	}
	
}
