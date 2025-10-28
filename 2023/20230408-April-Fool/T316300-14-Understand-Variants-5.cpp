#include<iostream>
using namespace std;
void swapd(int a[], int i, int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void perm(int a[],int p,int q){
	if(p==q){
		for(int m=0;m<8;m++) cout<<a[m]<<' ';cout<<endl;/* 
		//for(int m=0;m<8;m++) printf("%d ",a[m]);cout<<endl;
		int error=0;
		for(int x=0;x<7;x++){
			int xl=x+1,c=1;
			for(xl;xl<8;xl++) {if(a[xl]==a[x]+c||a[xl]==a[x]-c){error++;break;}; c++;}
		}
		if(!error){
			for(int n=0;n<8;n++) cout<<n+1<<'-'<<a[n]+1<<endl; 
			cout<<endl;
			//getchar();
		}*/
    }else{
    	for(int i=p;i<q;i++){
			swapd(a,i,p);
         	perm(a,p+1,q);
         	swapd(a,i,p);
        }
    }
}
int main(){
	int a[8]={0,1,2,3,4,5,6,7};
	perm(a,1,4);
	return 0;
}
