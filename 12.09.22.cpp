#include <iostream>
using namespace std;

int main() {
    int uzd;
    cout<<"Ievadiet uzdevuma numuru (ar skaitli, bez punkta!)"<<endl;
    cin>>uzd;
    if (uzd == 1) {
        // PIRMAIS UZDEVUMS
        int x;
        int y;
        cout<<"Ievadiet pirmo skaitli"<<endl;
        cin>>x;
        cout<<"Ievadiet otro skaitli"<<endl;
        cin>>y;
        if (x>y){
            cout<<"Pirmais skaitlis ir lielaks par otro. "<<x<<" > "<<y<<endl;
        } else if(y>x){
            cout<<"Pirmais skaitlis ir mazaks par otro. "<<x<<" < "<<y<<endl;
        } else {
            cout<<"Abi skaitli ir vienadi. "<<x<<" = "<<y<<endl;
        }
    } else if (uzd == 2) {
        //OTRAIS UZDEVUMS
        int x;
        int y;
        int darbiba;
        cout<<"Izvelies darbibu: saskaitisana (1), atnemsana (2), reizinasana (3), dalisana (4)"<<endl<<"Ievadiet attiecigas darbibas skaitli"<<endl;
        cin>>darbiba;
        if (darbiba <=0, darbiba >= 5) {         // Vai t�da darb�ba visp�r ir?
            cout<<"Tu izvelejies neeksistejoso darbibu. Restarte programmu un pamegini velreiz!";
        } else {
            cout<<"Ievadiet pirmo skaitli"<<endl;
            cin>>x;
            cout<<"Ievadiet otro skaitli"<<endl;
            cin>>y;
            if (darbiba == 1){                   //Vai ir saskait��ana
                cout<<"Rezultats ir "<<x+y;
            } else if (darbiba == 2) {           //Vai ir at�em�ana
                cout<<"Rezultats ir "<<x-y;
            } else if (darbiba == 3) {           //Vai ir reizin��ana
                cout<<"Rezultats ir "<<x*y;
            } else if (darbiba == 4) {           //Vai ir dal��ana
                float a = float(x);
                float b = float(y);
                cout<<"Rezultats ir "<<a/b;
            }
        }
    } else {
        cout<<"Uzdevums ar tadu uzdevumu neeksiste! Pamegini velreiz";
    }
}
