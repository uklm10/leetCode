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
    bool isPalindrome(ListNode* head) {
         ListNode* slowPtr = head;
        ListNode* fastPtr = head->next;
      
        // Move fastPtr by two and slowPtr by one step
        // When fastPtr reaches the end, slowPtr will be at the middle
        while (fastPtr && fastPtr->next) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }

        // Reverse the second half of the list
        ListNode* prevNode = nullptr;
        ListNode* currentNode = slowPtr->next;
        while (currentNode) {
            ListNode* nextTemp = currentNode->next;
            currentNode->next = prevNode;
            prevNode = currentNode;
            currentNode = nextTemp;
        }

        // Compare the reversed second half with the first half
        while (prevNode) {
            // If the values are different, then it's not a palindrome
            if (prevNode->val != head->val) {
                return false;
            }
            // Move to the next nodes in both halves
            prevNode = prevNode->next;
            head = head->next;
        }

        // All values matched, so it is a palindrome
        return true;
    }
};