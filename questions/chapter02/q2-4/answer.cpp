using namespace std;

// Partition: Write code to partition a linked list around a value x,
// such that all nodes less than x come before all nodes greater than or equal to x.
// If x is contained within the list, the values of x only need to be after the elements less than x (see below).
// The partition element x can appear anywhere in the "right partition"; it does not need to appear between the left and right partitions.
// EXAMPLE
// Input: 3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1[partition=5] Output: 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8

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
    // release all node
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
};


LinkedList<int>& Partition(LinkedList<int>& list, int partition){

  return list;
}
