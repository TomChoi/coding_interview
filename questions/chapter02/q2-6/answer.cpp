#include "LinkedList.h"

using namespace std;

// Palindrome: Implement a function to check if a linked list is a palindrome.

bool Palindrome(LinkedList<char>& list){

  map<char, bool> palindrome_check_flag;

  Node<char>* current = list.head;

  int size = list.getLength();
  char middle_first = 0;
  int space_count = 0;
  for( int i=0; i < size; ++i ){
    if( current->data == ' ' ){
      space_count++;
    }else {
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
