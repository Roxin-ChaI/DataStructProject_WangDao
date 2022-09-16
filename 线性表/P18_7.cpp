#include <stdio.h>
#define Max 50
typedef struct  
{
	int a[Max] ;
	int length ;
}sqlist;

bool merge(sqlist A,sqlist B,sqlist &C){
    //将有序顺序表A、B合并成新的有序顺序表C
    if(A.length+B.length>Max)return false;//大于顺序表的最大长度
    int i=0,j=0,k=0;
    while (i<A.length&&j<B.length)//两两比较的循环，将其中更小的存入C中
    {
        if(A.a[i]<=B.a[j])
            C.a[k++]=A.a[i++];
        else
            C.a[k++]=B.a[j++];
    }
    while (i<A.length)     //将比较中剩下的有序顺序表存入接下来的C中
        C.a[k++]=A.a[i++];
    while (j<B.length)
        C.a[k++]=B.a[j++];
    
    C.length=k;
    return true;
}


int main()
{
	sqlist L,S,T;char n[8];
    int a[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        L.a[i]=a[i];
        L.length=5;
    }
    
    int b[]={2,3,4,6,9};
    for(int i=0;i<5;i++){
        S.a[i]=b[i];
        S.length=5;
    }
    
    




	printf("原来的数组是:\n");
	for(int i =0;i<L.length;i++){
		printf("L: %d ",L.a[i]);
	}
	printf("\n");

	for(int i =0;i<S.length;i++){
		printf("S: %d ",S.a[i]);
	}
	printf("\n");
	
    
    merge(L,S,T);


	
	printf("现在的数组是:\n");
	for(int i =0;i<T.length;i++){
		printf("%d ",T.a[i]);
	}
		
	
}