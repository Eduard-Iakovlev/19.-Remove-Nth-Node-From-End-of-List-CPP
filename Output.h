#pragma once
#include <vector>
#include "ListNode.h"

using namespace std;

class Output{
public:
	Output() = default;
	void set_output_data(int example, int n, vector<int> head_data, vector<int> expected_data);
	void print_solution();
	void print_check();
private:
	int _example, _n;
	vector<int> _head_data, _expected_data;
	ListNode* _head = new ListNode(0);
	ListNode* _expected = new ListNode(0);
	ListNode* _result = new ListNode(0);

	void set_example(int example);
	void set_n(int n);
	void set_expected_data(vector<int>& expected_data);
	void set_head_data(vector<int>& head_data);
	void set_head();
	void set_expected();
	void set_result();
};

