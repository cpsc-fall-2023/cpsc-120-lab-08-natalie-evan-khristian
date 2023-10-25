// Natalie Segura
// nsegura@csu.fullerton.edu
// @nataliesegura
// Partners: @Ezlopez2145, @Khristianmejia1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum = 0.0;
  bool first = true;
  for (const std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      double num = std::stod(argument);
      sum = sum + num;
    }
  }

  int qqq = static_cast<int>(arguments.size()) - 1;
  double average = sum / qqq;

  std::cout << "average = " << average << "\n";

  return 0;
}
