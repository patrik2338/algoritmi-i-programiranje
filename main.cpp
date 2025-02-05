#include <iostream>

using namespace std;

int main()
{
    int bodovi;
    int o5,o4,o3,o2;
    cin>>o2;
    cin>>o3;
    cin>>o4;
    cin>>o5;
    cin>>bodovi;
    if(bodovi>=o5){
        cout<<"odlican";
    }
    else if(bodovi>=o4&& bodovi<o5){
        cout<<"vrlo dobar";
    }
    else if(bodovi>=o3&& bodovi<o4){
        cout<<"dobar";
    }
    else if(bodovi>=o2&& bodovi<o3){
        cout<<"dovoljan";
    }
    else if(bodovi<o2){
        cout<<"nedovoljan";
    }
    return 0;
}
