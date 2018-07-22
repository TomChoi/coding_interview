#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

bool CheckResult(LinkedList<int>& list, int partition, int left){
  Node<int>* current = list.head;
  int length = list.getLength();
  for( int i = 1; i <= length; i++ ){
    if( i <= left ){
      if( current->data >= partition ){
        return false;
      }
    }else{
      if( current->data < partition ){
        return false;
      }
    }
    current = current->next;
  }
  return true;
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

    LinkedList<int> res;
    res.appendNode(3);
    res.appendNode(1);
    res.appendNode(2);
    res.appendNode(10);
    res.appendNode(5);
    res.appendNode(5);
    res.appendNode(8);

    REQUIRE( CheckResult( Partition(input, partition), partition, left) );
  }
}
