/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Dummy head is a common trick to simplify list creation.
        // The result will be dummyHead->next.
        ListNode* dummyHead = new ListNode();
        ListNode* current = dummyHead;
        
        int carry = 0;
        
        // Loop as long as either list has nodes, or there is a carry.
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = 0;
            
            // If l1 is not null, add its value and move to the next node.
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            // If l2 is not null, add its value and move to the next node.
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            int total_sum = sum + carry;
            carry = total_sum / 10;
            int reminder = total_sum % 10;
            
            // Create a new node with the digit and append it to our result list.
            current->next = new ListNode(reminder);
            current = current->next;
        }
        
        ListNode* result = dummyHead->next;
        delete dummyHead; // Clean up the dummy node to prevent memory leak.
        return result;
    }
};