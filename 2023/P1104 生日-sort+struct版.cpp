#include<iostream>
#include<algorithm>
using namespace std;
int b[101][3];
struct node{
	string name;
	int date,num;
}a[101];
bool cmpdate(node s1,node s2){
	if (s1.date!=s2.date) return s1.date<s2.date;
	return s1.num>s2.num;
}
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].name>>b[i][0]>>b[i][1]>>b[i][2];
		a[i].date=b[i][0]*10000+b[i][1]*100+b[i][2];
		a[i].num=i;
	}
	sort(a,a+n,cmpdate);
	for(int i=0;i<n;i++) cout<<a[i].name<<endl;
}
