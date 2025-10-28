#include<iostream>
using namespace std;
void swapd(int a[], int i, int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void perm(int a[], int p, int q){
	if(p==q){
		if(2*(100*a[0]+10*a[1]+a[2])==(100*a[3]+10*a[4]+a[5]) && 3*(100*a[0]+10*a[1]+a[2])==(100*a[6]+10*a[7]+a[8])){
			cout<<a[0]<<a[1]<<a[2]<<' '<<a[3]<<a[4]<<a[5]<<' '<<a[6]<<a[7]<<a[8]<<endl; 
		}
	}else{
		for(int i=p;i<q;i++){//遍历全排列范围的每个元素
			swapd(a,i,p);//使得第一个元素（下标为p）分别与遍历中的每个元素进行位置互换
         	perm(a,p+1,q);//在上一步的基础上，其他的元素进行全排列（核心代码需要理解）
         	swapd(a,i,p);//回溯过程：由于20行中数组中的元素分别与下标为p的的元素交换过位置，现在要复位。
        }
	}
}
int main(){
	int a[9]={1,2,3,4,5,6,7,8,9};
	perm(a,0,9);
} 

