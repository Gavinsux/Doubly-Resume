#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>
#include <fstream>

using namespace std;

// Doubly Linked List class template
template <typename T>
class DoublyLinkedList {
private:
    // Internal Node structure for storing data and pointers to the next and previous nodes
    struct Node {
        T data;
        Node* next;
        Node* prev;
        Node(T value) : data(value), next(nullptr), prev(nullptr) {}
    };

    Node* head; // Pointer to the head (first node)
    Node* tail; // Pointer to the tail (last node)

public:
    // Constructor to initialize an empty list
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Destructor to free all allocated memory
    ~DoublyLinkedList();

    // Methods to insert elements at the head and tail of the list
    void insertAtHead(T value);
    void insertAtTail(T value);

    // Method to sort the list using bubble sort
    void bubbleSort();

    // Method to display the list (for debugging)
    void display() const;

    // Method to write the list contents to a file
    void writeToFile(ofstream& outfile) const;
};

#include "doubly_linked_list.cpp" // Include the implementation file
#endif
