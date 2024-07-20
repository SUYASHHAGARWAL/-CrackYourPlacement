/*

day4

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* newHead = new ListNode(0);
        temp = newHead;
        for(int num : ans)
        {
            temp-> next = new ListNode(num);
            temp = temp-> next;
        }
        ListNode* result = newHead-> next;
        delete newHead;

        return result;
    }
};

*/