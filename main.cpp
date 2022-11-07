#include <iostream>
#include "LinkedList.h"
#include <vector>

int main() {
    LinkedList<int> list;

    //std::vector<int> v {1,2,3,4,5};

    list.push_front(1);

    //list.pop_front();
    list.push_back(2);
    list.push_back(3);
    //list.insertBefore(-1,2);
    list.push_back(4);
    //list.insertAfter(-1, 4);
    //list.insertAfter(5, 4);
    //list.insertBefore(5,4);
    list.remove(1);
    list.remove(3);
    list.push_front(1);
    list.push_back(5);
    list
    std::cout << list;


    return 0;
}
