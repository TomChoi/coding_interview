#include "LinkedList.h"

using namespace std;

// Delete Middle Node: Implement an algorithm to delete a node in the middle
// (i.e., any node but the  rst and last node, not necessarily the exact middle)
// of a singly linked list, given only access to that node.
// EXAMPLE
// lnput:the node c from the linked list a->b->c->d->e->f
// Result: nothing is returned, but the new linked list looks like a->b->d->e- >f

LinkedList<char>& DeleteMiddleNode(LinkedList<char>& list){

  int MINIMUM_COUNT_FOR_GET_MIDDLE = 3;
  Node<char>* current = list.head;
  int list_length = list.getLength();
  if( list_length >= MINIMUM_COUNT_FOR_GET_MIDDLE ){

    int middle = (list_length % 2) == 0 ? list_length / 2 : (list_length / 2) +1;
    for(int i=1; i < middle - 1; i++){
      current = current->next;
    }
    current->next = current->next->next;
    return list;
  }else{
    return list;
  }
}
