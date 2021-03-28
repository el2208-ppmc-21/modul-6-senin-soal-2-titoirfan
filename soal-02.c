#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    char name[15];
    int index;
    struct node *next;
}node;

node *create(int i) {
    node *p;
    char x[15];

    printf("Nama teman baik ('-' bila sudah selesai): ");
    scanf("%s", &x);

    if (strcmp(x, "-")==0) 
        return (NULL); 

    p = (node*)malloc(sizeof(node));
    strcpy(p->name, x);
    p->index = i;
    p->next = create(i+1);

    return (p);
}

bool search(node* head, char x[10]) {
    node* current = head;  
    while (current != NULL) {
        if (strcmp(current->name,x)==0)
            return true;
        current = current->next;
    }
    return false;
}

int index_search(node* head, char x[10]) {
    node* current = head;
    while (current != NULL) {
        if (strcmp(current->name,x)==0)
            return (current->index);
        current = current->next;
    }
}

void printList(node *head)
{
    node *current = head;
    if (current == NULL) { 
		printf("Tidak memiliki teman baik"); 
	}
	else { 
		while (current!=NULL)
		{
			if (current->next != NULL)
				printf("%s ", current->name);
			else
				printf("%s", current->name);
			
			current = current->next;
		}
	}
}

int main() {
    int i, index1, index2;
    node *teman1, *teman2;
    int sum = 0;
    char stud1[10], stud2[10];

    printf("Nama siswa 1: ");
    scanf("%s", stud1);
    printf("Masukkan nama-nama teman baik %s (berdasar kedekatan) \n\n", stud1);
    i = 1;
    teman1 = create(i);
    printf("\n");
    printf("Nama siswa 2: ");
    scanf("%s", stud2);
    printf("Masukkan nama-nama teman baik %s (berdasar kedekatan) \n\n", stud2);
    i = 1;
    teman2 = create(i);

    printf("\n");
    printf("Teman baik %s:\n", stud1);
    printList(teman1);
    printf("\n\n");
    printf("Teman baik %s:\n", stud2);
    printList(teman2);
    printf("\n\n");

    node* temp = teman2;
    while (temp!=NULL) {
        if (search(teman1, temp->name)==1) {
            printf("%s dan %s sama-sama berteman dengan : %s\n", stud1, stud2, temp->name);
            index1 = index_search(teman1, temp->name);
            printf("Ditemukan di indeks kedekatan : %d dari teman baik %s dan %d dari teman baik %s\n", index1, stud1, temp->index, stud2);
            printf("\n");
            sum = sum+1;
            temp = temp->next;
        }
        else {
            sum = sum+0;
            temp = temp->next;
        }
    }

    if (sum==0) {
        printf("Tidak ditemukan teman baik yang sama\n");
    }

    return (0);
}
