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

    ListNode* deleteTail(ListNode* &head) {
            ListNode *current = head;
            if (head == nullptr){
                return nullptr;
            }
            else if(head->next==nullptr){
                head=nullptr;
                return head;
            }
            else {
            ListNode *current = head;
            while (current->next->next != nullptr){
                current= current->next;
                }
                current->next=nullptr;
            }
            return head;
        }
    ListNode* deleteKthNode(ListNode* &head, int k){
        if (head==nullptr){
            return nullptr;
        }
        else if(k==1){
            head=head->next;
            return head;
        }
        else{
            ListNode* current = head;
            for (int i=1;i<k-1;i++){
                current = current->next;
            }
            current->next=current->next->next;    //current->next is essentially the next value address of next of current
            return head;                          // so current->next->next is next to next if u look at it this way (current->next)->next it gives address of next to next value 
        }                                         // i.e the value stored at current next to next variable next .
    
        }
        ListNode* deleteNodeWithValueX(ListNode*& head, int X) {
        if (head == NULL)
            return head;
        if (head->data == X) {
            head = head->next;
            return head;
        }

        ListNode* current = head;
        while (current->next != NULL) {

            if (current->next->data == X) {        //similarly here current->next->data is the value of currents next data . 
                current->next = current->next->next;    
                return head; 
            }

            current = current->next;
        }

        return head;
    }

    ListNode* insertAtHead(ListNode* &head, int X) {
            ListNode* n=new ListNode(X);
            n->next=head;
            head=n;
            return head;
        }
    
    ListNode* insertAtTail(ListNode* &head, int X) {
        ListNode* n=new ListNode(X);
        if (head == nullptr){
            head = n;
        }
        else {
        ListNode* current = head;
        while (current->next != nullptr){
            current = current->next;
             }
        current->next=n;
        }
        return head;
        }

        bool search(ListNode* head, int key) {
    ListNode* current = head;

    while (current != nullptr) {
        if (current->data == key) {
            return true;
        }

        current = current->next;
    }

    return false;
    }
    
    int length(ListNode* head) {
        int count = 0;
        ListNode* current = head;

        while (current != nullptr) {
            count++;
            current = current->next;
        }

        return count;
    }

    ListNode* reverseLL(ListNode* &head){
        ListNode* temp=head;
        ListNode* previous=nullptr;
        ListNode* current=head;
        while(current->next !=nullptr){
            current->next=temp;
            current->next=previous;
            previous=current;
            current=temp;
        }
    }
};

int main() {
    int n;
    cout<<"enter number of elements: "<<endl;
    cin >> n;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    cout<<"enter "<<n<<" integers: "<<endl;
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
    head=obj.deleteTail(head);
    vector<int> result = obj.LLTraversal(head);
    cout<<"result after deleting tail and head: "<<endl;
    for (int x : result) {
        cout << x << " ";
    }
    int k;
    cout<<"enter value of kth node to be deleted: "<<endl;
    cin>>k;
    head=obj.deleteKthNode(head,k);
    result = obj.LLTraversal(head);
    cout<<"result after deleting kth element: "<<endl;
    for (int x : result) {
        cout << x << " ";
    }
    cout<<"reversed linked list with remaining elements is: "<<endl;

    return 0;
}
