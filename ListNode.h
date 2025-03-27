#pragma once
#include <vector>

using namespace std;

struct ListNode {
public:
	int val;
	ListNode* next;
	ListNode();
	ListNode(int x);
	ListNode(int x, ListNode* next);
	
	void list_init(vector<int> head_data, ListNode* list);
	void clear_list(ListNode* list);
	void list_to_string(ListNode* list);

};

