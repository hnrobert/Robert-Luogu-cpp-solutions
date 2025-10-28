#include<iostream>
using namespace std;
int main(){
	string inf,ainf;int noe;
	do{
		noe=1;
		cin>>inf;
		for(int i=0;i<inf.length();i++){
			if(inf[i]=='E'||inf[i]=='e'){noe=0;break;}
			ainf+=inf[i];
		}
	}while(noe);
	
	int a=0,b=0;
	for(int i=0;i<ainf.length();i++){
		if(ainf[i]=='W')a++;
		else if(ainf[i]=='L')b++;
		if(a>=11&&a-b>1||b>=11&&b-a>1){
		cout<<a<<':'<<b<<endl;
		a=0;b=0;
		}
	}
	cout<<a<<':'<<b<<endl;
	cout<<endl;a=0;b=0;
	for(int i=0;i<ainf.length();i++){
		if(ainf[i]=='W')a++;
		else if(ainf[i]=='L')b++;
		if(a>=21&&a-b>1||b>=21&&b-a>1){
		cout<<a<<':'<<b<<endl;
		a=0;b=0;
		}
	}
	cout<<a<<':'<<b<<endl;
} 
