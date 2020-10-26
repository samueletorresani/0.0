using namespace std;
#include <iostream>
int main()
{
    double pi=3.1415926535;
    float raggio;
    cout<<"raggio= ";
    cin>>raggio;
    cout<<"diametro= "<< 2*raggio<<endl;
    cout<<"circonferenza= "<<2*pi*raggio<<endl;
    cout<<"area= 2"<< pi*raggio*raggio<<endl;
    return 0;
}