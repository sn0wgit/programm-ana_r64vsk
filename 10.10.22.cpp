#include <iostream>
#include <windows.h>
using namespace std;

int uzd1(){
    cout<<" === MIKROPROGRAMMA \"VAI TAS IR PALINDROMS?\" ===\n" ;
    string word;
    bool status = true;
    cout<<"Ievadiet k�du v�rdu vai simbolus\n";
    cin>>word;
    int k = 0, n = word.length(), z = word.length();
    n--;
    if (z % 2 == 1){
        cout<<"bruh, �aj� v�rd� nav p�ra skait�a burtu skaits";
    } else {
        while (n != k-1) {
            if (word[k] != word[n]){status = false;}
            n--;
            k++;
        }
        if (status == true) {cout<<"Tas ir palindroms";} else {cout<<"Tas nav palindroms";}
    }
}

int uzd2(){
    cout<<" === MIKROPROGRAMMA \"KADU CIPARU IR VAIRAK MASIVA?\" ===\n" ;
}
int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout<<"Izv�lies uzdevumu. Ir pieejami: \n1. uzd. - Vai ir palindroms?\n2. uzd. - Bie��kais skaitlis\n";
    int uzdnum;
    cin>>uzdnum;
    if (uzdnum == 1) {uzd1();} else
    if (uzdnum == 2) {uzd2();} else {cout<<"Tada nav! ";main();}
}
