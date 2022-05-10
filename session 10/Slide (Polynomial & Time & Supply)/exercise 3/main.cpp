#include "Supply.h"

using namespace std;

int main(){
    Supply sup[10000];
    cout << "Number of supply: "; int n; cin >> n;
    for (int i=0; i<n; i++){
        cin >> sup[i];
    }

    for (int i=0; i<n; i++){
        cout << i+1 << ". " << endl;
        cout << sup[i];
    }

    cout << "After sort" << endl;
    Sort(sup, n);
    for (int i=0; i<n; i++){
        cout << i+1 << ". " << endl;
        cout << sup[i];
    }

    return 0;
}