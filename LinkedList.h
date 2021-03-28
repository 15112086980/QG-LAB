#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10000
typedef int ElemType;
typedef struct Lnode {
    ElemType data;
    struct Lnode *next;
} Lnode, *LinkedList;

typedef enum Status {
    ERROR,
    SUCCESS
} Status;

Status InitList(LinkedList L)//��ʼ����������ͷָ�룩
{
    LinkedList p,q;                  //����p,q�ڵ�
    p=L->next;						//pָ���һ���ڵ�
    while(p)					    //��p��ָ��Ϊ�գ�
    {q=p->next;free(p);p=q;}      //����һ���ڵ��ַ��ֵ��q��Ȼ��ɾ��p�ڵ㣬�ٽ�p->next(��q)��ֵ��p����������
    L->next=NULL;                 //����ѭ���󣬽���ǰ�ڵ�ĵ�ַ���ֵ��ֵΪ�գ�NULL��
}

void DestroyList(LinkedList L)//free all the nodes
{
    LinkedList p;
    while(L)						//��L��Ϊ��
    {p=L;L=L->next;free(p);}		//��L�ĵ�ַ�����P��Lָ����һ����λ����ɾ��P������ԭ����L�ͱ�ɾ����
}

Status InsertList(LinkedList L, Lnode *p, Lnode *s)//����ڵ�
{
    if(p=NULL)
        return ERROR;
    s=(Lnode*)malloc(sizeof(Lnode));
    scanf("%d",&s->data);
    s->next=p->next;				//��p��ָ�����һ���ڵ��ַ��ֵ��s��ָ����
    p->next=s;						//��p��ָ����ָ��s���������
    return SUCCESS;
}
Status DeleteList(Lnode *p, int *e)//ɾ���ڵ�  ˼·��͵�컻��
{
    Lnode *q=p->next;				//����һ��ָ�룬����Ҫɾ���ڵ��ָ���򴫸���ָ��
    p->data=p->next->data;			//����Ҫɾ���ڵ㣨p������һ���ڵ�����ݣ�p->next->data����������Ҫɾ���ڵ�(p)
    p->next=q->next;				//��q�Ľڵ�ָ����ֵ��p��ָ����
    free(q);						//ɾ��q��q����ԭ���ڵ�p���������ݣ�
    p->data=*e;						//�ٽ�e��ֵ��p->data
    return SUCCESS;
}
void (*visit)(int e);

Status SearchList(LinkedList L, int e)//��ѯ�ڵ�
{
    Lnode*p=L->next;                 //����һ��p�ڵ�ָ����һ���ڵ�
    while(p!=NULL&&p->data!=e)      //��û��ѯ��e��ʱ�򣬽���ѭ��
        p=p->next;                  //�������ң�ʱ�临�Ӷ�Ϊo(n)
}

Status ReverseEvenList(LinkedList L)       //���������е��������
{

	if(L!=NULL){						   
		ReverseEvenList(L->next);		  //�õݹ�ķ������ȴ�ӡ��һ������֮���Ԫ�� 
		printf("%d",L->data);			  //Ȼ���ٴ�ӡ��һ��Ԫ�� 
	}
	return SUCCESS;
}

Status IsLoopList(LinkedList L)
{
    Lnode* fast,*slow;					  //���ÿ�ָ������ָ������ָ�룬����ܳɻ�����һ����׷�� 
    if(L==NULL)
        return ERROR;
    slow=fast=L->next;
    while(slow!=NULL&&fast!=NULL)
    {
        if(slow==fast)
            return SUCCESS;
        slow=slow->next; 				//��ָ����һ�� 
        fast=fast->next;				//��ָ�������� 
        if(fast!=NULL)
            fast=fast->next;
    }

}
Status print(LinkedList L)//�������
{
    LinkedList p=L->next;
    while(p)
    {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
    return SUCCESS;
}
void CreateListTail(LinkedList *L)
{
    LinkedList p,q;
    int i,n,a;
    *L = (LinkedList)malloc(sizeof(LinkedList)); /* LΪ�������Ա� */
    Lnode* head;
    head=NULL;
    printf("please input how much data do you want to input:\n");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&a);
        p = (Lnode *)malloc(sizeof(Lnode)); 
        p->data=a;
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            q->next=p;
        q=p;                     
    }}
