unsigned int Answer(unsigned int number){
  return number <= 1 ? number : Answer(number-1)*number;
}
