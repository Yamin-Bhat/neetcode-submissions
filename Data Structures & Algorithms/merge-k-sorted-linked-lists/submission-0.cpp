/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0){
            return nullptr;
        }
        int n = lists.size();
        set<pair<int , ListNode*>> st;

        for(auto nd : lists){
            if(nd)st.insert({nd->val , nd });
        }
        ListNode* ans = new ListNode(-1);
        ListNode* curr = ans;
        while(!st.empty()){
            pair<int,ListNode*>el=*st.begin();
            st.erase(el);

            ListNode*front=el.second->next;
            el.second->next=nullptr;
            curr->next=el.second;
            curr=curr->next;
            if(front)st.insert({front->val,front});
        }
        return ans->next;
    }
};
