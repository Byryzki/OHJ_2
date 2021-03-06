#include <iostream>
#include <string>
#ifndef RECURSIVE_FUNC
#define RECURSIVE_FUNC
#endif

bool palindrome_recursive(std::string s)
{
  RECURSIVE_FUNC
  // Do not remove RECURSIVE_FUNC declaration, it's necessary for automatic testing to work
  // ------------


  // Add your implementation here
  if(s.size() <= 1)
  {
    return true;
  }
  else
  {
    char eka = s[0];
    char vika = s[s.size()-1];
    std::string p = s.substr(1, s.size()-2);

    if(eka == vika)
    {
      return palindrome_recursive(p);
    }
    else if(eka != vika)
    {
        return false;
    }

  }
  return false;
}

// Do not modify rest of the code, or the automated testing won't work.
#ifndef UNIT_TESTING
int main()
{
    std::cout << "Enter a word: ";
    std::string word;
    std::cin >> word;

    if(palindrome_recursive(word)){
        std::cout << word << " is a palindrome" << std::endl;
    } else {
        std::cout << word << " is not a palindrome" << std::endl;
    }
}
#endif
