#include<iostream>
using namespace std;


class Stack {

	public:
	Stack *next;
	char data;

	Stack(char data) {
		this->data = data;
		next = NULL;
	}

};


class Queue {

	public:
	Queue *next;
	char data;

	Queue(char data) {
		this->data = data;
		next = NULL;
	}

};


class Solution {
	
	Stack *head = NULL;
	Queue *head1 = NULL;
	Queue *tail = NULL;

	public:
	void pushCharacter(char ch) {
	
		if(head == NULL) {
		
			head = new Stack(ch);

		}
		else {
		
			Stack *temp = new Stack(ch);
			temp->next = head;
			head = temp;
		}
	
	}

	char popCharacter() {
	
		Stack *temp = head;
		
		head = head->next;
		char data = temp->data;
	//	free(temp);
	
		return data;
	}


	void enqueueCharacter(char ch) {
	
		if(head1 == NULL) {
		
			head1 = new Queue(ch);
			tail = head1;
		}
		else {
		
			Queue *temp = new Queue(ch);
			head1->next = temp;
			head1 = temp;
		
		}
	
	}

	char dequeueCharacter() {
	
	
		Queue *temp = tail;
		

		char data = temp->data;
	
		tail = tail->next;
	//	free(temp);
		return data;
	
	}





};




int main()
{

 string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;	

}
