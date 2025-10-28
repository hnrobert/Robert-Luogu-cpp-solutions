#include<iostream>
using namespace std;
int main(){
	int n=0; 
	for(int i=0;i<4;i++) for(int j=0;j<4;j++){
		for(int k=0;k<4;k++) for(int l=0;l<4;l++){
			if(i!=k&&k!=l) n++;
		}
	}
	cout<<n;
} 
