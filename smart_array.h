#pragma once

class smart_array
{
public:
	smart_array(int n);
	void add_element(int el);
	int get_element(int n);
	void print_smart_array();
	~smart_array();
	smart_array& operator=(const smart_array& arr2);
	smart_array(const smart_array& arr);

private:
	int curr_size;
	int full_size;
	int* head;
};