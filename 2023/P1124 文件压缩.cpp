#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
vector <char> Sq,Sp;
stack <char> Sans; 
int n;
void cond(int index,char findc){
	if(index==n) return;
	for(int i=n-1;i>=0;i--){
		if(Sp[i]==findc){
			Sans.push(Sq[i]);
			Sp[i]='#';
			cond(index+1,Sq[i]);
			return;
		}
	}
}
int main(){
	cin>>n;
	char c;
	for(int i=0;i<n;i++){cin>>c;Sq.push_back(c);}
	Sp=Sq; sort(Sp.begin(),Sp.end());
	int p,i=0;cin>>p;
	for(i;i<n;i++) if(Sq[p-1]==Sp[i]){Sans.push(Sq[i]);break;}
	cond(1,Sq[i]);
	while(!Sans.empty()){cout<<Sans.top();Sans.pop();}
} 
