#include<iostream>
#include <algorithm>
using namespace std;
void getepoint(const int pnum,int dat[][3],int &x,int &y,int n,int &totpoint,int npoint,int ndat[][3]){
	int data[pnum][3];
	copy(&dat[0][0],&dat[0][0]+pnum*3,&data[0][0]);
	for(int d=0;d<pnum;d++) if(data[d][0]==x&&data[d][1]==y){
				npoint+=data[d][2];
				data[d][0]=data[d][1]=data[d][2]=0;
				break;
	}
	int p=0;
	for(p;p<pnum;p++) if(x<=data[p][0]&&y<=data[p][1]) break;
	if(p-pnum) for(int i=0;i<pnum;i++) if(x<=data[i][0]&&y<=data[i][1]) getepoint(pnum,data,data[i][0],data[i][1],n,totpoint,npoint,ndat); else;
	else if(npoint>totpoint){totpoint=npoint;copy(&data[0][0],&data[0][0]+pnum*3,&ndat[0][0]);}
}
int main(){
	int w,px,py,pvalue,data[10001][3],pn=0,n=0,totpoint=0;cin>>n;
	do{
		cin>>px>>py>>pvalue;
		if(px+py+pvalue){data[pn][0]=px;data[pn][1]=py;data[pn][2]=pvalue;pn++;}
	}while(px&&py&&pvalue);
	const int pnum=pn;int ndat[pnum][3];
	for(int time=0;time<2;time++){
		int x=1,y=1;
		int npoint=totpoint;
		if(!time) getepoint(pnum,data,x,y,n,totpoint,npoint,ndat);
		else getepoint(pnum,ndat,x,y,n,totpoint,npoint,ndat);
		}
	cout<<totpoint;
}
