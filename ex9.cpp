#include <iostream>
#include <ncurses.h>
using namespace std;
void affiche(float x,int n=0)
{
    int i=1;float resultat=1;
    for(;i<=n;i++) resultat= resultat *x;
    cout << "x= "<<x<<"|n= "<<n<<"|resultat = "<<resultat<<"\n";

}

void affiche(int n,float x=0)
{
    int i=1;
    float resultat=1;
    if (n!=0) {for(;i<=n;i++)resultat=resultat*x;}
    else (resultat=0);
    cout <<"n= "<<n<<"|x= "<<x<<"|resultat= "<<resultat<<"\n";
}

int main()
{
    int u=4,v=0;float y=2.0,z=0;
    affiche(u);
    affiche(y);
    affiche(y,u);
    affiche(u,y);
    affiche(v,z);
    affiche(z,v);

}

