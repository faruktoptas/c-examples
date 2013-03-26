#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node
{
	int x;
	struct node *next; // node inside node
};

void simple_list(){
	struct node *root; // like root of a train
	root = (node *) malloc(sizeof(struct node)); // before malloc set root as a node (node *)
	root->next = 0; // set next as null pointer
	root->x = 3;
}

void list(){
	struct node *root;
	struct node *conductor;

	srand(time(NULL));
	root = (node *) malloc(sizeof(struct node));
	conductor = root;
	for (int i = 0; i < 10; i++){
		conductor->next = (node *) malloc(sizeof(struct node));
		conductor->x = rand() % 50;
		conductor = conductor->next;
	}
	conductor = root;
	int cnt = 1;
	if (conductor != 0){
		while (conductor->next != 0){
			printf("%d . %d\n", cnt++ ,conductor->x);
			conductor = conductor->next;	
		}
	}
}

int main(){
	//simple_list();
	list();
	
	return 0;
}

