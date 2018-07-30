#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

template< class T >
struct Node{
public:
  T data;
  Node* next;

  Node(T d){
    data = d;
    next = nullptr;
  }
};

template< class T >
class MyStack
{
public:
  Node<T>* head;

  MyStack(){
    head = nullptr;
  }

  ~MyStack(){
    // Node<T>* current = head;
    // Node<T>* prev = nullptr;
    // while( current != nullptr ){
    //   prev = current;
    //   current = current->next;
    //   deleteNode(prev);
    // }
  }
};

#endif
