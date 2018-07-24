#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding test Chapter02", "[Question05]" ) {
  SECTION("1"){
    LinkedList<int> input1;
    input1.appendNode(7);
    input1.appendNode(1);
    input1.appendNode(6);

    LinkedList<int> input2;
    input2.appendNode(5);
    input2.appendNode(9);
    input2.appendNode(2);

    LinkedList<int> answer;
    answer.appendNode(2);
    answer.appendNode(1);
    answer.appendNode(9);

    REQUIRE( SumLists(input1, input2) == answer);
  }

  SECTION("2"){
    LinkedList<int> input1;
    input1.appendNode(0);
    input1.appendNode(5);
    input1.appendNode(2);
    input1.appendNode(1);
    input1.appendNode(2);
    input1.appendNode(1);

    LinkedList<int> input2;
    input2.appendNode(0);
    input2.appendNode(0);
    input2.appendNode(1);
    input2.appendNode(7);
    input2.appendNode(2);


    LinkedList<int> answer;
    answer.appendNode(0);
    answer.appendNode(5);
    answer.appendNode(3);
    answer.appendNode(8);
    answer.appendNode(4);
    answer.appendNode(1);

    REQUIRE( SumLists(input1, input2) == answer);
  }

  SECTION("3"){
    LinkedList<int> input1;
    input1.appendNode(1);
    input1.appendNode(3);
    input1.appendNode(2);

    LinkedList<int> input2;
    input2.appendNode(0);
    input2.appendNode(0);
    input2.appendNode(1);
    input2.appendNode(7);
    input2.appendNode(3);
    input2.appendNode(3);
    input2.appendNode(3);
    input2.appendNode(3);


    LinkedList<int> answer;
    answer.appendNode(1);
    answer.appendNode(3);
    answer.appendNode(3);
    answer.appendNode(7);
    answer.appendNode(3);
    answer.appendNode(3);
    answer.appendNode(3);
    answer.appendNode(3);

    REQUIRE( SumLists(input1, input2) == answer);
  }

  SECTION("4"){
    LinkedList<int> input1;
    input1.appendNode(8);
    input1.appendNode(6);
    input1.appendNode(8);
    input1.appendNode(9);
    input1.appendNode(9);

    LinkedList<int> input2;
    input2.appendNode(9);
    input2.appendNode(9);
    input2.appendNode(8);
    input2.appendNode(7);
    input2.appendNode(8);

    LinkedList<int> answer;
    answer.appendNode(7);
    answer.appendNode(6);
    answer.appendNode(7);
    answer.appendNode(7);
    answer.appendNode(8);
    answer.appendNode(1);

    REQUIRE( SumLists(input1, input2) == answer);
  }
}
