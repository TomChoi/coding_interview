using namespace std;

string Answer(string s1, int len){

  string res;
  for( int i=0; i < 13; i++ ){
    if( s1[i] == ' ' )
      res += "%20";
    else
      res += s1[i];
  }

  return res;
}
