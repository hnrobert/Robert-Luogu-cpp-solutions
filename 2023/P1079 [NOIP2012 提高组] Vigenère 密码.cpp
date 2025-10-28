#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string k,p,a;cin>>k>>p;
	char ck[10000];
	for(int i=0;i<k.length();i++) if(k[i]>='a') ck[i]=k[i]-'a'+'A'; else ck[i]=k[i];
	for(int i=0;i<p.length();i++){
		if(p[i]>='a') a+=(char)((abs(p[i]-'a'+'A'-ck[i%k.length()]+26)%26+'a'));
		else a+=(char)(abs(p[i]-ck[i%k.length()]+26)%26+'A');
	}
	cout<<a;
}
