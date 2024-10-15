#include "doubly_linked_list.h"

// Destructor to delete the entire list and free memory
template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next; // Save next node before deleting the current one
        delete current; // Delete the current node
        current = next; // Move to the next node
    }
}

// Insert a new node at the head of the list
template <typename T>
void DoublyLinkedList<T>::insertAtHead(T value) {
    Node* newNode = new Node(value); // Create a new node
    if (head == nullptr) { // If the list is empty
        head = tail = newNode; // The new node is both the head and tail
    } else {
        newNode->next = head; // Link the new node to the current head
        head->prev = newNode; // Link the current head back to the new node
        head = newNode; // Update head to the new node
    }
}

// Insert a new node at the tail of the list
template <typename T>
void DoublyLinkedList<T>::insertAtTail(T value) {
    Node* newNode = new Node(value); // Create a new node
    if (tail == nullptr) { // If the list is empty
        head = tail = newNode; // The new node is both the head and tail
    } else {
        newNode->prev = tail; // Link the new node to the current tail
        tail->next = newNode; // Link the current tail forward to the new node
        tail = newNode; // Update tail to the new node
    }
}

// Bubble sort implementation to sort the list in ascending order
template <typename T>
void DoublyLinkedList<T>::bubbleSort() {
    if (!head) return; // Do nothing if the list is empty

    bool swapped;
    Node* ptr;
    Node* lptr = nullptr;

    // Keep sorting until no swaps occur in a full pass
    do {
        swapped = false;
        ptr = head;

        while (ptr->next != lptr) {
            if (ptr->data > ptr->next->data) { // Swap if the current value is greater than the next
                swap(ptr->data, ptr->next->data);
                swapped = true; // Set flag if a swap occurs
            }
            ptr = ptr->next; // Move to the next pair of nodes
        }
        lptr = ptr; // The last node in the pass is now sorted
    } while (swapped);
}

// Display the list for debugging (prints to the console)
template <typename T>
void DoublyLinkedList<T>::display() const {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " "; // Print the data
        current = current->next; // Move to the next node
    }
    cout << endl;
}

// Write the contents of the list to a file
template <typename T>
void DoublyLinkedList<T>::writeToFile(ofstream& outfile) const {
    Node* current = head;
    while (current != nullptr) {
        outfile << current->data << " "; // Write the data to the file
        current = current->next; // Move to the next node
    }
    outfile << endl;
}
