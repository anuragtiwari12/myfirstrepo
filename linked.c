#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

int main()
{
	struct Node* temp = NULL;
	
	temp = (struct Node*)malloc(sizeof(struct Node*));
	temp -> data = 5;
	temp -> next = NULL;
	
	printf("%d",temp -> data);
	
	return 0;
}
