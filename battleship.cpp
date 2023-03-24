#include <iostream>
using namespace std;

int main(){

    bool ships[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
    };

    int tries=0;
    int hits=4;

    while (hits>0){
        int y, x;
        cout << "Choose y coordinate (0-3): ";
        cin >> y;
        cout << "Choose x coordinate (0-3): ";
        cin >> x;

        if (ships[y][x]){
            hits-=1;
            ships[y][x] = 0;
            cout << "Bravo\n\n";
        }
        else {
            cout << "nope\n\n";
        }

        tries+=1;
    }

    cout << "gg you won in " << tries << " tries !"; 

    return 0;
}