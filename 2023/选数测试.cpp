#include<iostream>
#include<cmath>
using namespace std;

void change(int a[], int cb[], int &k, int &n, int bit=0, int index=0) {
/*
 *变量说明：
  数组a[]：给出的所有数
  数组cb[]：cb表示“组合”，其中包含k个数，从数组a[]内选取3个数（下标从小到大排序）
  bit：位，k个数的k个位置，也是数组cb[]的下标【数组内是k个数的组合】
  index：指标，由于数组cb[]内的数对应于a[]的下标是从小到大排列的，index是cb[]中第x个数的范围为index~n-1
  ◎建议先看下方的图
  
  k、n：即k、n
*/
	int sum; //k个数之和
	for(int i=index;i<n;i++) {
		cb[bit]=a[i]; //cb[bit]可以是index(=bit)到n-1的所有数
		if(bit<k-1)
			change(a,cb,k,n,bit+1,i+1); //继续执行下一bit，但是下一执行的index要大于i
		if(bit==k-1) { //当组合齐全k个数时，进行计算
			sum=0;
			for(int j=0;j<k;j++)
				cout<<cb[j]<<" "; //输出结果 
			cout<<endl;
		}
	}
	
}
int main()
{
	int n,k;cin>>n>>k;
	int a[20+5],cb[20+5]={};
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<endl;
	change(a,cb,k,n);
	return 0;
} 
