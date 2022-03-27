#include <iostream>
#include <ncurses.h>
using namespace std;
void test(int n = 0, float x = 2.5)
{
    cout << "Fontion N°1 : ";
    cout << "n = " <<n<< "  x=" <<x<< "\n";
}

void test(float x = 4.1, int n = 2)
{
    cout << "Fontion N°2 : ";
    cout << "n = " << n << " x=" << x << "\n";
}
int main()

{
    int i = 5;
    float r = 3.2;
    test(i, r);  //fct N°1
    test(r, i);  //fct N°2
    test(i);     //fct N°1
    test(r);     //fct N°2
    
    return 0;
}