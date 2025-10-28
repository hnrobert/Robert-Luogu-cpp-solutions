#include<iostream>
#include<cmath>
#include <cstring>
using namespace std;
bool is_prime(int n) 
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}
int main()
{
	int n;cin>>n;
	for(int num=4;num<=n;num+=2) 
		for(int i=2;i<=n/2+1;i++) 
			if(is_prime(i)&&is_prime(num-i))
			{
				cout<<num<<"="<<i<<"+"<<num-i<<endl;
				break;
			}
	return 0;
}

