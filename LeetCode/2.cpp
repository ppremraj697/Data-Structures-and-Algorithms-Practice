#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;

        ListNode *ans = NULL;
        ListNode *temp = NULL;

        int carry = 0;

        while (temp1 != NULL && temp2 != NULL)
        {
            int tempSum = temp1->val + temp2->val + carry;
            ListNode *newNode = new ListNode(tempSum % 10);

            carry = tempSum / 10;

            if (ans == NULL)
            {
                ans = newNode;
                temp = ans;
            }
            else
            {
                temp->next = newNode;
                temp = newNode;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while (temp1 != NULL)
        {
            int tempSum = temp1->val + carry;
            ListNode *newNode = new ListNode(tempSum % 10);

            carry = tempSum / 10;

            temp->next = newNode;
            temp = newNode;
            temp1 = temp1->next;
        }

        while (temp2 != NULL)
        {
            int tempSum = temp2->val + carry;
            ListNode *newNode = new ListNode(tempSum % 10);

            carry = tempSum / 10;

            temp->next = newNode;
            temp = newNode;
            temp2 = temp2->next;
        }

        if (carry)
        {
            ListNode *newNode = new ListNode(carry);
            temp->next = newNode;
            temp = newNode;
        }

        return ans;
    }
};

int main()
{
    return 0;
}