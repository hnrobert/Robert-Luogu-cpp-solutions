#include<iostream>
#include<vector>
using namespace std;
int n,ans;
vector <vector<char> > graph;
int search(int i,int j){
	int qlim=n;
	for(int p=j;p<n;p++){
		if(graph[i][p]=='W'){
			ans++;
			for(int q=i+1;q<qlim;q++){
				if(graph[q][p]=='W') ans++;
				else {qlim=q;break;}
			}
		} else break;
	}
}
int main(){
	cin>>n;
	vector <char> line;
	string l;
	for(int i=0;i<n;i++) line.push_back('O');
	for(int i=0;i<n;i++){
		cin>>l;
		for(int j=0;j<n;j++) line[j]=l[j];
		graph.push_back(line);
	}
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) search(i,j);
	cout<<ans;
}
