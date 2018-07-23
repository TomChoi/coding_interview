#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"
#include <memory>
#include <iostream>

TEST_CASE( "Coding test Chapter02", "[Question07]" ) {

  SECTION("1"){
    LinkedList<int> input;

    unique_ptr<Node<int>> a(new Node<int>(1));

    input.appendExternNode(move(a));
  }
}
