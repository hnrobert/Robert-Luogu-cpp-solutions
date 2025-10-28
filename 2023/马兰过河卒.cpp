#include<iostream>
#include<cmath>
using namespace std;
int Avail(int a[],int sp[9][2]){
	int point=0;
		for(point;point<9;point++){
			int vstep=sp[point][0],astep=vstep+sp[point][1],nstep=0;
			for(int l=0;l<astep;l++) nstep+=a[l];
			if(nstep==vstep) break;
		}
		if(point==9) return 1;
		else return 0;
}
void generateComb(int a[],int p,int q,int sp[9][2],long long &count,int index=0){
	if(!q&&Avail(a,sp)){count++;return;}
    if(index>=p) return;
	if(index>=sp[8][0]+sp[8][1]+3 && !Avail(a,sp)) return;
    a[index]=1;generateComb(a,p,q-1,sp,count,index+1);
    a[index]=0;generateComb(a,p,q,sp,count,index+1);
}
int main(){
	int a,b,x,y;long long count=0;
	cin>>a>>b>>x>>y;a+=2;b+=2;x+=2;y+=2;
	if(a>b){swap(a,b);swap(x,y);}
	int sp[9][2],p=0;sp[8][0]=x;sp[8][1]=y;
	for(int i=-2;i<=2;i++) for(int j=-2;j<=2;j++) if(abs(i)+abs(j)==3){sp[p][0]=x+i;sp[p][1]=y+j;p++;}
	int m[21]={};//1：向下走，0：向右走 
	generateComb(m,a+b,a,sp,count);
	cout<<count;
	return 0;
}
