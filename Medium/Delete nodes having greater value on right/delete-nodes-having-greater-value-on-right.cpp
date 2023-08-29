//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *new_head)
    {
        // your code goes here
         new_head = rev(new_head);
            Node* node = new_head;

            while (node != nullptr && node->next != nullptr)
            {
                if (node->data > node->next->data) {
                    node->next = node->next->next;
                } else {
                    node = node->next;
                }
            }

            return rev(new_head);
    }
     Node* rev(Node* new_head) {
        Node* previos = nullptr;
        Node* next = nullptr;

        while (new_head != nullptr) {
            next = new_head->next;
            new_head->next = previos;
            previos = new_head;
            new_head = next;
        }

        return previos;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends