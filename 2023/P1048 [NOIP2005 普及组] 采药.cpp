#include<iostream>
using namespace std;
int value=0,time;
/*
int A(int m,int n){
	int r=1;for(int i=0;i<n;i++)r*=m--;return r;
}
int C(int m,int n){
	return A(m,n)/A(n,n);
}
*/
void swapd(int **a,int i,int j){ //交换数组中两元素位置
    int temp[2];
	for(int l=0;l<2;l++) temp[l]=a[i][l];
    for(int l=0;l<2;l++) a[i][l]=a[j][l];
    for(int l=0;l<2;l++) a[j][l]=temp[l];
}
void perm(int **a,int p,int q){//全排函数：对于数组a，下标p到下标q的元素进行全排列
	if(p==q){//终止条件：当对一个元素进行全排时打印输出
		//for(int i=0;i<q;i++)cout<<a[i][0]<<' '<<a[i][1]<<' ';cout<<endl;
		int sum=0,tm=time;
		for(int j=0;j<q&&tm>=a[j][0];j++) {sum+=a[j][1];tm-=a[j][0];}
		if(sum>value) value=sum;
    }else{//全排列核心代码
    	for(int i=p;i<q;i++){//遍历全排列范围的每个元素
			swapd(a,i,p);//使得第一个元素（下标为p）分别与遍历中的每个元素进行位置互换
         	perm(a,p+1,q);//在上一步的基础上，其他的元素进行全排列（核心代码需要理解）
         	swapd(a,i,p);//回溯过程：由于20行中数组中的元素分别与下标为p的的元素交换过位置，现在要复位。
        }
    }
}
/*
int change(int **a, int cb[][2], int &k, int &n, int bit=0, int index=0){
	//a: all items; cb: all changes; k:nums to pick; n:total number;
	int sum,tm=time; //k个数之和
	for(int i=index;i<n;i++){
		for(int g=0;g<2;g++) cb[bit][g]=a[i][g]; //cb[bit]可以是index(=bit)到n-1的所有数
		if(bit<k-1) change(a,cb,k,n,bit+1,i+1); //继续执行下一bit，但是下一执行的index要大于i
		if(bit==k-1){ //当组合齐全k个数时，进行计算
			sum=0;cout<<'g'<<endl;
			for(int j=0;j<k&&tm>cb[j][0];j++) {sum+=cb[j][1];tm-=cb[j][0];}
			if(sum>value) value=sum;
		}
	}
}
*/
int main(){
	int m;cin>>time>>m;
	int **c= new int*[m];
	for(int i=0;i<m;i++) c[i]=new int[2];
	for(int i=0;i<m;i++) cin>>c[i][0]>>c[i][1];
	perm(c,0,m);
	cout<<value;
	for(int i=0;i<m;i++) delete[] c[i];
	delete[] c;
	return 0;
}
