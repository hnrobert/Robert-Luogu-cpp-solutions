#include<iostream>
#include<bitset>
#include<string>
using namespace std;
int main(){
	long long num;cin>>num;
	string dat=bitset<32>(num).to_string();
	string resbin=dat.substr(16,16)+dat.substr(0,16);
	long long result=0,t=1;
	for(int i=31;i>=0;i--){
		if(resbin[i]=='1') result+=t;
		t*=2;
	}
	cout<<result<<endl;
	return 0;
} 
