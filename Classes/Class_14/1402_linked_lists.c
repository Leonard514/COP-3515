#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};


int main(void)
{
struct Node *head = NULL;
struct Node *second = NULL;
struct Node *third = NULL;


// allocate nodes in heap
head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));


// populate
head->data = 1;
head->next = second;

second->data = 2;
second->next = third;

third->data = 3;
third->next = NULL;

printf("head data: %d\n", head->data);
printf("second data: %d\n", second->data);
printf("third data: %d\n", third->data);

}