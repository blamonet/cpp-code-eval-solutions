#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
  std::string line;
  std::ifstream myfile (argv[1]);

  if (myfile.is_open()) {
    while (std::getline(myfile,line)) {
      // rather use std::stoi for C++11
      std::string strTest (line);
      if (atoi(strTest.c_str()) % 2 == 0) {
        std::cout << 1 << std::endl;
      } else {
        std::cout << 0 << std::endl;
      }
    }
    myfile.close();
  }

  return 0;
}
