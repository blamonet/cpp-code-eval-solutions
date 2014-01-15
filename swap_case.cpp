#include <iostream>
#include <fstream>
#include <string>

int main(int argc, const char* argv[])
{
  std::string line;
  std::ifstream myfile (argv[1]);
  int i = 0;
  char c;

  if (myfile.is_open()) {
    while (std::getline(myfile,line)) {
      i = 0;
      while(line[i]) {
        c = line[i];
        if (isupper(c)) {
           line[i] = tolower(c);
        } else if (islower(c)) {
           line[i] = toupper(c);
        }
        i++;
      }
      std::cout << line << std::endl;
    }
    myfile.close();
  }

  return 0;
}
