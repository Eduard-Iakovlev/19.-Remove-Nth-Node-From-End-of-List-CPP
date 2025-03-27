#include "Output.h"
#include "Solution.h"
#include "Check.h"
#include <iostream>

using namespace std;

void Output::set_output_data(int example, int n, vector<int> head_data, vector<int> expected_data){
	set_example(example);
	set_n(n);
	set_expected_data(expected_data);
	set_head_data(head_data);
	set_head();
	set_expected();
}

void Output::print_solution(){
	ListNode* list = new ListNode();
	cout << "============ Пример № " << _example << "=============" << endl;
	cout << " Входные данные: " << endl;
	cout << " список: ";
	list->list_to_string(_head);
	cout << endl;
	cout << " узел: " << _n << endl;
	cout << " Ожидаемый результат: ";
	list->list_to_string(_expected);
	cout << endl;
	cout << " Фактический результат: ";
	set_result();
	list->list_to_string(_result);
	cout << endl;
	cout << "============ Проверка =============" << endl;
	print_check();
	cout << "===================================\n" << endl;
}

void Output::print_check(){
	Check check;
	(check.check_solution(_expected, _result)) ? cout << " Тест пройден!" << endl : cout << " Тест провален!!!" << endl;
}

void Output::set_example(int example){
	_example = example;
}

void Output::set_n(int n){
	_n = n;
}

void Output::set_expected_data(vector<int>& expected_data){
	_expected_data = expected_data;
}

void Output::set_head_data(vector<int>& head_data){
	_head_data = head_data;
}

void Output::set_head(){
	ListNode* list = new ListNode();
	list->clear_list(_head);
	_head = new ListNode();
	list->list_init(_head_data, _head);
}

void Output::set_expected(){
	ListNode* list = new ListNode();
	list->clear_list(_expected);
	_expected = new ListNode();
	if (_expected_data.size() == 0) {
		_expected = nullptr;
		return;
	}
	list->list_init(_expected_data, _expected);
}

void Output::set_result(){
	Solution solution;
	_result = solution.removeNthFromEnd(_head, _n);
}


