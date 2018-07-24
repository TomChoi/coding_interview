#include "LinkedList.h"

using namespace std;

// Palindrome: Implement a function to check if a linked list is a palindrome.

bool Palindrome(LinkedList<char>& list){

  map<char, bool> palindrome_check_flag;

  Node<char>* current = list.head;
  Node<char>* prev = nullptr;

  while( current != nullptr ){
    if( current->data == ' ' ){
      if( prev == nullptr ){
        current = current->next;
      }else{
        prev->next = current->next;
      }
    }
    prev = current;
    current = current->next;
  }
  current = list.head;

  int size = list.getLength();
  int middle = size % 2 == 1 ? size / 2 : -1;
  for( int i=0; i < size; ++i ){
    if( i != middle ){
      auto iter = palindrome_check_flag.find(current->data);
      if( iter == palindrome_check_flag.end() ){
        palindrome_check_flag[ current->data ] = true;
      }else{
        iter->second ^= true;
      }
    }
    current = current->next;
  }

  for( auto iter : palindrome_check_flag ){
    if( iter.second ){
      return false;
    }
  }

  return true;
}
