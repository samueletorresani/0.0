/*
    Scrivere un programma che stampa la tabella ASCII in questo formato, limitandosi alle lettere maiuscole,
    minuscole e le dieci cifre:
    CHAR: A ASCII: 65
    CHAR: B ASCII: 66
    CHAR: C ASCII: 67
    Info: Dato un intero i, il su corrispondente carattere ASCII può essere ricavato tramite l'operatore
    di cast, quindi: cout << (char) 65 stamperà A. Inoltre ricordare che invece scrivendo int i = 'A'
    il valore di i sarà 65.
*/

using namespace std;
#include <iostream>
int main()
{
     for (int a=48; a<=57; a++)
    {
        cout<<"CHAR:     "<<char(a)<<"   ASCII:   "<<a<<endl;
    }
    for (int a=65; a<=90; a++)
    {
        cout<<"CHAR:     "<<char(a)<<"   ASCII:   "<<a<<endl;
    }
    for (int a=97; a<=122; a++)
    {
        cout<<"CHAR:     "<<char(a)<<"   ASCII:   "<<a<<endl;
    }
    return 0;
}