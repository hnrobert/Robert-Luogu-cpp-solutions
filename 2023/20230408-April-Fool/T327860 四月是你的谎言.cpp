#include<iostream>
int main(){
	int n,a[10];
	std::cin>>n;
	for(int i=0;i<n;i++)std::cin>>a[i];
	switch(n){
		case 0: std::cout<<"SIYUESHINIDEHUANGYAN";break;
		default: for(int i=0;i<n;i++)std::cout<<a[i];break;
	}
}
