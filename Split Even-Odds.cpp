// This program allows the user to enter a series of integers,
// ending with -999, and then splits these integers into two lists:
// one containing even numbers and the other containing odd numbers.
// Code outlined by ChatGPT and modified by the coder.

#include <iostream>
#include "intLinkedList.h"

using namespace std;

int main() {
    intLinkedList list;
    intLinkedList evensList, oddsList;
    int num;

    cout << "Enter integers ending with -999:" << endl;
    cin >> num;

    while (num != -999) {
        list.insertLast(num);
        cin >> num;
    }

    cout << "Original list: ";
    for (auto it = list.begin(); it != list.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Split the list into evens and odds
    list.splitEvensOddsList(evensList, oddsList);

    // Display the even numbers list
    cout << "evensList: ";
    for (auto it = evensList.begin(); it != evensList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Display the odd numbers list
    cout << "oddsList: ";
    for (auto it = oddsList.begin(); it != oddsList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}