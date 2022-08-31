#include <stdio.h>
#define Max 50
typedef struct  sqlist
{
	int a[Max] = {16,2,3,4,0,6,7,14};
	int length = 8;
}sqlist;

bool deletelist(sqlist &s ,int &e){
	if(s.length == 0){
		return 0;
	}
	e=s.a[0];
	int flag =0;
	for(int i=1;i<s.length;i++)
		if(s.a[i] < e){
			e=s.a[i];
			flag=i;
		}
	s.a[flag]=s.a[s.length - 1];
	s.length--;
	return 1;
}

int main()
{
	int b = 0 ;
	sqlist s ;
	printf("原来的数组是:\n");
		for(int i =0;i<s.length;i++){
			printf("%d ",s.a[i]);
		}
		printf("\n");
	if(deletelist(s,b)==1){
		printf("最小元素:%d\n",b);
		printf("现在的数组是:\n");
		for(int i =0;i<s.length;i++){
			printf("%d ",s.a[i]);
		}
		
	}
	else
		printf("Error! The List is empty!");

	return (0);
}