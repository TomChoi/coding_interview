using namespace std;

// Delete Middle Node: Implement an algorithm to delete a node in the middle
// (i.e., any node but the  rst and last node, not necessarily the exact middle)
// of a singly linked list, given only access to that node.
// EXAMPLE
// lnput:the node c from the linked list a->b->c->d->e->f
// Result: nothing is returned, but the new linked list looks like a->b->d->e- >f

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

  void deleteNode(Node<T>* node){
    delete node;
  }
};

LinkedList<char>& DeleteMiddleNode(LinkedList<char>& list){

  int MINIMUM_COUNT_FOR_GET_MIDDLE = 3;
  Node<char>* current = list.head;
  int list_length = list.getLength();
  if( list_length >= MINIMUM_COUNT_FOR_GET_MIDDLE ){

    int middle = (list_length % 2) == 0 ? list_length / 2 : (list_length / 2) +1;
    for(int i=1; i < middle - 1; i++){
      current = current->next;
    }
    current->next = current->next->next;
    return list;
  }else{
    return list;
  }
}
