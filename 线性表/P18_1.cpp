#include <stdio.h>
#define Max 50
typedef struct  sqlist
{
	int a[Max] = {16,2,3,4,0,6,7,14};
	int length = 8;
}sqlist;

bool deletelist(sqlist &s ,int &e){
	if(s.length == 0){
		return 0;//表空，终止并返回
	}
	e=s.a[0];
	int flag =0;//flag指向0号元素
	for(int i=1;i<s.length;i++)//从1号元素开始向后遍历
		if(s.a[i] < e){//若后一位的元素的值小于e
			e=s.a[i];//则赋值于e
			flag=i;//flag指向第i号元素
		}
	s.a[flag]=s.a[s.length - 1];//最小值所在位置赋值为最后一位
	s.length--;//长度减一
	return 1;//此时e是最小值
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
