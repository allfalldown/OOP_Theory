#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Supply{
    private:
        string idtag, name;
        int ticket, price, day, month, year;
        float weight;
    public:
        float total;
        Supply(){
            idtag = name = "None";
            ticket = 1; price = 0;
            weight = total = 0; 
            day = month = year = 1;
        }
        ~Supply(){}

        friend istream &operator >> (istream &is, Supply &sup){
            cout << "Name of supply: "; cin.ignore(); getline(cin, sup.name);
            cout << "Id tag of supply: "; getline(cin, sup.idtag);
            cout << "Day import: "; cin >> sup.day;
            cout << "Month import: "; cin >> sup.month;
            cout << "Year import: "; cin >> sup.year;
            cout << "Type of ticket: "; cin >> sup.ticket;
            cout << "Price of supply: "; cin >> sup.price;
            cout << "Weight of supply: "; cin >> sup.weight;
            cout << "----------" << endl;
            return is;
        }

        void CountTotal(){
            total += price * ticket + weight * 5000;
        }

        friend ostream &operator << (ostream &os, Supply sup){
            cout << "== Details ==" << endl;
            cout << "Name of supply: " << sup.name << endl;
            cout << "Id tag of supply: " << sup.idtag << endl;
            cout << "Type of ticket: " << sup.ticket << endl;
            cout << "Price of supply: " << sup.price << endl;
            cout << "Weight of supply: " << sup.weight << endl;
            sup.CountTotal();
            cout << "Total of supply: " << fixed << setprecision(5) << sup.total << endl;
            return os;
        }
};

 void Swap(Supply a, Supply &b){
    Supply tmp = a;
    a = b;
    b = tmp;
}

void Sort(Supply *sup, int n){
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++){
            if (sup[i].total < sup[j].total)
                Swap(sup[i], sup[j]);
        }
}