#include<iostream> 
#include<cmath>
#include<vector>
using namespace std;
vector <vector<vector <int> > > memb;
vector <vector <char> > map;
vector <vector <int> > result;
vector <int> res(2);
vector <string> adir;
int R,C,n,sr,sc;
void conduct(int step,int r,int c){
	if(step==n) {res[0]=r;res[1]=c;result.push_back(res);return;}
	if(memb[r][c][step]) return; else memb[r][c][step]=1;
	int dir[2];
	switch(adir[step][0]){
		case 'N':dir[0]=-1;dir[1]=0;break;
		case 'S':dir[0]=1;dir[1]=0;break;
		case 'E':dir[0]=0;dir[1]=1;break;
		case 'W':dir[0]=0;dir[1]=-1;break;
		default:cout<<"error";
	}
	
	for(int i=r+dir[0],j=c+dir[1];i<R&&i>=0&&j<C&&j>=0&&map[i][j]!='X';i+=dir[0],j+=dir[1]) conduct(step+1,i,j);
}
int main(){
	cin>>R>>C;
	vector <char> arow; string r;
	for(int i=0;i<R;i++){
		cin>>r;
		arow.assign(r.begin(),r.end());
		map.push_back(arow);
		if(r.find('*')<C){sr=i;sc=r.find('*');}
	}
	cin>>n; for(int i=0;i<n;i++){cin>>r;adir.push_back(r);}
	memb.resize(R,vector< vector<int> >(C,vector<int>(n,0)));
	map[sr][sc]='.';
	conduct(0,sr,sc);
	for(int i=0;i<result.size();i++) map[result[i][0]][result[i][1]]='*';
	for(int i=0;i<R;i++){ for(int j=0;j<C;j++) cout<<map[i][j]; cout<<endl;}
}
