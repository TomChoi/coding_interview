using namespace std;

// String Rotation:Assumeyou have a method isSubstringwhich checks if one word is a substring
// of another. Given two strings, sl and s2, write code to check if s2 is a rotation of sl using only one
// call to isSubstring (e.g., "waterbottle" is a rotation of"erbottlewat").

bool Answer(string s1, string s2){

  if( s1.size() != s2.size() )
    return false;


  for( int k = 0; k < s2.size(); k++){
    if( s1[0] == s2[k] ){
      for( int i=0; i < s1.size(); i++ ){
        int index = i + k;
        if( index >= s2.size() ){
          index %= s2.size();
        }
        if( s1[i] != s2[index] ){
          break;
        }else{
          if( i == s1.size() -1 ){
            return true;
          }
        }
      }
    }
  }

  return false;
}
