#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

bool CheckResult(LinkedList<int>& list, int partition, int len, int left){
  Node<int>* current = list.head;
  int length = list.getLength();

  if( length != len )
    return false;

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

    REQUIRE( CheckResult( Partition(input, partition), partition, input.getLength(), left) );
  }

  SECTION("2"){
    LinkedList<int> input;
    input.appendNode(3);
    input.appendNode(5);
    input.appendNode(8);
    input.appendNode(5);
    input.appendNode(10);
    input.appendNode(2);
    input.appendNode(1);

    int partition = 10;
    int left = 6;

    REQUIRE( CheckResult( Partition(input, partition), partition, input.getLength(), left) );
  }

  SECTION("3"){
    LinkedList<int> input;
    input.appendNode(1);
    input.appendNode(1);
    input.appendNode(3);
    input.appendNode(10);
    input.appendNode(3);
    input.appendNode(25);
    input.appendNode(11);

    int partition = 11;
    int left = 5;

    REQUIRE( CheckResult( Partition(input, partition), partition, input.getLength(), left) );
  }

  SECTION("4"){
    LinkedList<int> input;
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(1);
    input.appendNode(1);
    input.appendNode(1);
    input.appendNode(1);
    input.appendNode(1);
    input.appendNode(1);
    input.appendNode(1);
    input.appendNode(1);
    input.appendNode(1);
    input.appendNode(1);
    input.appendNode(1);

    int partition = 1;
    int left = 0;

    REQUIRE( CheckResult( Partition(input, partition), partition, input.getLength(), left) );
  }

  SECTION("5"){
    LinkedList<int> input;
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);

    int partition = 10;
    int left = 0;

    REQUIRE( CheckResult( Partition(input, partition), partition, input.getLength(), left) );
  }

  SECTION("6"){
    LinkedList<int> input;
    input.appendNode(11);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);
    input.appendNode(10);


    int partition = 11;
    int left = 36;

    REQUIRE( CheckResult( Partition(input, partition), partition, input.getLength(), left) );
  }
}
