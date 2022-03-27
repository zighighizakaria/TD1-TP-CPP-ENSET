#include <iostream>
#include <ncurses.h>
    using namespace std;
void essai(float x, char c, int n = 0)
{
    cout << "Fontion N°1: x = " << x << " c = " << c << " n = " << n << "\n";
}
void essai(float x, int n)
{
    cout << "Fontion N°2 : x = " << x << " n = " << n << "\n";
}
    int main()
{
    char l = 'z';
    int u = 4;
    float y = 2.0;

    essai(y, l, u);  //fct N°1
    essai(y, l);     //fct N°1
    essai(y, u);     //fct N°2
    essai(u, u);     //fct N°2
    essai(u, l);     //fct N°1
    //essai(y,y); rejet par le compliateur
    essai(y, y, u);  //fct N°1

    
}