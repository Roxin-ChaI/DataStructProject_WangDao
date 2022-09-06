#include <stdio.h>
#define Max 50
struct  sqlist
{
	int a[Max] = {1,2,3,4,5,6,7};
	int length = 7;
};

bool screen(sqlist &l,int s,int t){
	int i,j;
	if(l.length==0||s>=t){
        return 0;
	}

	for(i=0;i<l.length&&l.a[i]<s;i++);//寻找值大于等于s的第一个元素
	
	if(i>l.length) 
		return 0;//所有值均小于是，返回

	for(j=i;j<l.length&&l.a[j]<=t;j++);//寻找大于t的第一个元素

	for(;j<l.length;i++,j++){
		l.a[i]=l.a[j];//前移，填补被删元素位置
	} 

	l.length = i;

	return 1;
}
int main(){
	sqlist L;
	printf("原来的数组是:\n");
	for(int i =0;i<L.length;i++){
		printf("%d ",L.a[i]);
	}
	printf("\n");
	int s,t;
	printf("input s and t \n");
	scanf("%d %d",&s,&t);
	if(screen(L,s,t)==1){
			printf("现在的数组是:\n");
			for(int i =0;i<L.length;i++){
				printf("%d ",L.a[i]);

			
				
	}
	printf("\n%d",L.length);
	}
	else{
		printf("取值范围不合理!\n");
	}
	
	

}