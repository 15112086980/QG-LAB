#include"LinkedList.h"
#include<stdio.h>
int main()
{
	int a,b=1;
	while (b!=0) {
		printf("★★★★★★★★★★★★★★★★\n");
		printf("*\t 0.清除链表全部节点                     *\n");
		printf("*\t 1.初始化链表                           *\n");
		printf("*\t 2.插入节点                             *\n");
		printf("*\t 3.删除节点                             *\n");
		printf("*\t 4.查找节点，找到第一个data=e的节点     *\n"); 
		printf("*\t 5.倒序输出                             *\n");
        printf("*\t 6.判断是否成环                         *\n");
        printf("*\t 7.创建空链表                           *\n");
        printf("*\t 8.输出链表                             *\n");
		printf("******************************\n");
		printf("请输入0-8来选择你所需要的功能：");
		scanf("%d", &a);
		switch (a) {
		case 0:
			printf("\t0.清除链表全部节点\n");
			void DestroyList(LinkedList L);
			printf("\t欢迎下次使用");
			b=0;
			break;
		case 1:
			printf("\t1.初始化链表\n");
			Status InitList(LinkedList L);
			break;
		case 2:
			printf("\t2.插入节点\n");
			Status InsertList(LinkedList L, Lnode *p, Lnode *s);
			printf("插入后的结果为：");
			Status print(LinkedList L);
			break;
		case 3:
			printf("\t3.删除节点\n");
			Status DeleteList(Lnode *p, int *e);
			break;
		case 4:
			printf("\t4.查询节点\n");
			Status SearchList(LinkedList L, int e);
			break;
		case 5:
			printf("\t5.倒序输出\n");
			void CreateListTail();
			Status ReverseEvenList();
			break;
		case 6:
                printf("\t6.判断是否成环\n");
                void CreateListTail(LinkedList *L);
                Status IsLoopList(LinkedList L);
                break;
        case 7:
                printf("\t7.创建空链表\n");
                void CreateListTail(LinkedList *L);
                break;
        case 8:
                printf("\t8.输出链表\n");
                Status print(LinkedList L);
                break;
		default:
			printf("无效输入，请重新输入\n");
			break;
		}

	}

}

