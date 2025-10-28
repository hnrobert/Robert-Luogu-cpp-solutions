#include<iostream>
using namespace std;
int main(){
	string t;cin>>t;
	string f=t;
	for(int i=1;i<t.length();i++){
		string a;cin>>a;f+=a; 
	}
	cout<<t.length()<<' ';
	int state=48,count=0;
	char *p=&f[0];
	while(*p){
		if(*p==state)count++;
		else{
			cout<<count<<' ';
			count=1;
		}
		state=*p;
		p++;
	}
	cout<<count;
}
