#include "../include/dustin_linked_list.h"

template <typename T>
DustinLinkedList<T>::DustinLinkedList():
    headNode(nullptr),
    tailNode(nullptr),
    currentSize(0) {

}

template <typename T>
DustinLinkedList<T>::~DustinLinkedList() {
    // Delete all nodes
    deleteList();
}

template <typename T>
void DustinLinkedList<T>::pushBack(const T& newData) {
    Node* newNode = new Node(newData);
    tailNode -> nextNode = newNode;
    newNode -> prevNode = tailNode;
    tailNode = newNode;
    currentSize++;
}

template <typename T>
void DustinLinkedList<T>::pushFront(const T& newData) {
    Node* newNode = new Node(newData);
    headNode -> prevNode = newNode;
    newNode -> nextNode = headNode;
    headNode = newNode;
    currentSize++;
}

template <typename T>
void DustinLinkedList<T>::deleteList() {
    while (headNode != nullptr) {
        Node* nextNode = headNode -> nextNode;
        delete headNode;
        currentSize--;
        headNode = nextNode;
    }
}

template <typename T>
void DustinLinkedList<T>::printList() {
    Node* currentNode = headNode;
    while (currentNode != nullptr) {
        std::cout << currentNode -> data << " ";
        currentNode = currentNode -> nextNode;
    }
    std::cout << std::endl;
}
