// test: accessing terminal and executing shell commands using c++

#include <stdlib.h>
#include <iostream>

void test_shell_commands(void) {
  // system command testing
  char * commandInput;
  while (true) {
    std::cout << "enter command> ";
    std::cin >> commandInput;
    if (commandInput == nullptr) {
      std::cout << " " << std::endl;
    } else if (commandInput == "exit") {
      break;
    } else {
      system(commandInput);
    }
  }
  std::cout << "program exited..." << std::endl;
}

int main() {
  test_shell_commands();
  return 0;
}