#include "LinkedList.h"

using namespace std;

// Remov Dups! Write code to remove duplicates from an unsorted linked list.
// FOLLOW UP
// How would you solve this problem if a temporary bu er is not allowed?
// Hints: #9, #40

LinkedList<char>& RemoveDups(LinkedList<char>& list){
  // wirte your answer
  Node<char>* current = list.head;
  Node<char>* prev = nullptr;
  Node<char>* willDeletedNode = nullptr;

  int TOTAL_ASCII_NUMBER = 128;
  vector<bool> isDupliate(TOTAL_ASCII_NUMBER, false);

  while( current != nullptr ){
    if( isDupliate[current->data] ){
      prev->next = current->next;
      willDeletedNode = current;
    }else{
      isDupliate[current->data] = true;
      prev = current;
    }

    current = current->next;
    if( willDeletedNode != nullptr ){
      list.deleteNode(willDeletedNode);
      willDeletedNode = nullptr;
    }
  }
  return list;
}
