using namespace std;

// Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
// cannot use additional data structures?

bool Answer(string s1){

  for (size_t i = 0; i < s1.size(); i++) {
    for (size_t j = i + 1; j < s1.size(); j++) {
      if (s1[i] == s1[j]) {
        return false;
      }
    }
  }
  return true;
}
