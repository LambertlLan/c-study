#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int id;
    struct Node *next;
} Node;
int SListPrint(Node *head)
{
    Node *pCur = head->next;
    while (1)
    {
        printf("%d->", pCur->id);
        pCur = pCur->next;
        if (pCur->next == NULL)
        {
            printf("%d->NULL\n", pCur->id);
            break;
        }
    }

    return 0;
}
//创建头结�?
Node *SListCreate()
{
    Node *head = (Node *)malloc(sizeof(Node));
    head->id = -1;
    head->next = NULL;
    int data;
    Node *pCur = head;
    while (1)
    {
        printf("����������:");
        scanf("%d", &data);
        if (data == -1)
        {
            break;
        }
        Node *pNew = (Node *)malloc(sizeof(Node));
        pNew->id = data;
        pNew->next = NULL;
        pCur->next = pNew;
        pCur = pNew;
    }

    return head;
}
//��ֵΪx�Ľڵ�ǰ,����ֵΪy�Ľڵ�,��ֵΪx�Ľڵ㲻����,����ڱ�β
int SListNodeInsert(Node *head, int x, int y)
{
    Node *pPre = head;
    Node *pCur = head->next;

    while (pCur != NULL)
    {
        /* code */
        if (pCur->id == x)
        {
            break;
        }
        pPre = pCur;
        pCur = pCur->next;
    }
    Node *pNew = (Node *)malloc(sizeof(Node));
    pNew->id = y;
    pNew->next = pCur;
    pPre->next = pNew;
    return 0;
}
//ɾ���ڵ�
int SListNodeDel(Node *head, int x)
{
    Node *pPre = head;
    Node *pCur = head->next;

    while (pCur != NULL)
    {
        /* code */
        if (pCur->id == x)
        {
            break;
        }
        pPre = pCur;
        pCur = pCur->next;
    }
    pPre->next = pCur->next;
    return 0;
}
//�������
int SListNodeDestroy(Node *head)
{
    int i = 0;
    while (1)
    {
        /* code */
        Node *tmp = head->next;
        free(head);
        head = NULL;
        if (tmp == NULL)
        {
            break;
        }
        head = tmp;
        i++;
    }
    printf("i = %d\n", i);
}
int main(int argc, char const *argv[])
{
    Node *head = SListCreate();
    printf("����ǰ:\n");
    SListPrint(head);
    SListNodeInsert(head, 5, 4);
    printf("�����:\n");
    SListPrint(head);
    printf("ɾ��6��:\n");
    SListNodeDel(head, 6);
    SListPrint(head);
    SListNodeDestroy(head);

    return 0;
}
