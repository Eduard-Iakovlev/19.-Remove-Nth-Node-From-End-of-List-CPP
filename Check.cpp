#include "Check.h"

bool Check::check_solution(ListNode* expected, ListNode* result){
    _curr_exp = expected;
    _curr_res = result;

    while (_curr_exp != nullptr && _curr_res != nullptr) {
        if (_curr_exp == nullptr || _curr_res == nullptr) return false;
        if (_curr_exp->val != _curr_res->val) return false;
        _curr_exp = _curr_exp->next;
        _curr_res = _curr_res->next;
    }
    return true;
}
