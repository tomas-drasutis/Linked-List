#include <stdio.h>
#include <stdlib.h>
#include "funkcijos.h"

int main()
{
    int n;
    int i;
    int min;

    List_t *head=NULL;
    List_t *smth=NULL;

    n=0;
    i=0;

    printf("How many elements in the list? ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        PutList(n,i,&head);
    }

    min=Minimum(n,i,head,&min);

    printf("%d", min);

    PushList (&n,head);

    smth=head;

    for (i=0;i<n;i++)
    {
        printf("%d ",smth->data);
        smth=smth->next;
    }

    printf("\n");

    PopList (&n,head);

    for (i=0;i<n;i++)
    {
        printf("%d ",head->data);
        head=head->next;
    }

    return 0;
}
