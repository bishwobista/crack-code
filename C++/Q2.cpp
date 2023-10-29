#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}  //list declaration 
};

Node* insert(Node* head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    return newNode;
}

Node* deleteNode(Node* head, int val) {
    if (head == nullptr) {
        return nullptr;
    }

    if (head->data == val) {
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete temp;
        return head;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != val) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        if (current->next != nullptr) {
            current->next->prev = current;
        }
        delete temp;
    }

    return head;
}

bool search(Node* head, int val) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == val) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void print(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    //cout << "nullptr" << endl;
    cout << " ";
    cout << endl;
}

int main() {
    Node* head = nullptr;

    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);

    cout << "Linked List: ";
    print(head);

    cout << "Searching for 2: " << (search(head, 2) ? "Found" : "Not Found") << endl;
    cout << "Searching for 3: " << (search(head, 3) ? "Found" : "Not Found") << endl;

    head = deleteNode(head, 2);
    cout << "After deleting 2: ";
    print(head);

    cout << "Head of the list: " << head->data << endl;

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}


//TIME complexity - O(N) worst case
//SPACE complexity - O(N)