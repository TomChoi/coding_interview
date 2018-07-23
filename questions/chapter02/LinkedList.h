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
class LinkedList
{
public:
  Node<T>* head;

  LinkedList(){
    head = nullptr;
  }

  ~LinkedList(){
    Node<T>* current = head;
    Node<T>* prev = nullptr;
    while( current != nullptr ){
      prev = current;
      current = current->next;
      deleteNode(prev);
    }
  }

  bool operator==(const LinkedList& other) const {
    Node<T>* l_node = head;
    Node<T>* r_node = other.head;

    if( getLength() != other.getLength() ){
      return false;
    }

    for( int i=0; i< getLength(); i++ ){
      if( l_node->data != r_node->data ){
        return false;
      }
      l_node = l_node->next;
      r_node = r_node->next;
    }
    return true;
  }

  int getLength() const {
    int count = 0;
    if( head != nullptr ){
      count = 1;
      Node<T>* currentNode = head;
      while( currentNode->next != nullptr){
        currentNode = currentNode->next;
        count++;
      }
    }
    return count;
  }

  void appendNode(T data){
    if( head == nullptr){
      head = new Node<T>(data);
    }else{
      Node<T>* newNode = new Node<T>(data);
      Node<T>* currentNode = head;
      while( currentNode->next != nullptr ){
        currentNode = currentNode->next;
      };
      currentNode->next = newNode;
    }
  }

  void appendExternNode(std::unique_ptr< Node<T> > externNode){
    std::cout << "get extern node : " << externNode->data << std::endl;
  }

  void deleteNode(Node<T>* node){
    delete node;
  }

  void printList(){
    std::cout << "============ LinkedList ===============" << std::endl;
    Node<T>* current = head;
    int count = 0;
    while( current != nullptr ){
      std::cout << "[ " << count << " ] Data = " << current->data << std::endl;
      current = current->next;
      count++;
    }
    std::cout << "============    End     ===============" << std::endl;
  }
};

#endif
