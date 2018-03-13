typedef struct List
{
    int data;
    struct List * next;

}List_t;

void PutList (int n, int i, List_t ** head);
void PushList (int *n, List_t *head);
void PopList (int *n, List_t *head);
int Minimum (int n, int i, List_t *head, int min);
