#include<iostream>
using namespace std;
int main(){
	int n,h,p=0,state=1,count=0;cin>>n;
	for(int i=0;i<n;i++){
	cin>>h;
	if(h<p){
		state=0;
	}
	if(!state&&h>p){
		state=1;
		count++;
	}
	p=h;
	}
	cout<<count;
}
