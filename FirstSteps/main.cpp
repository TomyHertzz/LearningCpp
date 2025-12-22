#include <iostream> // Needed in order to read or write standard input/output soooo imma do a simple "Hello world program and grow from there"

int main() {
  std::cout
      << "Hello World!\n"; // so I just found out that you can use \n to print
                           // and std::endl. The first one is called lone feed
                           // it joins the single string i think, its faster
                           // than std::endl cleans the buffer so it takes
                           // liiiittle longer. The main difference is
                           // performance if i'm correct
  std::cout << "Hello everyone!" << std::endl;
  return 0;
}
