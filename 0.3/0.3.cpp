/*
    Scrivere un programma che scrive i numeri da 1 a 4 sulla stessa linea. Ripetere tre volte lo stesso output
    utilizzando i seguenti metodi.
    • Usando una sola volta cout e separando gli spazi dai numeri Es: "3" e " ".
    • Usando una sola volta cout mantenendo gli spazi insieme ai numeri Es: "3 ".
    • Usando quattro cout separati.
*/

#include <iostream>
using namespace std;
int main()
{
    int n= 4;
    for (int i=1; i<= n; ++i)
    cout<<i<<" ";
    return 0;
}

