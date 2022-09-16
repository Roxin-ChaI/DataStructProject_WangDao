#include <stdio.h>
#define Max 50
typedef struct  
{
	int a[Max]={1,2,2,3,3,4,4,5,5} ;
	int length = 9 ;
}sqlist;

bool del_same(sqlist &l){
    if(l.length==0) return false;
    int i,j;                        //i存储第一个不同的元素，j为工作指针
    for(i=0,j=1;j<l.length;j++){
        if(l.a[i]!=l.a[j]){         //查找下一个与上一个元素值不同的元素
            l.a[++i]=l.a[j];        //找到后，将元素前移
        }
    }
    l.length =i+1;
    return true;
}


int main()
{
	sqlist L;
    
	printf("原来的数组是:\n");
	for(int i =0;i<L.length;i++){
		printf("%d ",L.a[i]);
	}
	printf("\n");
	
	del_same(L);
	
	printf("现在的数组是:\n");
	for(int i =0;i<L.length;i++){
		printf("%d ",L.a[i]);
	}
		
	
}