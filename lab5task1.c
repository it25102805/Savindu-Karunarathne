#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
	int studentID;
	char nameOfStudent[15];
	struct node *next;
};

void displayStudentDetails(struct node *head){
	if(head == NULL){
		printf("Student name list was Empty");
	} else {
		struct node *temp = head;
		while(temp != NULL){
		printf("    %d    |    %s   \n",temp -> studentID, temp ->nameOfStudent);
		temp = temp -> next;
		}
	}
}

struct node* createEmptyList(){
	return NULL;
}

struct node* insertAtBeginning(struct node *head){
	struct node *newnode = (struct node*) malloc(sizeof(struct node));
	printf("Enter your Student ID\n");
	printf("(Please type it in 3 numbers)\n");
	scanf("%d", &newnode -> studentID);
	printf("Enter your name\n");
	scanf("%s", newnode -> nameOfStudent);
	newnode -> next = head;
	head = newnode;
	return head;
}

struct node* deleteAtBeginning(struct node *head){
	if(head == NULL){
		printf("List is empty\n");
		return NULL;
	}
	struct node *temp;
	temp = head;
	head = head -> next;
	free(temp);
	return head;
}

int main (void){
	struct node *node1, *node2, *node3, *head, *temp;
	node1 = (struct node*) malloc (sizeof(struct node));
	node2 = (struct node*) malloc (sizeof(struct node));
	node3 = (struct node*) malloc (sizeof(struct node));
	
	node1 -> studentID = 100;
	strcpy(node1 -> nameOfStudent, "Gihan");
	node2 -> studentID = 101;
	strcpy(node2 -> nameOfStudent, "Chathurika");
	node3 -> studentID = 102;
	strcpy(node3 -> nameOfStudent, "Krishi");
	
	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;
	
	head = createEmptyList();
	head = node1;
	printf("------Initial List------\n");
	displayStudentDetails(head);


	head = insertAtBeginning(head);
	head = insertAtBeginning(head);
	printf("------After Inserting Two Nodes------\n");
	displayStudentDetails(head);

	while(head != NULL){
		head = deleteAtBeginning(head);
	}

	printf("------After Deleting all  Nodes------\n");
	displayStudentDetails(head);
}

