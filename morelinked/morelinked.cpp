#include<iostream>
using namespace std;

class Node {

	public:
		int data;
		Node *next;
		Node(int d){
			data = d;
			next = NULL;
		}
};



class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {
		Node *temp = head;
		if(head == NULL)
			return head;

		Node *temp1 = temp->next;

		Node *prev = temp;
		
		while(temp != NULL)
		{
			 while(temp1 != NULL){
			 
			 	if(temp1->data == temp->data) {
						
					prev->next = temp1->next;
					Node *t = temp1;
					temp1 = temp1->next;
					free(t);

					if(temp1 == NULL)
						break;

					continue;
				}

				prev = temp1;
				temp1 = temp1->next;
			 
			 }

			 temp = temp->next;
	             if(temp == NULL)
        	        break;

			 temp1 = temp->next;
			 prev = temp;
		}

		return head;
		
          }

          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;

               }
                    return head;


          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};



int main()
{
	
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);	


}
