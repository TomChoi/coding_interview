using namespace std;

// String Compression: Implement a method to perform basic string compression using the counts
// of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
// "compressed" string would not become smaller than the original string, your method should return
// the original string. You can assume the string has only uppercase and lowercase letters (a - z).

string Answer(string s1){
  string res;
  for(int i=0; i<s1.size();){
    int same_count = 0;
    res += s1[i];
    for(int j=i; j<s1.size(); j++){
      if( s1[i] == s1[j] ){
        same_count++;
        i = j;
      }else{
        i = j;
        break;
      }
    }
    res += to_string(same_count);
    if( i == s1.size() -1 )
      break;
  }
  return res;
}
