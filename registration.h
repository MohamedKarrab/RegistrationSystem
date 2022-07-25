#pragma once
using namespace std;

int  suit_urself() {

	printf("Please choose \n");
	printf("1/ Login\n");
	printf("2/ Registrate");
	cout << "\n";
	char choice = 0;
	do {
		cin >> choice;

	} while ((choice != '1') && (choice != '2'));
	return choice;
}

void login() {
	string un, pw;
	std::string username;
	std::string password;
	printf("Enter username :\n");
	cin >> username;
	printf("Enter password :\n");
	cin >> password;
	ifstream file;
	file.open(username + ".txt");
	getline(file, un);
	getline(file, pw);

	if (username == username && password == pw) {
		printf("You're in!\n");
		exit(1);
	}
	else {
		cout << "Please make sure the password and username are correct!\n";
	}

};