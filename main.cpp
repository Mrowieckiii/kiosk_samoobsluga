#include <iostream>
#include <vector>
#include <string>

using namespace std;

string produkty[5] = {"Myszka", "Klawiatura", "Słuchawki", "Podkładka", "Monitor"};
double ceny[5] = {70, 100, 85, 45, 250};


int main(){
        int wybor;
        vector<string>NazwyProd;
        vector<double>CenaProd;

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
                    int addItem;
                    cout << "Dodaj przedmiot (1-5) do koszyka:  : " <<endl;
                    cin >> addItem;
                    if (addItem > 5 || addItem < 1) {
                        cout << "Nie poprawny zakres!!! wybierz spośród (1-5)!!!"<<endl;
                    }else {
                        NazwyProd.push_back(produkty[addItem - 1]);
                        CenaProd.push_back(ceny[addItem - 1]);
                        cout << "Dodano Produkt do koszyka!!"<<endl;
                    }
                    break;
                }
                case 3:
                    if (NazwyProd.empty()) {
                        cout << "Koszyk jest pusty!! Dodaj cos do niego!!" <<endl;
                    }else {
                        double suma = 0;
                        cout << "Zawartość koszyka: "   << endl;
                        for (int i = 0; i < NazwyProd.size(); i++) {
                            cout <<  i + 1  << " " <<  NazwyProd[i] << " cena: " << CenaProd[i] << " zł" << endl;
                            suma += CenaProd[i];
                        }
                        cout << "Całkowita suma(zł) koszyka: " << suma <<endl;
                    }
                    break;

                case 4:
                    if (NazwyProd.empty()) {
                        cout << "Nie masz aktualnie zadnych rzeczy dodanych!!!" << endl;
                    }else {
                       cout << "Usunięto z koszyka: " << NazwyProd.back() << endl;
                        NazwyProd.pop_back();
                        CenaProd.pop_back();
                    }
                    break;
                case 5:
                    if (NazwyProd.empty()) {
                        cout << "Brak czegokolwiek w koszyku dodaj coś przed finalizacją!!!"<<endl;
                    }else {
                        double suma = 0;
                      //  double MaxCena = CenaProd[0];
                      //  string NazwaMax = NazwyProd[0];
                        for (int i = 0; i < NazwyProd.size(); i++ ) {
                            cout << i + 1 <<  " " <<  NazwyProd[i] <<  " cena: " <<  CenaProd[i] << "zl" << "\n";
                             suma += CenaProd[i];
                        }
                        cout << "Suma calkowita: " << suma << " zł" << endl;
                        return 0;
                    }
                    break;


                case 6:
                    cout << "Do zobaczenia :))" << endl;
                    return 0;
                default:
                    cout << "Wybierz poprawny numer zakres 1-6!!"<<endl;
                    break;
                 }
        }



    }