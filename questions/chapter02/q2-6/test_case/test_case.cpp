#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding test Chapter02", "[Question06]" ) {
  SECTION("1"){
    LinkedList<char> input;
    input.appendNode('t');
    input.appendNode('a');
    input.appendNode('c');
    input.appendNode('o');
    input.appendNode(' ');
    input.appendNode('c');
    input.appendNode('a');
    input.appendNode('t');

    REQUIRE( Palindrome(input) == true );
  }

  SECTION("2"){
    LinkedList<char> input;
    input.appendNode('h');
    input.appendNode('e');
    input.appendNode('l');
    input.appendNode('l');
    input.appendNode('o');

    REQUIRE( Palindrome(input) == false );
  }

  SECTION("3"){
    LinkedList<char> input;
    input.appendNode('a');
    input.appendNode('a');
    input.appendNode('b');
    input.appendNode('b');
    input.appendNode('b');

    REQUIRE( Palindrome(input) == true );
  }

  SECTION("4"){
    LinkedList<char> input;

    for( int i=0; i < 1001; i++){
      if( 1001 / 2 == i ){
        input.appendNode('b');
      }else{
        input.appendNode('a');
      }
    }

    REQUIRE( Palindrome(input) == true );
  }

  SECTION("5"){
    LinkedList<char> input;
    int num = 1001;
    for( int i=0; i < num; i++){
      if( num / 2 == i || (num / 2) + 1 == i){
        input.appendNode('b');
      }else{
        input.appendNode('a');
      }
    }

    REQUIRE( Palindrome(input) == false );
  }
}
