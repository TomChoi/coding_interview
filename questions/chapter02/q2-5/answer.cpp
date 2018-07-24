#include "LinkedList.h"

using namespace std;

// Sum Lists: You have two numbers represented by a linked list,
// where each node contains a single digit.The digits are stored in reverse order, such that the 1 's digit is at the head of the list.
// Write a function that adds the two numbers and returns the sum as a linked list.
// EXAMPLE
// Input:(7-> 1 -> 6) + (5 -> 9 -> 2).Thatis,617 + 295. Output:2 -> 1 -> 9.Thatis,912.
// FOLLOW UP
// Suppose the digits are stored in forward order. Repeat the above problem. EXAMPLE
// lnput:(6 -> 1 -> 7) + (2 -> 9 -> 5).That is,617 + 295. Output:9 -> 1 -> 2.Thatis,912.

LinkedList<int>& SumLists(LinkedList<int>& l1, LinkedList<int>& l2){

  LinkedList<int>* res = new LinkedList<int>();

  Node<int>* l1_current = l1.head;
  Node<int>* l2_current = l2.head;

  int bigger_size = l1.getLength() < l2.getLength() ? l2.getLength() : l1.getLength();

  int carry = 0;

  for( int i=0; i < bigger_size; ++i ){

    int sum = 0;
    if( l1_current != nullptr ){
      sum += l1_current->data;
    }
    if( l2_current != nullptr ){
      sum += l2_current->data;
    }

    sum += carry;
    res->appendNode( sum % 10 );
    carry = sum / 10;

    if( l1_current != nullptr ){
      l1_current = l1_current->next;
    }
    if( l2_current != nullptr ){
      l2_current = l2_current->next;
    }
  }

  if( carry == 1 ){
    res->appendNode(carry);
  }
  
  return *res;
}
