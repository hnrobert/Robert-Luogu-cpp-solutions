#include<iostream>
using namespace std;
long long data[10001][4]={};
int main(){
	int n,a,b,g,k,x,y,carpet=-1;cin>>n;
	for(int i=0;i<n;i++) for(int j=0;j<4;j++) cin>>data[i][j];
	cin>>x>>y;
	for(int i=0;i<n;i++){
		int a=data[i][0],b=data[i][1],g=data[i][2],k=data[i][3];
		if(a<=x&&x<=a+g&&b<=y&&y<=b+k) carpet=i+1;
	}
	cout<<carpet;
	return 0;
}
