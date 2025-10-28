#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
stack<int> st;
int main(){
	long long k,n,ans=0;cin>>k>>n;
	while(n){
		st.push(n&1);
		n>>=1;
	}
	while(!st.empty()){
		ans+=st.top() * pow(k,st.size()-1);
		st.pop();
	}
	cout<<ans<<endl;
}
