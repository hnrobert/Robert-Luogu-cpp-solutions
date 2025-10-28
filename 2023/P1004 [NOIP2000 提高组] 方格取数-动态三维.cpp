#include<iostream>
#include <algorithm>
using namespace std;
void getepoint(int pnum,int dat[][3],int datanum,int &totpoint,int npoint,int ***ndat,int &kind,int evepoint[],int time){
	int data[pnum][3];
	copy(&dat[0][0],&dat[0][0]+pnum*3,&data[0][0]);
	npoint+=data[datanum][2];
	data[datanum][0]=data[datanum][1]=data[datanum][2]=0;
	int p=0;
	for(int i=0;i<pnum;i++) if(data[datanum][0]<=data[i][0]&&data[datanum][1]<=data[i][1]) getepoint(pnum,data,i,totpoint,npoint,ndat,kind,evepoint,time); else p++;
	if(p==pnum){
		if(!time){
			evepoint[kind]=npoint;
			copy(&data[0][0],&data[0][0]+pnum*3,&ndat[kind][0][0]);
			kind++;
		}
		else if(npoint>totpoint) totpoint=npoint;
	}
}
int main(){
	int w,px,py,pvalue,data[10001][3],pn=0,n=0,totpoint=0;cin>>n;
	do{
		cin>>px>>py>>pvalue;
		if(px+py+pvalue){data[pn][0]=px;data[pn][1]=py;data[pn][2]=pvalue;pn++;}
	}while(px&&py&&pvalue);
	const int pnum=pn;int evepoint[1000],kind=0;
	int ***ndat=new int**[1000]; for(int i=0;i<1000;i++){ndat[i]=new int*[pnum]} for(int j=0;j<pnum;j++) ndat[i][j]=new int[3];
	for(int time=0;time<2;time++){
		int npoint=totpoint;
		if(!time) getepoint(pnum,data,pnum+1,totpoint,npoint,ndat,kind,evepoint,time);
		else for(int t=0;t<kind-1;t++){
			npoint=evepoint[t];
			int ndata[pnum][3];
			
			getepoint(pnum,ndata,pnum+1,totpoint,npoint,ndat,kind,evepoint,time);
		}
	}
	cout<<totpoint;
}

