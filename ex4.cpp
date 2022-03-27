#include <iostream>
#include <ncurses.h>
using namespace std;
float puissance(float x, int n)
{
    float R = 1;
    for (int i =1;i <=n;i++)
        R = R * x;
    return R;
}

int main()
{
    char c=5;
    int i=10, j=6;
    float r=5.246,r1,r2,r3,r4,r5;
    r1= puissance(r,j);
    r2= puissance(r,c);
    r3= puissance(j,i);
    r4= puissance(j,r);
    r5= puissance(0,4);
    cout << "r1 = " <<r1<<"\n";
    cout << "r2 = " <<r2<<"\n";
    cout << "r3 = " <<r3<<"\n";
    cout << "r4 = " <<r4<<"\n";
    cout << "r5 = " <<r5<<"\n";
}
