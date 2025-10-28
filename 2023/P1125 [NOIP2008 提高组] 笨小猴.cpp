#include<iostream>
using namespace std;
int is_prime(int num){
	if(num<2) return 0;
	for(int i=2;i*i<=num;i++) if(num%i==0) return 0;
	return 1;
}
int main(){
	string word;cin>>word;
	int t[200]={},minl=200,maxl=0;
	for(int i=0;i<word.length();i++) t[word[i]]++;
	for(int i=0;i<200;i++){
		if(t[i]&&t[i]>maxl) maxl=t[i];
		if(t[i]&&t[i]<minl) minl=t[i];
	}
	int value=maxl-minl;
	if(is_prime(value)) cout<<"Lucky Word"<<endl<<value;
	else cout<<"No Answer"<<endl<<'0';
} 
