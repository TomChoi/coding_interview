using namespace std;

bool CheckPermutation(string s1, string s2){
  if( s1.size() != s2.size() ){
    return false;
  }

  for( int i=0; i < s1.size(); i++)
  {
    for( int j=0; j < s2.size(); j++)
    {
      if( s1[i] == s2[j] ){
        s2[j] = 0;
      }
    }
  }

  for( int i=0; i < s2.size(); i++){
    if( s2[i] != 0 )
      return false;
  }

  return true;
}
