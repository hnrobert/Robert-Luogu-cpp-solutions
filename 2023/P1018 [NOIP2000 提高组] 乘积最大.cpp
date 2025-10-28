#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
char num[50]={}; int n,k;
string maxans="0";
string tostr(unsigned long long num){
	if(num==0) return "0";
	string z="";
	while(num){z=(char)(num%10+'0')+z; num/=10;}
	return z;
}
string biggerstr(string s1,string s2){
	if(s1.length()>s2.length()) return s1;
	else if(s1.length()<s2.length()) return s2;
	else if(s1>s2) return s1;
	else return s2;
}
string adv10pow(int d){
	string z="1";
	for(int i=0;i<d;i++) z+="0";
	return z; 
}
string advplus(string x,string y){           //a,b,c都为数组，分别存储被加数、加数、结果
	if(x=="0"&&y=="0") return "0";
    const int lenx=x.length(),leny=y.length();
    const int lenc=lenx>leny? lenx+1:leny+1;
    int a[lenc],b[lenc]; 
	memset(a,0,sizeof(a)); memset(b,0,sizeof(b));
	for(int j=0;j<lenx;j++) a[lenx-j-1]=x[j]-'0';      //加数x放入a数组
	for(int j=0;j<leny;j++) b[leny-j-1]=y[j]-'0';      //加数y放入b数组
    int c[lenc],m=0;memset(c,0,sizeof(c));
    for(int i=0;i<lenc;i++){
		c[i]=a[i]+b[i]+m;    	//第i位相加并加上次的进位
		m=c[i]/10;	             //向高位进位
		c[i]%=10;                      //存储第i位的值
	}
	string z="";
	int i=lenc-1;
	for(i;i>=0;i--) if(c[i]) break;
	for(i;i>=0;i--) z+=(char)(c[i]+48);
	return z;
}
string advmutiply(string x,string y){
	if(x=="0"||y=="0") return "0";
    const int lenx=x.length(),leny=y.length();
    const int lenc=lenx*leny;
    int a[lenc],b[lenc]; 
	memset(a,0,sizeof(a)); memset(b,0,sizeof(b));
	for(int j=0;j<lenx;j++) a[lenx-j-1]=x[j]-'0';
	for(int j=0;j<leny;j++) b[leny-j-1]=y[j]-'0';
    int c[lenc],m;memset(c,0,sizeof(c));
    for(int i=0;i<lenx;i++){
    	m=0;
    	for(int j=0;j<leny;j++){
    		c[i+j]=a[i]*b[j]+m+c[i+j];
			m=c[i+j]/10;
			c[i+j]%=10;
    	}
		c[i+leny]=m;
	}
	string z="";
	int i=lenc-1;
	for(i;i>=0;i--) if(c[i]) break;
	for(i;i>=0;i--) z+=(char)(c[i]+48);
	return z;
}
void compair(int cb[]){
	string ans="1",sum=""; int c=0;
	for(int j=0;j<k;j++) cout<<cb[j]<<' ';cout<<endl;
	for(int j=0;j<=k;j++){
		if(j-k) while(c<=cb[j]) sum+=num[c++];
		else while(c<n) sum+=num[c++];
		cout<<sum<<' ';
		ans=advmutiply(sum,ans);sum="";
		cout<<" !OK! ";
	}
	cout<<ans<<endl;
	maxans=biggerstr(maxans,ans);
}
void change(int a[],int cb[],int bit=0,int index=0){
	for(int i=index;i<n-1;i++){
		cb[bit]=a[i];
		if(bit<k-1) change(a,cb,bit+1,index+1);
		else compair(cb);
	}
}
int main(){
	cin>>n>>k>>num;
	int oc[50],cb[50]={}; for(int i=0;i<50;i++) oc[i]=i;
	change(oc,cb);
	cout<<maxans;
} 
