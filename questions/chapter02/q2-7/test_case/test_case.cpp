#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"
#include <memory>
#include <iostream>

TEST_CASE( "Coding test Chapter02", "[Question07]" ) {

  SECTION("1"){
    LinkedList<int> input1;
    LinkedList<int> input2;

    Node<int>* newNode = new Node<int>(1);

    input1.appendExternNode(newNode);

    input2.appendExternNode(newNode);

    REQUIRE( Intersection( input1, input2 ) == newNode );
  }

  SECTION("2"){
    LinkedList<int> input1;
    LinkedList<int> input2;

    Node<int>* newNode = new Node<int>(3);

    input1.appendNode(1);
    input1.appendExternNode(newNode);

    input2.appendNode(1);
    input2.appendExternNode(newNode);

    REQUIRE( Intersection( input1, input2 ) == newNode );
  }

  SECTION("3"){
    LinkedList<int> input1;
    LinkedList<int> input2;

    Node<int>* newNode = new Node<int>(3);

    input1.appendNode(3);
    input1.appendNode(3);
    input1.appendNode(3);
    input1.appendExternNode(newNode);
    input1.appendNode(3);
    input1.appendNode(3);
    input1.appendNode(3);
    input1.appendNode(3);
    input1.appendNode(3);

    input2.appendExternNode(newNode);
    input2.appendNode(3);
    input2.appendNode(3);
    input2.appendNode(3);
    input2.appendNode(3);
    input2.appendNode(3);

    REQUIRE( Intersection( input1, input2 ) == newNode );
  }

  SECTION("4"){
    LinkedList<int> input1;
    LinkedList<int> input2;

    Node<int>* newNode = new Node<int>(1);


    input1.appendExternNode(newNode);
    input1.appendNode(1);
    input1.appendNode(1);
    input1.appendNode(1);
    input1.appendNode(1);
    input1.appendNode(1);

    input2.appendExternNode(newNode);

    REQUIRE( Intersection( input1, input2 ) == newNode );
  }

  SECTION("5"){
    LinkedList<int> input1;
    LinkedList<int> input2;

    Node<int>* newNode = new Node<int>(12315);

    input1.appendNode(512);
    input1.appendNode(2231);
    input1.appendNode(1123);
    input1.appendExternNode(newNode);
    input1.appendNode(23);
    input1.appendNode(412);
    input1.appendNode(1643);
    input1.appendNode(1231);
    input1.appendNode(12315);

    input2.appendNode(112);
    input2.appendNode(12312);
    input2.appendNode(2312);
    input2.appendNode(312);
    input2.appendNode(12312);
    input2.appendNode(18812);
    input2.appendNode(1992);
    input2.appendExternNode(newNode);
    input2.appendNode(1);
    input2.appendNode(12);
    input2.appendNode(1312);
    input2.appendNode(1212);
    input2.appendNode(1123);

    REQUIRE( Intersection( input1, input2 ) == newNode );
  }
}
