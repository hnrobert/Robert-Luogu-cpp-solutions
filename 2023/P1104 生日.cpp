#include<iostream>
using namespace std;
string a[101];int b[101][3],c[101];
void swapab(int p,int q){
	string np=a[p];
	int datep=c[p];
	a[p]=a[q];c[p]=c[q];
	a[q]=np;c[q]=datep;
}
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i][0]>>b[i][1]>>b[i][2];
		c[i]=b[i][0]*10000+b[i][1]*100+b[i][2];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(c[j]>=c[j+1]) swapab(j,j+1);
			if(c[j]==c[j+1]) swapab(j,j+1);
			/*
			else if(b[j][0]==b[j+1][0]&&b[j][1]>=b[j+1][1]) swapab(j,j+1);
			else if(b[j][0]==b[j+1][0]&&b[j][1]==b[j+1][1]&&b[j][2]>=b[j+1][2]) swapab(j,j+1);
			*/
		}
	}
	for(int i=0;i<n;i++) cout<<a[i]<<endl;
}
