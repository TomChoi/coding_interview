#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding test Chapter02", "[Question08]" ) {
  SECTION("1"){
    LinkedList<char> input;

    Node<char>* newNode = new Node<char>('C');

    input.appendNode('A');
    input.appendNode('B');
    input.appendExternNode(newNode);
    input.appendNode('D');
    input.appendNode('E');

    Node<char>* last_node = input.head;
    while( last_node->next != nullptr ){
      last_node = last_node->next;
    }
    last_node->next = newNode;
    input.printList();
    REQUIRE( LoopDetection( input ) == newNode );
  }

  SECTION("2"){
    LinkedList<char> input;

    Node<char>* newNode = new Node<char>('A');

    input.appendExternNode(newNode);

    Node<char>* last_node = input.head;
    while( last_node->next != nullptr ){
      last_node = last_node->next;
    }
    last_node->next = newNode;

    REQUIRE( LoopDetection( input ) == newNode );
  }

  SECTION("3"){
    LinkedList<char> input;

    Node<char>* newNode = new Node<char>('C');

    input.appendNode('A');
    input.appendNode('B');
    input.appendNode('D');
    input.appendNode('E');
    input.appendExternNode(newNode);

    Node<char>* last_node = input.head;
    while( last_node->next != nullptr ){
      last_node = last_node->next;
    }
    last_node->next = newNode;

    REQUIRE( LoopDetection( input ) == newNode );
  }

}
