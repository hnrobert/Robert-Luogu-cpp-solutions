#include<iostream>
using namespace std;
int value=0;
void swapd(int **a,int i,int j){
    int temp[2];
	for(int l=0;l<2;l++) temp[l]=a[i][l];
    for(int l=0;l<2;l++) a[i][l]=a[j][l];
    for(int l=0;l<2;l++) a[j][l]=temp[l];
}
void perm(int **a,int p,int q,int t){
	if(p==q){
		int sum=0,tm=t;
		for(int j=0;j<q&&tm>=a[j][0];j++) {sum+=a[j][1];tm-=a[j][0];}
		if(sum>value) value=sum;
    }else{
    	for(int r=p;r<q;r++){
			swapd(a,r,p);
         	perm(a,p+1,q,t);
         	swapd(a,r,p);
        }
    }
}
int main(){
	int m,t;cin>>t>>m;
	int **c= new int*[m];
	for(int i=0;i<m;i++) c[i]=new int[2];
	for(int i=0;i<m;i++) cin>>c[i][0]>>c[i][1];
	perm(c,0,m,t);
	cout<<value;
	for(int i=0;i<m;i++) delete[] c[i];
	delete[] c;
	return 0;
}
