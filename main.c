#include"LinkedList.h"
#include<stdio.h>
int main()
{
	int a,b=1;
	while (b!=0) {
		printf("�����������������\n");
		printf("*\t 0.�������ȫ���ڵ�                     *\n");
		printf("*\t 1.��ʼ������                           *\n");
		printf("*\t 2.����ڵ�                             *\n");
		printf("*\t 3.ɾ���ڵ�                             *\n");
		printf("*\t 4.���ҽڵ㣬�ҵ���һ��data=e�Ľڵ�     *\n"); 
		printf("*\t 5.�������                             *\n");
        printf("*\t 6.�ж��Ƿ�ɻ�                         *\n");
        printf("*\t 7.����������                           *\n");
        printf("*\t 8.�������                             *\n");
		printf("******************************\n");
		printf("������0-8��ѡ��������Ҫ�Ĺ��ܣ�");
		scanf("%d", &a);
		switch (a) {
		case 0:
			printf("\t0.�������ȫ���ڵ�\n");
			void DestroyList(LinkedList L);
			printf("\t��ӭ�´�ʹ��");
			b=0;
			break;
		case 1:
			printf("\t1.��ʼ������\n");
			Status InitList(LinkedList L);
			break;
		case 2:
			printf("\t2.����ڵ�\n");
			Status InsertList(LinkedList L, Lnode *p, Lnode *s);
			printf("�����Ľ��Ϊ��");
			Status print(LinkedList L);
			break;
		case 3:
			printf("\t3.ɾ���ڵ�\n");
			Status DeleteList(Lnode *p, int *e);
			break;
		case 4:
			printf("\t4.��ѯ�ڵ�\n");
			Status SearchList(LinkedList L, int e);
			break;
		case 5:
			printf("\t5.�������\n");
			void CreateListTail();
			Status ReverseEvenList();
			break;
		case 6:
                printf("\t6.�ж��Ƿ�ɻ�\n");
                void CreateListTail(LinkedList *L);
                Status IsLoopList(LinkedList L);
                break;
        case 7:
                printf("\t7.����������\n");
                void CreateListTail(LinkedList *L);
                break;
        case 8:
                printf("\t8.�������\n");
                Status print(LinkedList L);
                break;
		default:
			printf("��Ч���룬����������\n");
			break;
		}

	}

}

