#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>


void tester(void);

void tester(void) {
	char change_dir_command[4] = "cd ";
	const char * path = "C:/Users/yashs/Desktop/giproman";
	
	char * command = strcat(change_dir_command, path);
	
	// git command to check the current project status
	const char * git_command = "git status";
	
	// std::cout << "path> " << path << std::endl;
	// std::cout << "cd> " << change_dir_command << std::endl;
	
	system("cmd \n");
	// writing path validator command
	system(command);
//	sleep(2000);
	system(git_command);

}

int main() {
	tester();
	return 0;
}
