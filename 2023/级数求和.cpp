#include<iostream>
using namespace std;
int main(){
    int k,n=0;
    float s=0;
    scanf("%d", &k);
    while (s<=k){
        ++n;
        s+=1.0/n;
    };
    printf("%d",n);
    return 0;
}
