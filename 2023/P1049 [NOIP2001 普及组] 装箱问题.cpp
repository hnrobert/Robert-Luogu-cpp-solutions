#include<iostream>
using namespace std;
int leftv=20001;
int drop(int vl,int b[],int tot,int num){
	if(tot>vl){
		for(int i=0;i<num;i++){
			if(b[i]){
				int temp=b[i];
				b[i]=0;
				drop(vl,b,tot-temp,num);
				b[i]=temp;
			}
		}
	}
	else if(vl-tot<leftv) leftv=vl-tot;
}
int main(){
	int v,n,tot;cin>>v>>n;
	int b[30];
	for(int i=0;i<n;i++){
		cin>>b[i];
		tot+=b[i];
	}
	drop(v,b,tot,n);
	cout<<leftv;
} 
