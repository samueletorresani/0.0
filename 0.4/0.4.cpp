/*
    Scrivere un programma che chide all'utente di inserire due interi, e poi scrive il numero più grande
    seguito dalla string " is larger". Se i due numeri sono uguali, scrivi il messaggio " These numbers
    are equal".
*/

#include <iostream>
using namespace std;
int main()
{   
    int a, b;
    cout<<"Inserisci il primo numero ";
    cin>>a;
    cout<<"Inserisci il secondo numero ";
    cin>>b;
    if(a>b){
        cout<<a<<" maggiore di "<<b;
    }
    if(a<b){
        cout<<a<<" minore di "<<b;
    }
    if(a==b){
        cout<<a<<" uguale a "<<b;
    }
return 0;
}