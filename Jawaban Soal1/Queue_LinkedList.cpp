#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* front = NULL;
node* rear = NULL;

void enqueue(int value) {
    node* baru = new node;

    baru->value = value;
    baru->next = NULL;

    if (front == NULL) {
        front = baru;
        rear = baru;
    } else {
        rear->next = baru;
        rear = baru;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue kosong." << endl;
        return;
    }

    node* hapus = front;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete hapus;
}

void tampil() {
    node* bantu = front;

    if (bantu == NULL) {
        cout << "Queue kosong." << endl;
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

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    cout << "Queue awal : ";
    tampil();

    dequeue();

    cout << "Setelahnya : ";
    tampil();

    return 0;
}