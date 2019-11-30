//============================================================================
// Name        : hello.cpp
// Author      : jerin jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

int main() {
	std::cout << "Enter your name\n" ;
	std::string username;
	std::cin>>username;
	std::cout<<std::endl<<"Hello, "<<username<<" nice to meet you"<<std::endl;
	std::string::size_type length_name;
	length_name=username.size();
	std::cout<<std::endl<<"By the way,your name is, "<<length_name<<" characters long"<<std::endl;


	return 0;
}
