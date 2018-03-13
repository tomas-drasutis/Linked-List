#include <stdio.h>
#include <stdlib.h>
#include "funkcijos.h"

void PutList (int n, int i, List_t **head)
{
    List_t *temp=NULL;
    List_t *p=NULL;

    printf("Enter elements: ");

    temp=(List_t*)malloc(sizeof(List_t));
    scanf("%d",&temp->data);
    temp->next=NULL;

    if (*head==NULL)
    {
        *head=temp;
    }
    else
    {
        p=*head;

        while(p->next!=NULL)
        {
            p=p->next;

        }

        p->next=temp;
    }
}
void PushList (int *n, List_t *head)
{
    List_t *temp=NULL;
    List_t *temp2=head;
    int place;
    int j;

    for(j=0;;j++)
    {
        printf("Enter place: ");
        scanf("%d",&place);

        if (place>(*n)+1)
        {
            printf("Invalid place!! ");
        }
        else
        {
            break;
        }
    }

    printf("Enter elements: ");

    temp=(List_t*)malloc(sizeof(List_t));
    scanf("%d",&temp->data);
    temp->next=NULL;

    for (j=0;j<place-2;j++)
    {
        temp2=temp2->next;
    }

    if (place==(*n))
    {
        temp2->next=temp;
    }
    else
    {
    temp->next=temp2->next;
    temp2->next=temp;
    }
    (*n)++;
}
void PopList (int *n, List_t *head)
{
    List_t *temp=head;
    List_t *temp2=NULL;
    int variable;
    int j;

    printf("Which element to remove? ");
    scanf("%d", &variable);

    for (j=0;j<(*n);j++)
    {
        if (temp->data==variable)
        {
            temp2->next=temp->next;
            variable=temp->data;
            free(temp);

            (*n)--;
            break;
        }
        else
        {
            temp2=temp;
            temp=temp->next;
        }
    }

}
int Minimum (int n, int i, List_t *head, int min)
{
    List_t *temporary_h=NULL;
    temporary_h=head;

    min=temporary_h->data;

    for (i=0;i<n;i++)
    {
        if (temporary_h->data<min)
        {
            min=temporary_h->data;
        }

        temporary_h=temporary_h->next;
    }
    return min;
}
