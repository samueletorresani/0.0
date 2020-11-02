/*
    Scrivere un programma che legge tre numeri e calcola la somma, la media, il prodotto, il più grande e il
    più piccolo.
*/

#include <iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"inserire un numero"<<endl;
    cin>>a;
    cout<<"inserire un' altro numero"<<endl;
    cin>>b;
    int somma=a+b;
    cout<<"somma= "<<somma<<endl;
    cout<<"media= "<<somma/2<<endl;
    cout<<"prodotto= "<<a*b<<endl;
    cout<<"maggiore= "<<max(a,b)<<endl;
    cout<<"minore= "<<min(a,b)<<endl;
}