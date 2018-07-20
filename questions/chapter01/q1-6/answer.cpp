using namespace std;

// String Compression: Implement a method to perform basic string compression using the counts
// of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
// "compressed" string would not become smaller than the original string, your method should return
// the original string. You can assume the string has only uppercase and lowercase letters (a - z).

template<typename T>
string to_string(T t) {
  stringstream ss;
  ss << t;
  return ss.str();
}

string compress_phrase(string a_phrase)
{
  string a_compressed_phrase;

  char a_target_character = a_phrase[0];
  size_t the_number_of_continuous_characters = 0;

  for (size_t i = 0; i < a_phrase.size();) {
    if (a_target_character == a_phrase[i]) {
      the_number_of_continuous_characters++;
      i++;
    } else {
      a_compressed_phrase += to_string(a_target_character);
      a_compressed_phrase += to_string(the_number_of_continuous_characters);
      a_target_character = a_phrase[i];
      the_number_of_continuous_characters = 0;
      continue;
    }
  }
  a_compressed_phrase += to_string(a_target_character);
  a_compressed_phrase += to_string(the_number_of_continuous_characters);

  return a_compressed_phrase;
}

string Answer(string s1){
  cout << "==============================================" << endl;
  string a_original_phrase(s1);
  string a_compressed_phrase = compress_phrase(a_original_phrase);
  size_t the_size_of_the_original_phrase = a_original_phrase.size();
  size_t the_size_of_the_compressed_phrase = a_compressed_phrase.size();

  cout << "The original version of phrase is " << a_original_phrase.c_str() << endl;
  cout << "And its size is " << the_size_of_the_original_phrase << endl;
  cout << "==============================================" << endl;
  cout << "The compressed version of phrase is " << a_compressed_phrase.c_str() << endl;
  cout << "And its size is " << the_size_of_the_compressed_phrase << endl;
  cout << "==============================================" << endl;
  cout << "Compression rate is " << ( static_cast<float>(the_size_of_the_compressed_phrase) / static_cast<float>(the_size_of_the_original_phrase) * 100.0f) << "%" << endl;

  if (the_size_of_the_original_phrase >= the_size_of_the_compressed_phrase) {
    return a_compressed_phrase;
  } else {
    return a_original_phrase;
  }
}
