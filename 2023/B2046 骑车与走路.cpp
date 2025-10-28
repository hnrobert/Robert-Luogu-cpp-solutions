#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	double t1=n/1.2;
	double t2=n/3.0+50;
	if(t1<t2) cout<<"Walk";
	else if(t1>t2) cout<<"Bike";
	else cout<<"All"; 
}
