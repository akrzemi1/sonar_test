#include <map>
#include <iostream>

void printingMap(const std::map<int, std::string>& map) {
  for (const auto& elem : map) { // Noncompliant
    std::cout << elem.first << ": " << elem.second << "\n";
  }
}

int main()
{
    std::map<int, std::string> map = {{1, "one"}, {2, "two"}};
    printingMap(map);
}
