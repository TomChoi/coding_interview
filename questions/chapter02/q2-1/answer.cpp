#include "LinkedList.h"

using namespace std;

// Remov Dups! Write code to remove duplicates from an unsorted linked list.
// FOLLOW UP
// How would you solve this problem if a temporary buffer is not allowed?
// Hints: #9, #40

Node<char>* get_node_at(LinkedList<char>& list, int index) {

  int len = list.getLength();
  int the_number_of_move = index;

  Node<char>* head_node = list.head;
  Node<char>* current_node = head_node;
  Node<char>* next_node = current_node->next;

  while (the_number_of_move > 0) {
    current_node = next_node;
    next_node = current_node->next;
    the_number_of_move--;
  }
  return current_node;
}

void remove_node_at(LinkedList<char>& list, int index, int index_previous) {

  // suture the node
  Node<char>* previous_node = get_node_at(list, index_previous);
  Node<char>* current_node = get_node_at(list, index);
  Node<char>* next_node = current_node->next;

  list.deleteNode(current_node);
  if (next_node != nullptr) {
    previous_node->next = next_node;
  } else {
    previous_node->next = nullptr;
  }
}

LinkedList<char>& RemoveDups(LinkedList<char>& list){
  // write your answer

  int len = list.getLength();
  cout << "The length of the linked list is " << len << endl;
  for (size_t i = 0; i < len; i++) {

    Node<char>* first_node = get_node_at(list, i);
    char first_data = first_node->data;
    
    for (size_t j = i + 1; j < len; j++) {
      Node<char>* second_node = get_node_at(list, j);
      char second_data = second_node->data;

      if (first_data == second_data) {
        remove_node_at(list, j, j - 1);
        len -= 1;
        i = -1;
      }
    }
  }

  return list;
}
