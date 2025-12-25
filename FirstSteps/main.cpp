#include <iostream> // Needed in order to read or write standard input/output soooo imma do a simple "Hello world program and grow from there"

int main() {
  std::cout
      << "Hello World!\n"; // so I just found out that you can use \n to print
                           // and std::endl. The first one is called lone feed
                           // it joins the single string i think, its faster
                           // than std::endl cleans the buffer so it takes
                           // liiiittle longer. The main difference is
                           // performance if i'm correct
  std::cout << "Hello everyone!"
            << std::endl; // This is a few seconds slower or should I use ms?
                          // The International Sistem of Units says that is
                          // seconds (s) imma stick with that
  int AnInt;
  AnInt = 200;
  std::cout << AnInt << std::endl;
  // I did not update the repo I was learning about declaring and initialize
  // variables.
  // For now IDK wth to do with this little knowkledge also I learned how to
  // compile from the terminal with g++ that is less stressful that configure a
  // plugin I've been writing some simple programs with variables, basic
  // calculations just plain simple stuff. My biggest mistakes are the sintaxis,
  // I often forget to add ";", "<< or >>", "n\" and stuff I think is just lack
  // of experience and sometimes it frustates me lol.
  //
  // I knew about basic data types and operators they're almost the same in
  // every language, Also learned about standard input using "cin" Doing
  // excersises like: create a program that inputs that asks for example
  // distances in miles and the output will be converted to into km.
  //
  // EXCERSISE THAT I DID THAT STICKED IN MY MIND BC I FORGET HOW TO USE \N AND
  // THE >> <<
  // for some reason comments are not being added in the github repo
  //
  // int main() {
  // Add your code below
  // double distanceM;
  // double distanceKM;
  //
  // std::cout << "Calculate the distance in KM! Write your Miles: \n";
  // std::cin >> distanceM;

  //  distanceKM = distanceM * 1.60934;

  // std::cout << "In KM are: \n" << distanceKM << "\n";
  //
  //
  //
  //
  //
  return 0;
}
