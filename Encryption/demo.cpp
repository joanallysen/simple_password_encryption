#include <iostream>
#include <string>
#include <vector>

#include "encrypt.h"

using namespace std;

int main()
{
	EncryptUtil encryptUtils;

	string password{};
	cout << "Please input a password that you want to encrypt : ";
	cin >> password;
	
	// To encrypt line
	string encryptedPassword = encryptUtils.encrypt(password);
	cout << "Encrypted password: " << encryptedPassword << endl;

	// To decrypt line, private key is required which is the original password.
	string decryptedPassword = encryptUtils.decrypt(encryptedPassword, password);
	cout << "Decrypted password: " << decryptedPassword << endl;
	
	/*
	
	-- Brute Force Method Requires 256 Tries --
	vector<string> ss{};
	for (int i = 0; i < 256; i++) {
		string s{};
		for (int j = 0; j < encryptedPassword.length(); j++) {
			s += (int(encryptedPassword[j]) + i);
		}
		ss.push_back(s);
	}

	for (const auto i : ss) {
		cout << i << "   ";

	}*/
}