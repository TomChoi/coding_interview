#include "LinkedList.h"

using namespace std;

// Return Kth to Last: Implement an algorithm to  nd the kth to last element of a singly linked list.
// Hints:#8, #25, #41, #67, #126

LinkedList<char>& ReturnKthToLast(LinkedList<char>& list, int index){
  // wirte your answer
  LinkedList<char>* answer = new LinkedList<char>();
  Node<char>* current = list.head;
  int length = list.getLength();
  for( int i=1; i < length + 1; i++){
    if( i >= index ){
      answer->appendNode(current->data);
    }
    current = current->next;
  }
  return *answer;
}
