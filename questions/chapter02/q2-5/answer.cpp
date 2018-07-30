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

  Node<int>* head_l1 = l1.head;
  Node<int>* head_l2 = l2.head;

  LinkedList<int>* result = new LinkedList<int>();

  Node<int>* curr_l1 = head_l1;
  Node<int>* curr_l2 = head_l2;

  int carry = 0;
  while (curr_l1 != nullptr) {
    int sum = curr_l1->data + curr_l2->data + carry;
    carry = 0;
    if (sum >= 10) {
      carry++;
      cout << "carry: " << carry << endl;

      int digit = sum % 10;
      cout << "digit: " << digit << endl;
      result->appendNode(digit);
    } else {
      result->appendNode(sum);
    }

    curr_l1 = curr_l1->next;
    curr_l2 = curr_l2->next;
  }
  result->printList();
  return (*result);
}
