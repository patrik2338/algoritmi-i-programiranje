#include <iostream>

using namespace std;

int main()
{
    char o;
    int v1,v2;
    scanf("%c %i %i", &o, &v1, &v2 );
    if(o=='r'){
    int u=v1;
    int i=v2;
    int r=u/i;
    cout<<r;
    }
    else if(o=='u'){
        int i=v1;
        int r=v2;
        int u=r*i;
        cout<<u;
    }
    else if(0=='i'){
            int r=v1;
            int u=v2;
            int i=u/r;
            cout<<i;
    }
    return 0;
}
