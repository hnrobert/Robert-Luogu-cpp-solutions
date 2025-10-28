#include <iostream>
using namespace std;
struct car
{
    int len, dir, x, y;
}cars[20];
int n, step, park[6][6];
bool ac_stopped_bc(int c_num, int sd_c_num, int dire){
    if(cars[c_num].dir == cars[sd_c_num].dir) return false;
    int cx = cars[sd_c_num].x, cy = cars[sd_c_num].y;
    while(cx<7&&cy<7){
        if(park[cx][cy] == c_num) return true;
        cx += cars[sd_c_num].dir * dire;
        cy += !cars[sd_c_num].dir * dire;
    }
    return false;
}
int move_car(int parkn[6][6], int c_num, int stopped_c_num, int dir, int nstep){
    int opt_x = cars[c_num].dir, opt_y = !cars[c_num].dir, cx = cars[c_num].x, cy = cars[c_num].y, car_len=cars[c_num].len;


}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin>>cars[i].len>>cars[i].dir>>cars[i].x>>cars[i].y;
        int opt_x = cars[i].dir, opt_y = !cars[i].dir, cx = cars[i].x, cy = cars[i].y;
        for (int j = 0; j < cars[i].len; j++)
        {
            park[cx][cy] = i;
            cx += opt_x;
            cy += opt_y;
        }
    }
    for (int i = 6; park[3][i]-1;i--){
        if(park[3][i]){
            move_car(park,park[3][i],0,cars[park[3][i]].dir,step);
        }
    }
}