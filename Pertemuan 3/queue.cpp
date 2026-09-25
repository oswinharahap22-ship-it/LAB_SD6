#include <iostream>
#include <queue>
using namespace std;

int main() {
    system ("cls");
    queue<float> antrean;
    float input;

    cout << "Masukkan angka:" << endl;
    
    while(cin >> input) {
        antrean.push(input);
    }

    // cout << endl << "Angka yang dimasukkan dalam antrean:" << endl;
    // while(!antrean.empty()) {
    //     cout << antrean.front() << endl;
    //     antrean.pop();
    // }

    do {
        cout << antrean.front() << endl;
        antrean.pop();
    } while(antrean.size() != 0);

    cout << endl;
    system("pause");

    return 0;
}