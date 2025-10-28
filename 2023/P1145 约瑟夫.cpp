#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int k;cin>>k;
	int ans=k,i;
	while(i!=k){
		i=0;ans++;
		int c=0,m[100];memset(m,1,sizeof(m));
		for(i;i<k;i++){
			int j=1;
			while(j<ans){
				if(m[c]) j++;
				c++;c%=2*k;
			}
			if(c<k) break;
			m[c++]=0;
		}
	}
	cout<<ans;
}
