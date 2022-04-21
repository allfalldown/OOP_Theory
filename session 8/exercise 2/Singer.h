#include "Human.h"

class Singer: public Human{
    private:
        int nShow, nAlbbum;
        string gerne;
    public:
        static int nSinger;
        static int GetNumber(){
            return nSinger;
        }
        Singer(){
            nShow = nAlbbum = 0;
            work_address = "Stage";
        }
        void Input(){
            Singer::nSinger++;
            BasicInput();
            cout << "Music gerne: ";
            cin.ignore();
            getline(cin, gerne);
            cout << "Number of shows: "; cin >> nShow;
            cout << "Number of albums: "; cin >> nAlbbum;
        }
        void Display(){
            BasicDisplay();
            cout << "Music gerne: " << gerne << endl;
            cout << "Number of shows: " << nShow << endl;
            cout << "Number of albums: " << nAlbbum << endl;
        }
        
};

int Singer::nSinger = 0;