using namespace std;

// Remov Dups! Write code to remove duplicates from an unsorted linked list.
// FOLLOW UP
// How would you solve this problem if a temporary bu er is not allowed?
// Hints: #9, #40

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

LinkedList<char>& RemoveDups(LinkedList<char>& list){
  // wirte your answer
  Node<char>* current = list.head;
  Node<char>* prev = nullptr;
  Node<char>* willDeletedNode = nullptr;

  int TOTAL_ASCII_NUMBER = 128;
  vector<bool> isDupliate(TOTAL_ASCII_NUMBER, false);

  while( current != nullptr ){
    if( isDupliate[current->data] ){
      prev->next = current->next;
      willDeletedNode = current;
    }else{
      isDupliate[current->data] = true;
      prev = current;
    }

    current = current->next;
    if( willDeletedNode != nullptr ){
      list.deleteNode(willDeletedNode);
      willDeletedNode = nullptr;
    }
  }
  return list;
}
