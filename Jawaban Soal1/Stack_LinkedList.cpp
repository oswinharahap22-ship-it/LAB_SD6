#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* top = NULL;

void push(int value) {
    node* baru = new node;

    baru->value = value;
    baru->next = top;

    top = baru;
}

void pop() {
    if (top == NULL) {
        cout << "Stack kosong." << endl;
        return;
    }

    node* hapus = top;
    top = top->next;

    delete hapus;
}

void tampil() {
    node* bantu = top;

    if (bantu == NULL) {
        cout << "Stack kosong." << endl;
        return;
    }

    while (bantu != NULL) {
        cout << bantu->value << " ";
        bantu = bantu->next;
    }

    cout << endl;
}

int main() {
    system ("cls");

    push(10);
    push(20);
    push(30);
    push(40);

    cout << "Stack awal : ";
    tampil();

    pop();

    cout << "Setelahnya : ";
    tampil();

    return 0;
}