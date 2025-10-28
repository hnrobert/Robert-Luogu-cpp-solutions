#include<iostream>
#include<cstdio>
using namespace std;
int n,a[101]={},s[101]={};
void adv_time(int x){
	int g=0;
	for(int i=100;i>=0;i--){
		a[i]=a[i]*x+g;
		g=a[i]/10;
		a[i]=a[i]%10;
	}
}
void adv_plus(){
	int g=0;
	for(int i=100;i>=0;i--){
		s[i]=s[i]+a[i]+g;
		g=s[i]/10;
		s[i]=s[i]%10;
	}
}
int main(){
	scanf("%d",&n);
	s[100]=a[100]=1;
	for(int i=2;i<=n;i++){
		adv_time(i);
		adv_plus();
	}
	int w;
	for(int i=0;i<=100;i++){
		if(s[i]){
			w=i;
			break;
		}
	}
	for(int i=w;i<=100;i++)
	   printf("%d",s[i]);
	return 0;
}
