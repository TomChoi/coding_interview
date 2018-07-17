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
  int type = s1.size() - s2.size();
  if( type == 0 ){
    // replace
    int diff_count = 0;
    for( int k=0; k < s1.size(); k++){
      if( s1[k] != s2[k] ){
        diff_count++;
      }
    }
    if( diff_count <= 1){
      return true;
    }
  } else if( type == 1 ){
    for( int i=0; i < s1.size(); i++ ){
      int r_index = 0;
      for( int k=0; k < s1.size(); k++ ){

        if( k != i ){
          if( s1[k] != s2[r_index]){
            break;
          }
          r_index++;
        }
        if( k == s1.size() -1 ){
          return true;
        }
      }
    }
  } else if ( type == -1){
    for( int i=0; i < s2.size(); i++ ){
      int l_index = 0;
      for( int k=0; k < s2.size(); k++ ){

        if( k != i ){
          if( s1[l_index] != s2[k]){
            break;
          }
          l_index++;
        }
        if( k == s2.size() -1 ){
          return true;
        }
      }
    }
  }else{
    return false;
  }
  return false;
}
