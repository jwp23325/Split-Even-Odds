#include "intLinkedList.h"

void intLinkedList::splitEvensOddsList(intLinkedList& evensList, intLinkedList& oddsList) {
    // Initialize pointers
    nodeType<int>* current = this->first;
    nodeType<int>* evenTail = nullptr;
    nodeType<int>* oddTail = nullptr;

    // Clear the evensList and oddsList
    evensList.first = nullptr;
    evensList.last = nullptr;
    oddsList.first = nullptr;
    oddsList.last = nullptr;

    // Process the original list
    while (current != nullptr) {
        nodeType<int>* nextNode = current->link; // Store the next node

        // If the current node's info is even, add it to evensList
        if (current->info % 2 == 0) {
            if (evensList.first == nullptr) { // evensList is empty
                evensList.first = current;
                evenTail = current;
            }
            else {
                evenTail->link = current;
                evenTail = current;
            }
            evenTail->link = nullptr; // Terminate the list
        }
        else { // Otherwise, add it to oddsList
            if (oddsList.first == nullptr) { // oddsList is empty
                oddsList.first = current;
                oddTail = current;
            }
            else {
                oddTail->link = current;
                oddTail = current;
            }
            oddTail->link = nullptr; // Terminate the list
        }

        current = nextNode; // Move to the next node
    }

    // Set the original list to be empty
    this->first = nullptr;
    this->last = nullptr;
    this->count = 0;
}
