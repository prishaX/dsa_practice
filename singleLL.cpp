#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : data(x), next(next) {}
};

class Solution {
public:
    vector<int> LLTraversal(ListNode* head) {
        vector<int> ans;
        ListNode* current = head;
        while (current != nullptr) {
            ans.push_back(current->data);
            current = current->next;
        }
        return ans;
    }
    ListNode* deleteHead(ListNode* &head) {
        if (head == nullptr){
            return nullptr;
        }
        head=head->next;
        return head;
    }
};

int main() {
    int n;
    cin >> n;
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    // Input and create linked list
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        ListNode* newNode = new ListNode(value); //creating new dynamic object everytime to store values
        if (head == nullptr) {
            // First node
            head = newNode;
            tail = newNode;
        }
        else {
            // Connect previous node to new node
            tail->next = newNode;
            // Move tail to the new node
            tail = newNode;
        }
    }
    // Send head to the function
    Solution obj;
    head=obj.deleteHead(head);
    vector<int> result = obj.LLTraversal(head);
    // Print result
    for (int x : result) {
        cout << x << " ";
    }
    

    return 0;
}
