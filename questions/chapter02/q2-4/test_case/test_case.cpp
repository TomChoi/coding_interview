#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

bool CheckResult(LinkedList<int>& list, int partition, int left, int right){
  Node<int>* current = list.head;
  bool result = false;
  int l_count = left;
  int r_count = right;
  for( int i = 0; i<list.getLength(); i++ ){
    if( current->data != partition ){
      if( current->data < partition ){
        l_count--;
      }
      if( current->data > partition && l_count == 0 ){
        r_count--;
      }
    }
    current = current->next;
  }

  if( l_count == 0 && r_count == 0 ){
    result = true;
  }

  return result;
}

TEST_CASE( "Coding test Chapter02", "[Question04]" ) {
  SECTION("1"){
    LinkedList<int> input;
    input.appendNode(3);
    input.appendNode(5);
    input.appendNode(8);
    input.appendNode(5);
    input.appendNode(10);
    input.appendNode(2);
    input.appendNode(1);

    int partition = 5;
    int left = 3;
    int right = 2;

    LinkedList<int> res;
    res.appendNode(3);
    res.appendNode(1);
    res.appendNode(2);
    res.appendNode(10);
    res.appendNode(5);
    res.appendNode(5);
    res.appendNode(8);

    REQUIRE( CheckResult( Partition(input, partition), partition, left, right) );
  }
}
