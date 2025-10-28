#include<iostream>
using namespace std;
int main(){
	int day,date=1,coin_today=1,money=0;cin>>day;
	while(date<=day){
		int d=date;
		for(date;date<d+coin_today&&date<=day;date++){
			money+=coin_today;
		}
		coin_today++;
	}
	cout<<money;
}
