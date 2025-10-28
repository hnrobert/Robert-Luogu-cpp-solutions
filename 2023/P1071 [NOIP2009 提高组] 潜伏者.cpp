#include<iostream>
using namespace std;
int x[30]={},y[30]={};
int checksame(string m,string n){
	int num=m.length(),sumc=0;
	if(n.length()!=num) return 1;
	for(int i=0;i<num;i++){
		if(x[m[i]-'A']!=n[i]&&x[m[i]-'A']) return 1;
		else x[m[i]-'A']=n[i];
	}
	for(int i=0;i<num;i++) sumc+=x[i];
	if(sumc<2015) return 1;
	for(int i=0;i<26;i++){
		if(y[x[i]-'A']) return 1;
		y[x[i]-'A']=1;
	}
	return 0;
}
int main(){
	string a,b,c,ans;cin>>a>>b>>c;
	if(checksame(a,b)){
		cout<<"Failed"<<endl;
		return 0;
	}
	for(int i=0;i<c.length();i++){
		if(!x[c[i]-'A']){cout<<"Failed"<<endl;return 0;}
		else ans+=(char)(x[c[i]-'A']);
	}
	cout<<ans<<endl;
} 
