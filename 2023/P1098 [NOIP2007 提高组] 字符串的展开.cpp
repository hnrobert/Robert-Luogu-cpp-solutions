#include<iostream>
using namespace std;
int main(){
	int p1,p2,p3;cin>>p1>>p2>>p3;
	string s;cin>>s;
	for(int i=0;i<s.length();i++){
		int stc=s[i],edc=s[i+2];
		if(s[i+1]=='-'&&stc<edc&&(stc>='0'&&stc<='9'&&edc>='0'&&edc<='9'||stc>='a'&&stc<='z'&&edc>='a'&&edc<='z')){
			cout<<(char)stc;
			int p=1;
			if(p1==2&&stc>='a'&&stc<='z'&&edc>='a'&&edc<='z') {stc-=('a'-'A');edc-=('a'-'A');}
			if(p3==2) {swap(stc,edc);p=-1;}
			for(int j=stc+p;j-edc;j+=p) for(int k=0;k<p2;k++){
				if(p1==3) cout<<'*';
				else cout<<(char)j;
			}
			i+=1;
		}
		else cout<<s[i];
		
	}
} 
