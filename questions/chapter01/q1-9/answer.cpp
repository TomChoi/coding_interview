using namespace std;

// String Rotation:Assumeyou have a method isSubstringwhich checks if one word is a substring
// of another. Given two strings, sl and s2, write code to check if s2 is a rotation of sl using only one
// call to isSubstring (e.g., "waterbottle" is a rotation of"erbottlewat").


size_t move_next (size_t index, size_t size) {
  size_t cursor = index;
  cursor++;
  cursor = (cursor % (size - 1) == 0) ? 0 : cursor;
  return cursor;
}

bool Answer(string s1, string s2){

  // rotation의 조건
  // 1. 문자의 개수가 일치
  size_t len1 = s1.size();
  size_t len2 = s2.size();

  if (len1 != len2)
    return false;

  // 2. 문자의 순서가 일치
  // 각 문자의 순서가 일치하도록 변경
  // s1에서 첫 번째 문자의  개수를 센다.
  // s1에서 첫 번째 문자가 있는 인덱스를 기록한다.
  size_t i = 0;
  size_t start_index = 0, j = 0;
  bool isRotation = false;

  while (i < len1) {
    if (s1[i] == s2[j]) {
      // j = move_next(j, len1);
      j++;
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
