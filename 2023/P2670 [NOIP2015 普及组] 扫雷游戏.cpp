#include<iostream>
using namespace std;
void scan_mine(int **grid,int a,int b,int maxa,int maxb){
	int num=0;
	if(grid[a][b]=='*') cout<<'*';
	else{
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				if(i==0&&j==0 || a+i<0 || b+j<0 || a+i>=maxa || b+j>=maxb) continue;
				if(grid[a+i][b+j]=='*') num++;
			}
		}
		cout<<num;
	}
}
int main(){
	int n,m;cin>>n>>m;
	int **plate=new int*[n];
	for (int i = 0; i < n; i++) plate[i] = new int[m];
	for(int i=0;i<n;i++){
		string line;cin>>line;
		for(int j=0;j<m;j++) plate[i][j]=line[j];
	}
	for(int k=0;k<n;k++){
		for(int l=0;l<m;l++) {scan_mine(plate,k,l,n,m);}
		cout<<endl;
	}
	for (int i=0;i<n;i++) delete[] plate[i];
	delete[] plate;
	return 0;
}
