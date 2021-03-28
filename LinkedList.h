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

Status InitList(LinkedList L)//初始化链表（包含头指针）
{
    LinkedList p,q;                  //创建p,q节点
    p=L->next;						//p指向第一个节点
    while(p)					    //当p的指向不为空：
    {q=p->next;free(p);p=q;}      //将下一个节点地址赋值给q，然后删除p节点，再将p->next(即q)赋值给p，继续操作
    L->next=NULL;                 //跳出循环后，将当前节点的地址域的值赋值为空（NULL）
}

void DestroyList(LinkedList L)//free all the nodes
{
    LinkedList p;
    while(L)						//当L不为空
    {p=L;L=L->next;free(p);}		//将L的地址赋予给P，L指向下一个单位，再删除P，这样原来的L就被删除了
}

Status InsertList(LinkedList L, Lnode *p, Lnode *s)//插入节点
{
    if(p=NULL)
        return ERROR;
    s=(Lnode*)malloc(sizeof(Lnode));
    scanf("%d",&s->data);
    s->next=p->next;				//将p所指向的下一个节点地址赋值给s的指针域
    p->next=s;						//让p的指针域指向s，插入完成
    return SUCCESS;
}
Status DeleteList(Lnode *p, int *e)//删除节点  思路：偷天换日
{
    Lnode *q=p->next;				//创建一个指针，将需要删除节点的指针域传给该指针
    p->data=p->next->data;			//将需要删除节点（p）的下一个节点的数据（p->next->data）传给该需要删除节点(p)
    p->next=q->next;				//将q的节点指针域赋值给p的指针域
    free(q);						//删除q（q含有原来节点p的所有内容）
    p->data=*e;						//再将e赋值给p->data
    return SUCCESS;
}
void (*visit)(int e);

Status SearchList(LinkedList L, int e)//查询节点
{
    Lnode*p=L->next;                 //创建一个p节点指向下一个节点
    while(p!=NULL&&p->data!=e)      //当没查询到e的时候，进行循环
        p=p->next;                  //遍历查找，时间复杂度为o(n)
}

Status ReverseEvenList(LinkedList L)       //倒置链表中的数并输出
{

	if(L!=NULL){						   
		ReverseEvenList(L->next);		  //用递归的方法，先打印第一个数据之后的元素 
		printf("%d",L->data);			  //然后再打印第一个元素 
	}
	return SUCCESS;
}

Status IsLoopList(LinkedList L)
{
    Lnode* fast,*slow;					  //设置快指针与慢指针两个指针，如果能成环，则一定能追上 
    if(L==NULL)
        return ERROR;
    slow=fast=L->next;
    while(slow!=NULL&&fast!=NULL)
    {
        if(slow==fast)
            return SUCCESS;
        slow=slow->next; 				//慢指针走一步 
        fast=fast->next;				//快指针走两步 
        if(fast!=NULL)
            fast=fast->next;
    }

}
Status print(LinkedList L)//输出函数
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
    *L = (LinkedList)malloc(sizeof(LinkedList)); /* L为整个线性表 */
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
