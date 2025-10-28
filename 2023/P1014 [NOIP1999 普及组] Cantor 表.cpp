#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int r=1;
	while(n>r) n-=r++;
	if(!(r%2)) cout<<n<<'/'<<r-n+1;
	else cout<<r-n+1<<'/'<<n;
}
