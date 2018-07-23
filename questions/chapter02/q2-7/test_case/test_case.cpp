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
    Node<int>* copyNode = newNode;
    unique_ptr<Node<int>> a(newNode);
    // unique_ptr<Node<int>> b(copyNode);

    // input1.appendExternNode(move(a));
    // input2.appendExternNode(move(b));
    //
    // input1.printList();
    // input2.printList();
    //
    // input1.head->data = 5;
    //
    // input1.printList();
    // input2.printList();
  }
}
