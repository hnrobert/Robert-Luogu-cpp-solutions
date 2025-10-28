#include <iostream>
using namespace std;
int main(){
	string mark;
	cin>>mark;
	int a[11]={mark[0]-'0',mark[2]-'0',mark[3]-'0',mark[4]-'0',mark[6]-'0',mark[7]-'0',mark[8]-'0',mark[9]-'0',mark[10]-'0'};
	int id=0;
	for(int i=0;i<9;i++) id+=a[i]*(i+1);
	char tid;
	if(id%11!=10) tid=id%11+'0';
	else tid='X';
	if(tid==mark[12]) cout<<"Right";
	else{
		for(int i=0;i<12;i++) cout<<mark[i];
		cout<<tid;
	}

	
}
