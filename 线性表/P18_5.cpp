#include <stdio.h>
#define Max 50
struct  sqlist
{
	int a[Max] = {1,6,7,3,4,5,2};//{1,2,3,4,5,6,7}
	int length = 7;
};

bool screen(sqlist &l,int s,int t){
	int i,j=0;
	if(l.length==0||s>t){
        return 0;
	}

	for(i=0;i<l.length;i++){
		if(l.a[i]<s||l.a[i]>t)//判断条件是当前元素比s小或者比t大，就可以留下来
		{
			l.a[j]=l.a[i];//让符合条件的元素重新放置在数组中，以达到删除的作用
			j++;//记录符合条件的元素个数
		}
	}
	
	l.length = j;//去除多余的长度以实现删除效果
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
	
	s=2;t=4;//test data 
	
	//printf("input s and t \n");
	//scanf("%d %d",&s,&t);
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