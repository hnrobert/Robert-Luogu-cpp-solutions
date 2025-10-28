#include<iostream>
#include<algorithm>
using namespace std;
int harvest[30],price[30],f[50000];//w数组为重要度，v数组为money，f是用来dp的数组
int n,money;//n是总物品个数，m是总钱数
int main(){
    cin>>money>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>price[i]>>harvest[i];
        harvest[i]*=price[i];
    }
    for(int i=1;i<=n;i++) for(int j=money;j>=price[i];j--){
        if(j>=price[i]){
            f[j]=max(f[j],f[j-price[i]]+harvest[i]);//dp
        }
    }
    cout<<f[money]<<endl;//背包大小为m时最大值
    return 0;
} 
