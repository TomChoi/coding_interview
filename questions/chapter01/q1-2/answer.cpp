using namespace std;

// Check Permutation: Given two strings, write a method to decide if one is a permutation of the
// other.

bool CheckPermutation(string s1, string s2){

  map<char, unsigned int> c;

  if (s1.size() != s2.size())
    return false;

  for (size_t i = 0; i < s1.size(); i++) {
    c[s1[i]]++;
  }

  for (auto iter = c.begin(); iter != c.end(); iter++) {
    int count = 0;
    for (size_t i = 0; i < s2.size(); i++) {
        if (iter->first == s2[i])
          count++;
    }
    if (count != iter->second)
      return false;
  }

  return true;
}
