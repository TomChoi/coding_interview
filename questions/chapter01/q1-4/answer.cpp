using namespace std;

// Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome.
// A palindrome is a word or phrase that is the same forwards and backwards. A permutation
// is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
// EXAMPLE
// Input: Tact Coa
// Output: True (permutations: "taco cat", "atco eta", etc.)

bool Answer(string s1){

  string cs;

  char sp = ' ';
  for (size_t i = 0; i < s1.size(); i++) {
    if (s1[i] != sp) {
      cs += s1[i];
    }
  }

  std::string ls(cs);
  std::transform(ls.begin(), ls.end(), ls.begin(), ::tolower);

  int expectedOddNumberCount = 0;
  if (ls.size() % 2  == 0) {
    expectedOddNumberCount = 0;
  } else {
    expectedOddNumberCount = 1;
  }

  vector<int> toggle(ls.size(), 1);

  for (size_t i = 0; i < ls.size(); i++) {
    if (toggle[i] == 1) {
      bool hasFound = false;
      for (size_t j = i + 1; j < ls.size(); j++) {
        if (ls[i] == ls[j])
        {
          toggle[j] = 0;
          hasFound = true;
          break;
        }
      }
      if (hasFound) {
        toggle[i] = 0;
      }
    }
  }

  int oddNumberCount = 0;
  for (size_t i = 0; i < toggle.size(); i++) {
    if (toggle[i] == 1) {
      oddNumberCount++;
    }
  }

  if (expectedOddNumberCount == oddNumberCount)
    return true;
  else
    return false;
}
