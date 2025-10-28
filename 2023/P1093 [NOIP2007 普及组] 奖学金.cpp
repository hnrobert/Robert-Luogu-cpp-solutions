#include<iostream>
#include<algorithm>
using namespace std;
struct stu{
	int num;
	int s1,s2,s3;
}a[301];
bool cmp(stu n1,stu n2){
	if(n1.s1+n1.s2+n1.s3 != n2.s1+n2.s2+n2.s3) return n1.s1+n1.s2+n1.s3 > n2.s1+n2.s2+n2.s3;
	if(n1.s1 != n2.s1) return n1.s1 > n2.s1;
	return n1.num < n2.num;
}
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		a[i].num=i+1;
		cin>>a[i].s1>>a[i].s2>>a[i].s3;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<5;i++) cout<<a[i].num<<' '<<a[i].s1+a[i].s2+a[i].s3<<endl;
} 
