#include<iostream>
using namespace std;
int main(){
	int n,a[3],p[3],ans=9999999;
	cin>>n>>a[0]>>p[0]>>a[1]>>p[1]>>a[2]>>p[2];
	for(int i=0;i<3;i++){
		double num=n,tmp=0;
		while(num>0){tmp+=p[i];num-=a[i];}
		ans=ans<tmp? ans:tmp;
	}
	cout<<ans;
}
