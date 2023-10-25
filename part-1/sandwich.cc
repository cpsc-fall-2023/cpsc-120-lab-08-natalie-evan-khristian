// Natalie Segura
// nsegura@csu.fullerton.edu
// @nataliesegura
// Partners: @Ezlopez2145, @Khristianmejia1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }

  std::string protein;
  std::string bread;
  std::string condiment;

  protein = arguments[1];
  bread = arguments[2];
  condiment = arguments[3];
  std::cout << "Your order:\nA " << protein << " sandwich on " << bread
            << " with " << condiment << ".\n";

  return 0;
}
