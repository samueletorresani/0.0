/*
    Scrivere un programma che prende due numeri interi e determina se il primo è un multiplo del secondo.
*/

#include <iostream>
using namespace std;
int main(){
int a,b;
    cout<<"inserisci a ";
    cin>> a;
    cout<<"inserisci b ";
    cin>> b;

    if (a>=b)
        if (a%b==0)
            cout<<"a multiplo di b";
        else 
            cout<<"a NON multiplo di b";
    else
        cout<<"a non multiplo di b perche' minore";
return 0; 
}