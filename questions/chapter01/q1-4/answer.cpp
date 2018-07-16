using namespace std;

// Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome.
// A palindrome is a word or phrase that is the same forwards and backwards. A permutation
// is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
// EXAMPLE
// Input: Tact Coa
// Output: True (permutations: "taco cat", "atco eta", etc.)

bool Answer(string s1){

  int odd_count = 0;
  int space_count = 0;
  bool res = false;

  for( int i=0; i < s1.size(); i++ ){
    bool isOdd = true;

    if( s1[i] == ' ' ){
      space_count++;
    } else if( s1[i] != '\0' ){
      for( int j= i + 1; j < s1.size(); j++ ){
        if( tolower(s1[i]) == tolower(s1[j]) ){
          isOdd = false;
          s1[j] = '\0';
          break;
        }
      }
      if( isOdd ){
        odd_count++;
      }
    }
  }

  if( (s1.size() - space_count) % 2 == 0 ){
    if( odd_count == 0 )
      res = true;
  }else{
    if( odd_count == 1 )
      res = true;
  }

  return res;
}
