#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���ַ������ʽṹ�ĳ�Ա
struct Book
{
	char name[20];
	char id[20];
	int price;
};

int main()
{
	struct Book b = { "C����","IT123456",20 };
	printf("%s\n", b.name);
	printf("%s\n", b.id);
	printf("%d\n", b.price);
	printf("--------------------\n");

	struct Book* pb = &b;
	printf("%s\n", (*pb).name);
	printf("%s\n", (*pb).id);
	printf("%d\n", (*pb).price);
	printf("--------------------\n");

	printf("%s\n", pb->name);
	printf("%s\n", pb->id);
	printf("%d\n", pb->price);

}