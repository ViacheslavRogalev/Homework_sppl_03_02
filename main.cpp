#include<iostream>
#include <windows.h>
#include "smart_array.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	smart_array arr(3);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);

	arr.print_smart_array();

	smart_array new_array(5);
	new_array.add_element(44);
	new_array.add_element(34);
	new_array.add_element(55);
	new_array.add_element(11);

	new_array.print_smart_array();

	arr = new_array;

	std::cout << std::endl;
	arr.print_smart_array();
	new_array.print_smart_array();

	{
		smart_array new_array(arr);
		std::cout << std::endl;
		new_array.print_smart_array();
	}

	std::cout << std::endl;
	std::cout << arr.get_element(0) << std::endl;
	arr.print_smart_array();

	return 0;
}