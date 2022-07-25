#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include "registration.h"


int main() {

	int choice;
	while (true) {
		choice = suit_urself();

		switch (choice) {

		case '1': login(); break;
			
		case '2':
			//registrate
			std::string username;
			std::string password;
			std::cout << "Enter a new username please !\n";
			std::cin >> username;
			std::cout << "Enter your password please!\n";
			std::cin >> password;
			ofstream file;
			file.open(username + ".txt");
			file << username << endl << password << endl;
			break;
		}
	}
	return 0;
}