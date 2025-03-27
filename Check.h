#pragma once
#include "ListNode.h"

class Check{
public:
	Check() = default;
	bool check_solution(ListNode* expected, ListNode* result);
private:
	ListNode* _curr_exp = new ListNode();
	ListNode* _curr_res = new ListNode();
};

