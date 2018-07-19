using namespace std;

// One Away: There are three types of edits that can be performed on strings: insert a character,
// remove a character, or replace a character. Given two strings, write a function to check if they are
// one edit (or zero edits) away.
// EXAMPLE
// pale, ple -> true
// pales, pale -> true
// pale, bale -> true
// pale, bake -> false

bool Answer(string s1, string s2){

  // multiple edits
  if (s1.size() != s2.size()) {
    // one insert or multiple edits
    size_t diff = 0;
    if (s1.size() >= s2.size()) {
      diff = s1.size() - s2.size();
    } else {
      diff = s2.size() - s1.size();
    }

    if (diff == 1) {
      if (s1.size() < s2.size()) {
        size_t startIdx = 0;
        size_t count = 0;
        for (size_t i = 0; i < s1.size(); i++) {
          for (size_t j = startIdx; j < s2.size(); j++) {
            if (s1[i] == s2[j]) {
              count++;
              startIdx = j + 1;
              break;
            }
          }
        }
        if (count == s1.size()) {
          return true;
        } else {
          return false;
        }

      } else {

        size_t startIdx = 0;
        size_t count = 0;
        for (size_t i = 0; i < s2.size(); i++) {
          for (size_t j = startIdx; j < s1.size(); j++) {
            if (s2[i] == s1[j]) {
              count++;
              startIdx = j + 1;
              break;
            }
          }
        }
        if (count == s2.size()) {
          return true;
        } else {
          return false;
        }
      }
    } else {
      return false;
    }

  } else {
    int count = 0;
    for (size_t i = 0; i < s1.size(); i++) {
      if(s1[i] != s2[i]) {
        count++;
      }
    }
    if (count == 1 || count == 0) {
      return true;
    } else {
      return false;
    }
  }
}
