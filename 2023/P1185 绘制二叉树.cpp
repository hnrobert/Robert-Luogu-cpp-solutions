#include<iostream>
#include<cmath>
#include <cstddef>
using namespace std;
int del_data[11][2];
int m,n;
struct node{
	struct node* son[2];
	int depth;
}nd;
void fill(int d,int num,node* &g){
	if(d){
		g=new node;
		g->depth=m-d+1;
		for(int i=0;i<2;i++) for(int j=0;j<n;j++){
			if(del_data[j][0]==d+1&&del_data[j][1]==2*num-1+i){
				g->son[i]->depth=0;
			}else fill(d-1,2*num-1+i,g->son[i]);
		}
	}else{
		g->depth=0;
	}
}
void draw(int index){
	
}
int main(){
	cin>>m>>n;
	for(int i=0;i<n;i++) cin>>del_data[i][0]>>del_data[i][1];
	fill(m,1,nd);
	
}
