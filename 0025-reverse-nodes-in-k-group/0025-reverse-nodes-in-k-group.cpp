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
    ListNode* kthnode(ListNode* head, int k) {
        ListNode* current = head;
        while (current != 0 && k > 1) {
            k--;
            current = current->next;
        }
        return current;
    }
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* current = head;
        while (current != NULL) {
            ListNode* front = current->next;
            current->next = prev;
            prev = current;
            current = front;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k <= 1)
            return head;
        ListNode* temp = head;
        ListNode* prevnode = NULL;
        while (temp != NULL) {
            ListNode* knode = kthnode(temp, k);
            if (knode == NULL) {
                if (prevnode)
                    prevnode->next = temp;
                break;
            }
            ListNode* nexthead = knode->next;
            knode->next = NULL;
            reverse(temp);
            if (temp == head) {
                 head = knode;
            } else
                prevnode->next = knode;

            prevnode = temp;
            temp = nexthead;
        }
        return head;
    }
};