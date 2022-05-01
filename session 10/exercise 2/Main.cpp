#include "Sheep.h"
#include "Cow.h"
#include "Goat.h"

using namespace std;

void Input(vector<vector<Cattle*>> &List){
    int CatchKey;
    do{
        cout<<"1. Cow." << endl;
        cout<<"2. Sheep." << endl;
        cout<<"3. Goat." << endl;
        cout<<"4. Back to the main menu.\n";
        while (cin>> CatchKey && CatchKey!=1 && CatchKey!=2 && CatchKey!=3 && CatchKey!=4)
            cout<< "Try Again ... " << endl;
        
        switch (CatchKey){
            case 1:
                int n;
                cout<<"Number of Cows: ";
                cin>>n;
                List[0].resize(0);
                for(int i=0;i<n;i++){
                    List[0].push_back(new Cow);
                }
                break;
            case 2:
                int p;
                cout<<"Number of Sheep: ";
                cin>>p;
                List[1].resize(0);
                for(int i=0;i<p;i++){
                    List[1].push_back(new Sheep);
                }
                break;
            case 3:
                int m;
                cout<<"Number of Goat: ";
                cin>>m;
                List[2].resize(0);
                for(int i=0;i<m;i++){
                    List[2].push_back(new Goat);
                }
                break;
            default:
                break;
        }
    }   while(CatchKey!=4);
}

void Print(vector<vector<Cattle*>> &List){
    cout<<"== Print List Cattle ==" << endl;
    for(int i=0;i<List.size();i++){
        for(int j=0; j<List[i].size(); j++){
            List[i][j]->Print();
            cout<<endl;
        }
    }
    cout<< endl;
}
void Say(vector<vector<Cattle*>> &List){
    cout<<"== Say to feed ==" << endl;
    for(int i=0; i<List.size(); i++){
        for(int j=0; j<List[i].size(); j++){
            List[i][j]->Say();
            cout<<endl;
        }
    }
    cout<< endl;
}
int main(){
    srand(time(NULL));
    vector<vector<Cattle*>> ListCattle;
    ListCattle.resize(3);
    int CatchKey;
    do{
        cout<<"== Manage Cattle ==" << endl;
        cout<<"1. Type kinds of cattles." << endl;
        cout<<"2. Print all list of Cattles." << endl;
        cout<<"3. Make all Cattles to say." << endl;
        cout<<"4. Exit." << endl;
        while (cin>>CatchKey && CatchKey!=1 && CatchKey!=2 && CatchKey!=3 && CatchKey!=4)
            cout << "Try again ..." << endl;
     
        switch (CatchKey){
            case 1:
                Input(ListCattle);
                break;
            case 2:
                Print(ListCattle);
                break;
            case 3:
                Say(ListCattle);
                break;
            default:
                break;
        }
    } while(CatchKey!=4);

    for(int i=0; i<ListCattle.size(); i++){
        for(int j=0; j<ListCattle[i].size(); j++){
            delete ListCattle[i][j];
        }
    }

    cout<<"End process" << endl;
    return 0;
}