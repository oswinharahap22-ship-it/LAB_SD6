#include <iostream>
#include <stack>
using namespace std;

int main() {
    system ("cls");
    stack<float> tumpukan;
    float input;

    cout << "Masukkan angka:" << endl;
    
    while(cin >> input) {
        tumpukan.push(input);
    }

    do {
        cout << tumpukan.top() << endl;
        tumpukan.pop();
    } while(tumpukan.size() != 0);

    cout << endl;
    system("pause");

    return 0;
}