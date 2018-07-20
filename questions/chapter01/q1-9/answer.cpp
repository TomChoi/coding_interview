using namespace std;

// String Rotation:Assumeyou have a method isSubstringwhich checks if one word is a substring
// of another. Given two strings, sl and s2, write code to check if s2 is a rotation of sl using only one
// call to isSubstring (e.g., "waterbottle" is a rotation of"erbottlewat").

bool Answer(string s1, string s2){

  size_t len1 = s1.size();
  size_t len2 = s2.size();

  if (len1 != len2)
    return false;

  size_t i = 0;
  size_t start_index = 0, j = 0;
  bool isRotation = false;

  while (i < len1) {
    if (s1[i] == s2[j]) {
      j = (j == len1 - 1) ? 0 : ++j;
      i++;
      if(i == len1 - 1) {
        isRotation = true;
        break;
      } else {
        continue;
      }

    } else {
      i = 0;
      start_index++;
      j = start_index;
      continue;
    }
  }

  return isRotation;
}
