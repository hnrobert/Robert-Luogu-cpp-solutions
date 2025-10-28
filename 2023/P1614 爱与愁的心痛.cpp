#include<iostream>
using namespace std;
int stuff[5000];
int main(){
	int m,n;cin>>n>>m;
	for(int i=0;i<n;i++) cin>>stuff[i];
	int minhurt=3000000;
	for(int i=0;i<n-m+1;i++){
		int hurt=0;
		for(int j=i;j<m+i;j++) hurt+=stuff[j];
		if(hurt<minhurt) minhurt=hurt;
	}
	cout<<minhurt;
}

