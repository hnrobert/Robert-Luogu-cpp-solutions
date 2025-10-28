#include <iostream>
using namespace std;
struct student{
	string name;
	int avgscore;
	int clscore;
	char leader;
	char weststu;
	int composition;
	int score;
};
student a[101];
int maxdata=0,tot=0;
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++) cin>>a[i].name>>a[i].avgscore>>a[i].clscore>>a[i].leader>>a[i].weststu>>a[i].composition;
	for(int i=0;i<n;i++){
		int score=0;
		if(a[i].avgscore>80&&a[i].composition) score+=8000;
		if(a[i].avgscore>85&&a[i].clscore>80) score+=4000;
		if(a[i].avgscore>90) score+=2000;
		if(a[i].avgscore>85&&a[i].weststu=='Y') score+=1000;
		if(a[i].clscore>80&&a[i].leader=='Y') score+=850;
		a[i].score=score;
		tot+=score;
		if(score>a[maxdata].score) maxdata=i;
	}
	cout<<a[maxdata].name<<endl<<a[maxdata].score<<endl<<tot;
}
