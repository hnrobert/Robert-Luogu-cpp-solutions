#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
const char block[7][8]={
"..+---+",
"./   /|",
"+---+ |",
"|   | +",
"|   |/.",
"+---+.." 
};
int cub[51][51],xlim=0,ylim=0;
std::vector<std::vector<char> > graph;
void placeblock(int x,int y){
	for(int i=0;i<6;i++) for(int j=0;j<7;j++){
		if(i+j<2||i+j>9) continue;
		graph[y+i][x+j]=block[i][j];
	}
	//cout<<endl;
	//for(int i=0;i<ylim;i++) {for(int j=0;j<xlim;j++)cout<<graph[i][j];cout<<endl;}
	//cout<<"Complete!"<<endl;
}
int main(){
	cout<<"m,n  -->  ";
	int m,n;cin>>m>>n;
	cout<<"m*n (Cube Height)"<<endl; 
	for(int i=0;i<m;i++){
		int stage=(m-i-1)*2;
		for(int j=0;j<n;j++){
			cin>>cub[i][j];
			int xedge=stage+(!!cub[i][j])*(j+1)*4+3, yedge=stage+cub[i][j]*3+3;
			xlim=max(xedge,xlim);
			ylim=max(yedge,ylim);
		}
	}
	//cout<<endl<<xlim<<' '<<ylim<<endl<<endl;
	vector<char> row;
	for(int i=0;i<xlim;i++) row.push_back('.');
	for(int i=0;i<ylim;i++) graph.push_back(row);
	
	for(int i=0;i<m;i++){
		int stagey=(m-i-1)*2;
		for(int j=0;j<n;j++){
			int stagex=stagey+j*4;
			for(int k=0;k<cub[i][j];k++){
				int stpointx=stagex,stpointy=ylim-(stagey+(k+1)*3+2)-1;
				placeblock(stpointx,stpointy);
			}
		}
	}
	for(int i=0;i<ylim;i++) {for(int j=0;j<xlim;j++)cout<<graph[i][j];cout<<endl;}
	system("pause");
}
