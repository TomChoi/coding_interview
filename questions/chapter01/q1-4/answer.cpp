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
  string res = "false";

  for( int i=0; i < s1.size() - 1; i++ ){
    int same_count = 0;

      if( s1[i] == ' ' ){
        space_count++;
      } else{
        for( int j=0; j < s1.size(); j++ ){
          if( tolower(s1[i]) == tolower(s1[j]) )
            same_count++;
        }
      }
    if( (same_count % 2) == 1 ){
      odd_count++;
    }
  }

  if( (s1.size() - space_count) % 2 == 0 ){
    if( odd_count == 0 )
      res = "true";
  }else{
    if( odd_count == 1 )
      res = "true";
  }

  return res;
}
