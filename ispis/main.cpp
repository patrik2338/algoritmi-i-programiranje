#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int b1;
    int b2;
    int r;
    printf("unesi prvi broj:");

    cin>>b1;
    printf("molim,unesi drugi broj:");
    cin>>b2;
    r=b1+b2;
    printf("%i + %i = %i, ", b1, b2, r);
    r=b1-b2;
    printf("%i - %i= %i, ",b1, b2, r);
    r=b1*b2;
    printf("%i * %i = %i, ", b1 , b2, r);
    r=b1/ b2;
    printf(" %i / %i = %i, ",b1, b2, r);


    return 0;
}
