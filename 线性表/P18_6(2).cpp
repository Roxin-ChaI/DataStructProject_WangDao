#include <stdio.h>
#define Max 50
typedef struct  
{
	int a[Max]={1,2,3,3,2,1,4,4};//寄！！看错题了，这是一般顺序表同样适用于有序顺序表
	int length =8 ;
}sqlist;

void func(sqlist &l){
    int i,k,j=0;
    int flag;
    for(i=0;i<l.length;i++){
        flag = false;
        if(j==0){
            l.a[j]=l.a[0];j++;
        } 
        else{
            for (k=0;k<i;k++)
            {
                if(l.a[k]==l.a[i]){
                    flag = true;
                }
            }
            if(flag==false){
                l.a[j]=l.a[i];
                j++;
            }
        }
    }
    l.length=j;
}


int main()
{
	sqlist L;
	printf("原来的数组是:\n");
	for(int i =0;i<L.length;i++){
		printf("%d ",L.a[i]);
	}
	printf("\n");
	
	func(L);
	
	printf("现在的数组是:\n");
	for(int i =0;i<L.length;i++){
		printf("%d ",L.a[i]);
	}
		
	
}