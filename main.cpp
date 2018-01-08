#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>

void cout_vector(const std::vector<std::string>& vector)
{
  std::copy(std::begin(vector), std::end(vector), std::ostream_iterator<std::string>(std::cout, " "));
  std::cout << "\n";
}

int main(int argc, char* argv[])
{
  const std::vector<std::string> args(argv, argv + argc);
  cout_vector(args);
}
