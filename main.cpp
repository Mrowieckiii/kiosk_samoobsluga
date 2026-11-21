#include <iostream>
#include <vector>
#include <string>

using namespace std;

string produkty[5] = {"Myszka", "Klawiatura", "Słuchawki", "Podkładka", "Monitor"};
double ceny[5] = {70, 100, 85, 45, 250};


int main(){
        int wybor;

        while (true) {
            cout << "---Sklep Online---"<<endl;
            cout<<"1.Pokaz ofertę sklepu"<<endl;
            cout<<"2.Dodaj produkt do koszyka"<<endl;
            cout<<"3.Pokaz koszyk"<<endl;
            cout<<"4.Cofnij ostatni produkt"<<endl;
            cout<<"5.Finalizuj zakup(Paragon)"<<endl;
            cout << "6.Wyjdź" << endl;
            cin >> wybor;
            switch (wybor) {

                case 1: {
                    cout<<"Zawartość Sklepu: " << endl;
                    for  (int i = 0 ; i < 5 ;i++ ) {
                        cout<< "\n " <<  i + 1 <<  "\t" << produkty[i] <<  " || " << " cena: " << ceny[i]<< endl;
                    }
                    break;}
                case 2: {

                    break;
                }




                case 6:
                    cout << "Do zobaczenia :))" << endl;
                    return 0;
                default:
                    cout << "Wybierz poprawny numer zakres 1-6!!"<<endl;
                    break;
                 }
        }



    }