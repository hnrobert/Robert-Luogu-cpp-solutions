#include<iostream>
using namespace std;
int maxv=0;
void swapd(int a[][2],int x,int y){
	int temp[2]={a[x][0],a[x][1]};
	a[x][0]=a[y][0];a[x][1]=a[y][1];
	a[y][0]=temp[0];a[y][1]=temp[1];
}
void perm(int s[][2],int p,int q,int n){
	if(p==q){
		int v=0, c=0, i=0;
		while(c+s[i][0]<=n){
			v+=s[i][0]*s[i][1];
			c+=s[i][0];
			i++;
		}
		if(v>maxv) maxv=v;
	}else{
		for(int i=p;i<q;i++){
			swapd(s,i,p);
			perm(s,p+1,q,n);
			swapd(s,i,p);
		}
	}
}
int main(){
	int N,m;cin>>N>>m;
	const int M=m;
	int s[M][2];
	for(int i=0;i<M;i++) cin>>s[i][0]>>s[i][1];
	perm(s,0,m,N);
	cout<<maxv;
} 
