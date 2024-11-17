/*Auti Arti,DSPS assignment no.7(Dequeue)*/
#include<iostream>
using namespace std;

class dequeue {
    int ele, f, r, q[10], n;  
public:
    dequeue() {
        f = -1;
        r = -1;
    }
    void setQueueSize(int size) {  
        n = size;
    }
    void insertfront();
    void insertrear();
    void deletefront();
    void deleterear();
    void display();
};

void dequeue::insertrear() {
    cout << "\nEnter element to insert at rear: ";
    cin >> ele;

    if (r == n - 1) {
        cout << "\nQueue is full";
    } 
    else if (f == -1 && r == -1) {
        f = 0;
        r = 0;
        q[r] = ele;
    } 
    else {
        r++;
        q[r] = ele;
        cout << "\nInserted element at rear";
    }
}

void dequeue::insertfront() {
    cout << "\nEnter element to insert at front: ";
    cin >> ele;

    if (f == 0 && r == n - 1) {
        cout << "\nQueue is full";
    } 
    else if (f == -1 && r == -1) {
        f = r = 0;
        q[f] = ele;
    } 
    else if (f == 0) {
        f = n - 1;
        q[f] = ele;
    } 
    else {
        f--;
        q[f] = ele;
        cout << "\nInserted element at front";
    }
}

void dequeue::deleterear() {
    if (f == -1 && r == -1) {
        cout << "\nQueue is empty";
    } 
    else if (f == r) {
        cout << "\nDeleted element is " << q[r];
        f = r = -1;
    } 
    else {
        cout << "\nDeleted element is " << q[r];
        r--;
    }
}

void dequeue::deletefront() {
    if (f == -1 && r == -1) {
        cout << "\nQueue is empty";
    } 
    else if (f == r) {
        cout << "\nDeleted element is " << q[f];
        f = r = -1;
    } 
    else {
        cout << "\nDeleted element is " << q[f];
        f = (f + 1) % n;
    }
}

void dequeue::display() {
    if (f == -1 && r == -1) {
        cout << "\nQueue is empty";
    } 
    else {
        cout << "\nElements in the queue are: ";
        for (int i = f; i != r; i = (i + 1) % n) {
            cout << q[i] << " ";
        }
        cout << q[r] << endl;  
    }
}

int main() {
    dequeue q;
    int ch, size;

    cout << "\nEnter the size of the queue: ";
    cin >> size;
    q.setQueueSize(size); 

    do {
        cout << "\nMenu";
        cout << "\n1. Insert front";
        cout << "\n2. Insert rear";
        cout << "\n3. Delete rear";
        cout << "\n4. Delete front";
        cout << "\n5. Display";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                q.insertfront();
                break;
            case 2:
                q.insertrear();
                break;
            case 3:
                q.deleterear();
                break;
            case 4:
                q.deletefront();
                break;
            case 5:
                q.display();
                break;
            case 6:
                cout << "\nExiting...\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.";
        }
    } while (ch != 6);

    return 0;
}
