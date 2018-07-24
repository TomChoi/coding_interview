#include <memory>
#include "LinkedList.h"

using namespace std;

// Intersection: Given two (singly) linked lists, determine if the two lists intersect. Return the inter­ secting node.
// Note that the intersection is de ned based on reference, not value.
// That is, if the kth node of the first linked list is the exact same node (by reference)
// as the jth node of the second linked list, then they are intersecting.

Node<int>* Intersection(LinkedList<int>& list1, LinkedList<int>& list2){
  int l1_size = list1.getLength();
  int l2_size = list2.getLength();

  Node<int>* l1_current = list1.head;
  
  for( int i=0; i < l1_size; ++i ){
    Node<int>* l2_current = list2.head;
    for( int j=0; j < l2_size; ++j ){
      if( l1_current == l2_current ){
        return l1_current;
      }
      l2_current = l2_current->next;
    }
    l1_current = l1_current->next;
  }
  return nullptr;
}
