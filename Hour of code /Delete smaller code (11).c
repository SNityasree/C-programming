/*Delete smaller nodes in a linked list

Problem statement

There is a singly linked list represented by the following structure:

struct node

{

int data;

struct node* next;

};

Implement the following function:

struct node* Deletenodes ( struct node* head);

The function accepts a pointer to the start of the linked list, ‘ head ’ as its argument. Delete all such nodes from the input list whose adjacent node on the right side has greater value and return the modified linked list.

Note

·        Return null if the list is empty ( Incase of python if the list is none return none).

·        Do not create a new linked list, just modify the input linked list and return it.

Example

Input

6-> 2 -> 5 -> 4 -> 9 -> 7 -> 2 -> 1 -> 5 -> 9

Output

6 -> 5 -> 9 -> 7 -> 2 -> 9

Explanation

Node ‘2’ is deleted as ‘2’ < ‘5’ then ‘4’ is deleted as ‘4’ < ‘9’ then ‘1’ is deleted as ‘1’ < ‘5’ then ‘5’ is deleted as ‘5’ < ‘9’.

Input format :
Accepts the integer till negative value.

Output format :
Prints the expected list with necessary modifications.

Sample test cases :
Input 1 :
2 4 6 8 7 9 -6
Output 1 :
8 -> 9
Input 2 :*/
