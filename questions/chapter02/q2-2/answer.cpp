using namespace std;

// Return Kth to Last: Implement an algorithm to  nd the kth to last element of a singly linked list.
// Hints:#8, #25, #41, #67, #126

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

LinkedList<char>& Answer(LinkedList<char>& list, int index){
  // wirte your answer
  return list;
}
