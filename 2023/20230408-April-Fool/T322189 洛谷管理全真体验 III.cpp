#include<iostream>
using namespace std;
int main(){
	int t,id;cin>>t;
	for(int i=0;i<t;i++){
		cin>>id;
		if(id==1||id==13) cout<<"T"<<endl;
		else cout<<"F"<<endl;
	}
}
