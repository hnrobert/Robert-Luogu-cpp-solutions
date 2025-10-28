#include<iostream>
using namespace std;
int a[101];
int main(){
	int n;cin>>n;cout<<n<<endl;
	int p=n-1,t=0,statu=0;
	while(statu-n){
		statu=0;
		for(int j=0;j<n-1;j++){
			a[p]=!a[p];
			p=(n+p-1)%n;
		}
		for(int k=0;k<n;k++){
			cout<<a[k];
			statu+=a[k];
		}
		cout<<endl;
	}
}
