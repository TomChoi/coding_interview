#include <memory>
#include "LinkedList.h"

using namespace std;

// Intersection: Given two (singly) linked lists, determine if the two lists intersect. Return the inter­ secting node.
// Note that the intersection is de ned based on reference, not value.
// That is, if the kth node of the first linked list is the exact same node (by reference)
// as the jth node of the second linked list, then they are intersecting.

Node<int>* Intersection(LinkedList<int>& list1, LinkedList<int>& list2){

  Node<int>* head_node1 = list1.head;
  Node<int>* head_node2 = list2.head;
  Node<int>* current_node1 = head_node1;
  Node<int>* current_node2 = head_node2;

  bool hasFound = false;
  while (current_node1 != nullptr) {
    while (current_node2 != nullptr) {
      if (current_node1 == current_node2) {
        hasFound = true;
        break;
      }
      current_node2 = current_node2->next;
    }

    if (hasFound) {
      break;
    } else {
      current_node2 = head_node2;
    }
    current_node1 = current_node1->next;
  }
  return current_node1;
}
