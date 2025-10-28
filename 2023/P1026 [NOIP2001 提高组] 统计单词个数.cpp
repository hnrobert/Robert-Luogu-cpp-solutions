#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int p,k,s,used[201],ans=0;cin>>p>>k;
	string a="",b;
	for(int i=0;i<p;i++){cin>>b;a+=b;}
	cout<<a;
	cin>>s;string word[7];
	for(int i=0;i<s;i++) cin>>word[i];
	for(int i=0;i<a.length();i++){
		for(int j=0;j<s;j++){
			int h=0;
			for(h;h<word[j].length();h++) if(a[i+h]!=word[j][h]) break;
			if(h==word[j].length()){
				for(int m=0;m<word[j].length();m++) used[i+m]++;
				ans++;
				break;
			}
		}
	}
	cout<<ans;
} 
