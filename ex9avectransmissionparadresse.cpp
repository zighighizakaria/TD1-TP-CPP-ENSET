#include <iostream>
#include <ncurses.h>
using namespace std;
struct essai{
 int n;
 float x;

};
void remise_a_zero(struct essai *ads)
{
    ads->n=0;
    ads->x=0.0;

}
int main (void){
    struct essai s;
    remise_a_zero(&s);
    cout<<"valeurs après remise à zero: "<<s.n<<" "<<s.x<< endl;
    return 0;

}