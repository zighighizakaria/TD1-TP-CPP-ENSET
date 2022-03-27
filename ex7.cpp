#include <iostream>
#include <ncurses.h>
using namespace std;
void affiche(float x, int n = 0)
{

    if (n == 0)
    {
        cout << "Le resultat est = 1" << endl;
        return;
    }
    int i = 0;
    float resultat = 1;
    while (i < n)
    {
        resultat = resultat * x;
        i++;
    }
    cout << "Le resultat est = " << resultat << endl;
}

void affiche(int n, float x = 0)
{

    if (x == 0)
    {
        cout << " Le resultat est = 0" << endl;
        return;
    }
    int i = 0;
    float resultat = 1;
    while (i < n)
    {
        resultat = resultat * x;
        i++;
    }
    cout << "Le resultat est = " << resultat << endl;
}

int main()
{
    int n = 0;
    float x = 6.0;
    affiche(x, n);
    affiche(n, x);
    n = 4;
    x = 2.5;
    affiche(x, n);
    affiche(n, x);
    
    return 0;
}