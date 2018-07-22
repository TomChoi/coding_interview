#include <vector>

using namespace std;

// Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
// column are set to 0.

template <typename T>
class Matrix {

public:
  Matrix(vector<T> matrixInVector, int num_rows, int num_cols) {
    elements_ = matrixInVector;
    num_rows_ = num_rows;
    num_cols_ = num_cols;
  }

  ~Matrix() {

  }

  T get_element (int row_at, int col_at) {
    int index_of_the_element = row_at * num_cols_ + col_at;
    return elements_[index_of_the_element];
  }

  void set_value_of_a_row(int row_at, T value) {
    int first_index_of_element = row_at * num_cols_;
    for (size_t i = first_index_of_element; i < (first_index_of_element + num_cols_); ++i) {
      elements_[i] = value;
    }
  }

  void set_value_of_a_col(int col_at, T value) {
    int first_index_of_element = col_at;
    int last_index_of_element = first_index_of_element + (num_rows_-1) * num_cols_;
    for (size_t i = first_index_of_element; i <= last_index_of_element; i+=num_cols_) {
      elements_[i] = value;
    }
  }

  vector<T> as_vector() {
    return elements_;
  }

  size_t row_size() {
    return num_rows_;
  }

  size_t col_size() {
    return num_cols_;
  }

private:
  size_t num_rows_ = 0;
  size_t num_cols_ = 0;
  vector<T> elements_;
};

vector<int> Answer(vector<int> v1, int row, int columm){

  Matrix<int> M(v1, row, columm);
  set<size_t> row_to_make_zero;
  set<size_t> col_to_make_zero;
  for (size_t ri = 0; ri < M.row_size(); ++ri) {
    for (size_t ci = 0; ci < M.col_size(); ci++) {
      if(M.get_element(ri, ci) == 0) {
        row_to_make_zero.insert(ri);
        col_to_make_zero.insert(ci);
      }
    }
  }

  for (auto row_at : row_to_make_zero) {
    cout << row_at << ", ";
    M.set_value_of_a_row(row_at, 0);
  }
  cout << endl;

  cout << "Cols to make zero: " << endl;
  for (auto col_at : col_to_make_zero) {
    cout << col_at << ", ";
    M.set_value_of_a_col(col_at, 0);
  }
  cout << endl;

  return M.as_vector();
}
