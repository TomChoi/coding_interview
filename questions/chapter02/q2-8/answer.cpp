#include "LinkedList.h"

using namespace std;

// Loop Detection: Given a circular linked list, implement an algorithm that returns the node at the
// beginning of the loop.
// DEFINITION
// Circular linked list: A (corrupt) linked list in which a node's next pointer points to an earlier node, so as to make a loop in the linked list.
// EXAMPLE
// Input: A -> B -> C -> D -> E -> C[thesameCasearlier]
// Output: C

Node<char>* LoopDetection(LinkedList<char>& list){

  map< Node<char>*, char> node_map;
  Node<char>* current = list.head;

  while(1){
    if( node_map.find(current) != node_map.end() ){
      return current;
    }else{
      node_map[ current ] = 1;
    }
    current = current->next;
  }
  return nullptr;
}
