#include <iostream>
using namespace std;
//1 2 3 4 5 6 7
class queue{
  
  public:
  int front;
  int rear;
  int len;
  int* q;
  queue(int size){
      len=size;
      q=new int[len];
      front=-1;
      rear=-1;
  }
  bool isempty(){
      if(front== -1 && rear==-1){
          return true;
      }
      else
      return false;
  }
  bool isfull(){
      if(rear== (len-1)){
          return true;
      }
      else
      return false;
  }
  void enqueue(int val){
      if(isfull()){
          cout<<"Q is full"<<endl;
      }
      else{
          if(isempty()){
              front=0;
          }
          rear++;
          q[rear]= val;
      }
  }
  void dequeue(){
      if(isempty()){
          cout<<"Q is empty"<<endl;
      }
else if(front==rear){
          front=rear=-1;
      }
      else{
         front++;
      }
  }
  void display(){
      for(int i=front;i<=rear;i++){
          cout<<q[i]<<"  ";
      }
      cout<<endl;
  }
};
int main() {
    queue q1(10);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(7);
    q1.enqueue(8);
    q1.enqueue(9);
    q1.display();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.display();
    

    return 0;
}


#include <iostream>
using namespace std;
//1 2 3 4 5 6 7
class queue{
  
  public:
  int front;
  int rear;
  int len;
  int* q;
  queue(int size){
      len=size;
      q=new int[len];
      front=-1;
      rear=-1;
  }
  bool isempty(){
      if(front== -1 && rear==-1){
          return true;
      }
      else
      return false;
  }
  bool isfull(){
      if(front==(rear+1)%len){
          return true;
      }
      else
      return false;
  }
  void enqueue(int val){
      if(isfull()){
          cout<<"Q is full"<<endl;
      }
      else{
          if(isempty()){
              front=0;
          }
          rear=(rear+1)%len;
          q[rear]= val;
      }
  }
  void dequeue(){
      if(isempty()){
          cout<<"Q is empty"<<endl;
      }
      else if(front==rear){
          front=rear=-1;
      }
      else{
         front=(front+1)%len;
      }
  }
  void display(){
      int i=front ;
      while(1){
          cout<<q[i]<<"  ";
          if(i==rear){
              break;
          }
          i=(i+1)%len;
      }
      cout<<endl;
  }
};
int main() {
    queue q1(10);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(7);
    q1.enqueue(8);
    q1.enqueue(9);
    q1.display();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.display();
    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(7);
    q1.enqueue(8);
    q1.display();
    

    return 0;
}

#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int>q;
    queue<int>temp;
    q.push(4);
    q.push(7);
    q.push(11);
    q.push(20);
    q.push(5);
    q.push(9);
    int originalSize = q.size();
    int i = 0;
    while (i < originalSize / 2) {
    temp.push(q.front());
    q.pop();
    i++;
    }
    i=0;
     while(i < originalSize / 2){
         q.push(temp.front());
         temp.pop();
         q.push(q.front());
         q.pop();
         i++;
     }
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
   
    return 0;
}


#include <iostream>
#include <queue>

using namespace std;

void firstNonRepeatingCharacter(const string& input) {
    int freq[26] = {0};
    queue<char> q;

    for (char ch : input) {
        freq[ch - 'a']++;
        q.push(ch);
        while (!q.empty() && freq[q.front() - 'a'] > 1) {
            q.pop();
        }

        if (!q.empty()) {
            cout << q.front() << " ";
        } else {
            cout << "-1 ";
        }
    }
    cout << endl;
}

int main() {
    string input;
    getline(cin, input);
    string res = "";
    for (char ch : input) {
        if (ch != ' ') {
            res += ch;
        }
    }

    firstNonRepeatingCharacter(res);

    return 0;
}

#include <iostream>
#include <queue>

using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q1.push(x);
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack is empty!" << endl;
            return;
        }

        // Move all elements except last to q2
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        // Pop the last element (stack behavior)
        q1.pop();

        // Swap q1 and q2
        swap(q1, q2);
    }

    int top() {
        if (q1.empty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }

        // Move elements to q2 and remember last
        int topElement;
        while (!q1.empty()) {
            topElement = q1.front();
            q2.push(topElement);
            q1.pop();
        }

        // Swap q1 and q2
        swap(q1, q2);

        return topElement;
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;  // 30
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;  // 20

    return 0;
}


#include <iostream>
#include <queue>

using namespace std;

class Stack {
    queue<int> q;

public:
    void push(int x) {
        int sz = q.size();
        q.push(x);

        // Move all previous elements behind the new element
        for (int i = 0; i < sz; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (q.empty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        q.pop();
    }

    int top() {
        if (q.empty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;  // 30
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;  // 20

    return 0;
}

========================================================================================================================================================
                                                                 ADDITIONAL  QUESTIONS
========================================================================================================================================================

1.
Given a function n, write a function that generates and prints all binary numbers with decimal values
from 1 to n.
Input: n = 2
Output: 1, 10
https://www.geeksforgeeks.org/interesting-method-generate-binary-numbers-1-n/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

void binary(int n){
    queue<string> q;
    q.push("1");
    while(n--){
        string s1=q.front();
        q.pop();
        cout<<s1<<endl;
        string s2=s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
    
}
int main() {
    binary(10);
    
    return 0;
}

----------------------------------------------------------------------------------------------------------------------
2) 
Given a queue with random elements, we need to sort it. We are not allowed to use extra space. The
operations allowed on queue are:
1. enqueue() : Adds an item to rear of queue.
2. dequeue() : Removes an item from front of queue.
3. isEmpty() : Checks if a queue is empty.
Input: 11, 5, 4, 21
Output: 4, 5, 11, 21
https://www.geeksforgeeks.org/sorting-queue-without-extra-space/


#include <iostream>
#include <queue>
#include <climits>
using namespace std;

int findmin(queue<int>& q, int upto) {
    int s = q.size();
    int minVal = INT_MAX;

    for (int i = 0; i < s; i++) {
        int t = q.front();
        q.pop();

        if (i < upto && t < minVal) {
            minVal = t;
        }
        q.push(t);
    }
    return minVal;
}

void moveMinToRear(queue<int>& q, int minVal) {
    int s = q.size();
    bool removed = false;

    for (int i = 0; i < s; i++) {
        int t = q.front();
        q.pop();

        if (t == minVal && !removed) {
            removed = true; // remove only first occurrence
            continue;
        }
        q.push(t);
    }
    q.push(minVal);
}

void sortQueue(queue<int>& q) {
    int n = q.size();
    for (int i = 0; i < n; i++) {
        int minVal = findmin(q, n - i);
        moveMinToRear(q, minVal);
    }
}

int main() {
    queue<int> q;
    q.push(33);
    q.push(2);
    q.push(12);
    q.push(654);
    q.push(3);
    q.push(4);

    sortQueue(q);

    cout << "Sorted Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

------------------------------------------------------------------------------------------------------------
3) Given a Queue consisting of first n natural numbers (in random order). The task is to check whether
the given Queue elements can be arranged in increasing order in another Queue using a stack. The
operation allowed are:
1. Push and pop elements from the stack
2. Pop (Or Dequeue) from the given Queue.
3. Push (Or Enqueue) in the another Queue.
Input : Queue[] = { 5, 1, 2, 3, 4 }
Output : Yes
Check if a queue can be sorted into another queue using a stack - GeeksforGeeks


// CPP Program to check if a queue of first 
// n natural number can be sorted using a stack
#include <bits/stdc++.h>
using namespace std;

// Function to check if given queue element 
// can be sorted into another queue using a
// stack.
bool checkSorted(int n, queue<int>& q)
{
    stack<int> st;
    int expected = 1;
    int fnt;

    // while given Queue is not empty.
    while (!q.empty()) {
        fnt = q.front();
        q.pop();

        // if front element is the expected element
        if (fnt == expected)
            expected++;

        else {
            // if stack is empty, push the element
            if (st.empty()) {
                st.push(fnt);
            }

            // if top element is less than element which
            // need to be pushed, then return false.
            else if (!st.empty() && st.top() < fnt) {
                return false;
            }

            // else push into the stack.
            else
                st.push(fnt);
        }

        // while expected element are coming from
        // stack, pop them out.
        while (!st.empty() && st.top() == expected) {
            st.pop();
            expected++;
        }
    }

    // if the final expected element value is equal
    // to initial Queue size and the stack is empty.
    if (expected - 1 == n && st.empty())
        return true;

    return false;
}

// Driven Program
int main()
{
    queue<int> q;
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    int n = q.size();

    (checkSorted(n, q) ? (cout << "Yes") :
                         (cout << "No"));

    return 0;
}
-----------------------------------------------------------------------------------------------------------------
4) The school cafeteria offers circular and square sandwiches at lunch break, referred to by
numbers 0 and 1 respectively. All students stand in a queue. Each student either prefers square or
circular sandwiches. The number of sandwiches in the cafeteria is equal to the number of students. The
sandwiches are placed in a stack. At each step:
• If the student at the front of the queue prefers the sandwich on the top of the stack, they will take
it and leave the queue.
• Otherwise, they will leave it and go to the queue's end.
This continues until none of the queue students want to take the top sandwich and are thus
unable to eat
Input: students = [1,1,0,0], sandwiches = [0,1,0,1]
Output: 0
Number of Students Unable to Eat Lunch - LeetCode

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count0 = 0, count1 = 0;

        // count how many want 0 and how many want 1
        for (int s : students) {
            if (s == 0) count0++;
            else count1++;
        }

        // go through sandwiches
        for (int s : sandwiches) {
            if (s == 0) {
                if (count0 == 0) break; // no one wants 0
                count0--;
            } else {
                if (count1 == 0) break; // no one wants 1
                count1--;
            }
        }

        return count0 + count1; // remaining students
    }
};
