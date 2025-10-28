#include<iostream>
using namespace std;
int main(){
	int a[10][4]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'},{' '}};
	string c;getline(cin,c);
	int count=0;
	for(int i=0;i<c.length();i++)
		for(int j=0;j<10;j++)
			for(int k=0;k<(sizeof(a[j])/sizeof(a[j][0]));k++)
				if (c[i]==a[j][k])count+=k+1;
	cout<<count;
} 
