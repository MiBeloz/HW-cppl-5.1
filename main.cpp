#include <iostream>
#include <vector>

#include "MB_functions.h"


int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "\tВозведение в квадрат\n\n" << std::endl;
	
	int num_int = 4;
	double num_double = 5.5;
	std::vector<int> vect_int { -1, 4, 8 };
	
	std::cout << "[IN_INT]: " << num_int << std::endl;
	std::cout << "[IN_DOUBLE]: " << num_double << std::endl;
	std::cout << "[IN_VECTOR_INT]: ";
	for (const auto& it : vect_int) {
		std::cout << it << " ";
	}
	std::cout << std::endl << std::endl;
	
	num_int = MB::sqrt(num_int);
	num_double = MB::sqrt(num_double);
	vect_int = MB::sqrt(vect_int);
	
	std::cout << "[OUT_INT]: " << num_int << std::endl;
	std::cout << "[OUT_DOUBLE]: " << num_double << std::endl;
	std::cout << "[OUT_VECTOR_INT]: ";
	for (const auto& it : vect_int) {
		std::cout << it << " ";
	}
	std::cout << std::endl;
	
	system("pause > nul");
	return 0;
}
