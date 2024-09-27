#ifndef H_IntLinkedList
#define H_IntLinkedList

#include "unorderedLinkedList.h"

class intLinkedList : public unorderedLinkedList<int> {
public:
    intLinkedList();  // Constructor
    ~intLinkedList(); // Destructor

    void addInt(int num);
    void deleteInt(int num);
    bool searchInt(int num) const;
    void displayList() const;
};

#endif


