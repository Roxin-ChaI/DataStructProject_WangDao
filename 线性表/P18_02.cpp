#include <stdio.h>
#define Max 50
struct  sqlist
{
	int a[Max] = {1,2,3,4,5,6,7};
	int length = 7;
};

void reverse(sqlist &s){
	int temp;
	for(int i=0;i<s.length/2;i++){
		temp=s.a[i];//第i位元素复制一份
		s.a[i] = s.a[s.length-i-1];//第i位赋第length-i-1位的值
		s.a[s.length-i-1]=temp;//第length-i-1位赋第i位的值
	}
}

int main()
{
	sqlist s;
	printf("原来的数组是:\n");
	for(int i =0;i<s.length;i++){
		printf("%d ",s.a[i]);
	}
	printf("\n");
	
	reverse(s);//数组逆置
	
	printf("现在的数组是:\n");
	for(int i =0;i<s.length;i++){
		printf("%d ",s.a[i]);
	}
		
	
}
