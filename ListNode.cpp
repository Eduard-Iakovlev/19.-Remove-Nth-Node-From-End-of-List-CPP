#include "ListNode.h"
#include <iostream>

using namespace std;

ListNode::ListNode() : val(0), next(nullptr) {}

ListNode::ListNode(int x) : val(x), next(nullptr) {}

ListNode::ListNode(int x, ListNode* next) : val(x), next(next) {}

void ListNode::list_init(vector<int> head_data, ListNode* list){
    if (!head_data.empty()) {
        list->val = head_data[0];
        ListNode* current = new ListNode();
        current = list;

        for (size_t i = 1; i < head_data.size(); ++i) {
            current->next = new ListNode(head_data[i]);
            current = current->next;
        }
        current->next = nullptr;
    }
}

void ListNode::clear_list(ListNode* list){
    ListNode* current = list;
    while (current != nullptr) {
        ListNode* next_node = current->next; 
        delete current;
        current = next_node;
    }
    list = nullptr;
}

void ListNode::list_to_string(ListNode* list){
    ListNode* current = new ListNode();
	current = list;
	while (current != nullptr) {
		cout << current->val;
		if (current -> next != nullptr) cout << "->";
        current = current->next;
	}
}
