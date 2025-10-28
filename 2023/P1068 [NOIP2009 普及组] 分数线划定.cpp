#include <iostream>
using namespace std;
int peo[5005][2];
int swape(int p,int q){
	int t1=peo[p][0], t2=peo[p][1];
	peo[p][0]=peo[q][0];peo[p][1]=peo[q][1];
	peo[q][0]=t1;peo[q][1]=t2;
}
int main(){
	int n,m;cin>>n>>m;
	int sp=m*1.5;
	for(int i=0;i<n;i++) cin>>peo[i][0]>>peo[i][1];
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(peo[j][1]<peo[j+1][1]) swape(j,j+1);
			if(peo[j][1]==peo[j+1][1]&&peo[j][0]>peo[j+1][0]) swape(j,j+1);
		}
	}
	int sline=peo[sp-1][1],num=0;
	for(int i=0;peo[i][1]>=sline;i++) num++;
	cout<<sline<<' '<<num<<endl;
	for(int i=0;peo[i][1]>=sline;i++) cout<<peo[i][0]<<' '<<peo[i][1]<<endl;
} 
