/*
    Scrivere un programma che prende un intero e verica se questo è pari o dispari e scrive qualcosa a
    proposito.
*/

using namespace std;
#include <iostream>
int main()
{
    int a;
    cout<<"inserire un numero= ";
    cin>>a;
    cout<<endl;
    while (a !=0)
    {
        if(a%2==0){
            cout<<"pari"<<endl;
        }else{
            cout<<"dispari"<<endl;
        }
        cout<<"inserire il numero da verificare"<<endl;
        cin>>a;
    }
    cout<<"fine programma";
    return 0;
}