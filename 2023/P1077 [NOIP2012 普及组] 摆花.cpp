#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector <int> a;
int ans,sumf,m,n,f;
void choose(int tfnum,int fleft,int sumleft){
	if(tfnum==n){ans++;return;}
	int maxf=min(a[tfnum],fleft-(n-tfnum-1)),minf=max(1,fleft-sumleft+a[tfnum]);
	cout<<endl<<tfnum<<' '<<maxf<<' '<<minf<<endl;
	for(int i=minf;i<=maxf;i++){
		choose(tfnum+1,fleft-i,sumleft-a[tfnum]);
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){cin>>f;sumf+=f;a.push_back(f);}
	choose(0,m,sumf);
	cout<<ans%1000007;
} 
