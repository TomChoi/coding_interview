#include <vector>

using namespace std;

// Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
// column are set to 0.

vector<int> Answer(vector<int> v1, int row, int columm){
  vector<int> res(v1);
  for(int i=0; i < v1.size(); i++){
    if( v1[i] == 0 ){
      int target_col = i % columm;
      int target_row = i / columm;
      for(int j=0; j<v1.size(); j++){
        if( j / columm == target_row ){
          res[j] = 0;
        }else{
          if( j % columm == target_col){
            res[j] = 0;
          }
        }
      }
    }
  }
  return res;
}
