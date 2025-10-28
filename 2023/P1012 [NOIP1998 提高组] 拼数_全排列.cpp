#include<iostream>
using namespace std;
void swapd(string a[], int i, int j){
	string temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void perm(string a[], int p, int q, string &max){
	if(p==q){
		string now="";
		for(int k=0;k<q;k++) now+=a[k];
		if(now>=max) max=now;
	}else{
		for(int i=p;i<q;i++){//遍历全排列范围的每个元素
			swapd(a,i,p);//使得第一个元素（下标为p）分别与遍历中的每个元素进行位置互换
         	perm(a,p+1,q,max);//在上一步的基础上，其他的元素进行全排列（核心代码需要理解）
         	swapd(a,i,p);//回溯过程：由于20行中数组中的元素分别与下标为p的的元素交换过位置，现在要复位。
        }
	}
}
int main(){
	int num;cin>>num;
	const int n=num;
	string a[n],max="0";
	for(int i=0;i<n;i++) cin>>a[i];
	perm(a,0,n,max);
	cout<<max;
} 
