#include<iostream>
#include<cstdio>
using namespace std;
float s[10][2]={0};
float c,d,p,maxprice=9999999;
int n,index=0,sr[1000][10]={0};

void change(int sa[],int cb[],int bit,int ind){
	for(int i=ind;i<n;i++){
		cb[bit]=sa[i];
		if(bit==n) return;
		for(int h=0;h<bit+1;h++) sr[index][h]=cb[h];
		sr[index][bit+1]=n+1;
		for(int h=0;h<=bit+1;h++) cout<<sr[index][h]<<' ';cout<<endl<<endl;
		index++;
		change(sa,cb,bit+1,i+1);
	}
}
double walking(int st[],int m,float price){  //st: 本次加油顺序 
	int ida=st[m];
	if(m==n) return price+(s[m][0]-s[ida][0])/d*s[ida][1];  //m:本次加油油站  price:总花销 
	int idb=st[m+1];
	if(c*d>s[idb][0]-s[ida][0]){  //容积*每升距离>本种方案下一站距离-本站距离 
		return walking(st,m+1,price+(s[idb][0]-s[ida][0])/d*s[ida][1]);
	}else return 0;
}
void addoil(){
	for(int i=0;i<index;i++) {for(int j=0;j<n+1;j++) cout<<sr[i][j]<<' ';cout<<endl;}
	cout<<endl;
	for(int i=0;i<index;i++){
		int sn[10]={},md=0;
		for(int j=0;j<n+1;j++) if(sr[i][j]) sn[j]=sr[i][j]-1; else break;  //sn: 本次加油顺序 
		//c:油箱容积  d:每升油能行驶距离
		// p:始发站油价  n:油站数目
		double price=0;  // s[][0]:油站距离   s[][1]:该油站油价
		if(c*d>s[sn[0]][0]) price=walking(sn,0,s[sn[0]][0]/d*p);
		if(price&&price<maxprice) maxprice=price;
	}
}
int main(){
	cin>>s[n][0]>>c>>d>>p>>n;
	for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1];
	int sd[9]={1,2,3,4,5,6,7,8,9};
	int cb[10]={};
	change(sd,cb,0,0);
	sr[index++][0]=n+1;
	addoil();
	if(maxprice<9999999) printf("%.2f",maxprice);
	else cout<<"No Solution";
}
