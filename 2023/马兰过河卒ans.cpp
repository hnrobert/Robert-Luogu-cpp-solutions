#include <cmath>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#define ll long long

inline int read(){
    int num = 0; char c = getchar();
    while(!isdigit(c)) c = getchar();
    while(isdigit(c)) num = (num << 1) + (num << 3) + (c ^ '0'), c = getchar();
    return num;
}

int bx, by, mx, my;
ll f[30];

inline bool check(int x, int y) {
    if(x == mx && y == my) return 1;
    return (std::abs(mx - x) + std::abs(my - y) == 3) && (std::max ((std::abs(mx - x)), std::abs(my - y)) == 2);
}

int main(){
    bx = read() + 2, by = read() + 2, mx = read() + 2, my = read() + 2;
	f[2] = 1;
    for(int i = 2; i <= bx; i++){
        for(int j = 2; j <= by; j++){
            if(check(i, j)){
                f[j] = 0;
                continue;
            }
            f[j] += f[j - 1];
        }
    }
    printf("%lld\n", f[by]);
    return 0;
} 
