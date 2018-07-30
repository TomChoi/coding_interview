#include "LinkedList.h"

using namespace std;

// Loop Detection: Given a circular linked list,
// implement an algorithm that returns the node at the
// beginning of the loop.
// DEFINITION
// Circular linked list:
// A (corrupt) linked list in which a node's next pointer points to an earlier node,
// so as to make a loop in the linked list.
// EXAMPLE
// Input: A -> B -> C -> D -> E -> C[thesameCasearlier]
// Output: C

Node<char>* LoopDetection(LinkedList<char>& list){

  Node<char>* head = list.head;
  Node<char>* reference_node = head->next;
  Node<char>* current_node = reference_node->next;

  bool hasFound = false;
  while (reference_node != nullptr) {
    while (current_node != nullptr) {
      if (current_node == reference_node) {
        hasFound = true;
        break;
      }
      current_node = current_node->next;
    }
    if (hasFound) {
      break;
    } else {
      reference_node = reference_node->next;
      current_node = reference_node->next;
    }
  }
  return reference_node;
}
