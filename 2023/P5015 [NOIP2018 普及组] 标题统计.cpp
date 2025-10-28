#include<iostream>
using namespace std;
int main(){
	string title;getline(cin,title);
	int num=0;
	char *p=&title[0];
	for(int i=0;i<title.length();i++){
		if(48<=*p&&*p<58||65<=*p&&*p<=90||97<=*p&&*p<=122)num++;
		p++;
	}
	cout<<num;
}
