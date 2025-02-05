#include <iostream>

using namespace std;

int main()
{
    int r,r1,u;
    char o;
    cin>>o;
    cin>>r;
    cin>>r1;
    if(o=='s'){
        u=r1+r;
        cout<<u;
    }
    else if(o=='p'){
        u=(r*r1)/(r+r1);
        cout<<u;
    }


    return 0;
}
