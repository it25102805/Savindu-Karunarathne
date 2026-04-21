#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
	int ID;
	char nameOfStudent[15];
	struct node *next;
};
struct node *head = NULL;

int main(){

	struct node *node1, *node2, *node3;
	node1 = (struct node*)malloc(sizeof(struct node));
	node2 = (struct node*)malloc(sizeof(struct node));
	node3 = (struct node*)malloc(sizeof(struct node));

	node1->ID = 100;
        strcpy(node1 -> nameOfStudent,"Gihan");
        node2->ID = 101;
        strcpy(node2 -> nameOfStudent,"Chathurika");
        node3 ->ID = 102;
        strcpy(node3 -> nameOfStudent, "Kishi");

	node1->next = node2;
	node2->next = node3;

	struct node *displayTheValues(struct node*head){

		struct node*ptr;
		ptr = head;
		while(ptr !=NULL){

			printf("\t %d \t %c\n" ptr-> ID, ptr -> nameOfStudent);
			ptr = ptr ->next;
		}
		return head;
	}

	struct node *insert_begging(struct node *head){

		struct node *newNode;
		int ID;
		char nameOfStudent[15];
		printf("\nEnter your ID");
		scanf("&d", &ID);
		printf("\nEnter your name");
		fgets(nameOfStudent, sizeof(nameOfStudent), stdin);
		nameOfStudent[strcspn(buffer, "\n")] = '\0';

		newNode -> ID = ID;
		strcpy(newNode -> nameOfStudent, nameOfStudent);
		newNode ->  next = node1;
		head = newNode;

		return head;

	}



return 0;
}
