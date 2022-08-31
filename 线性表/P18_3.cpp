#include <stdio.h>
#define Max 50
struct  sqlist
{
	int a[Max] = {1,2,3,8,5,8,7};
	int length = 7;
};

void deleteX(sqlist &s,int x){
	int k=0,i;
	for(i=0;i<s.length;i++){
		if (s.a[i]==x)
			k++;
		else
			s.a[i-k]=s.a[i];
		
	}
	s.length =s.length - k;
}

int main(){
	int x = 8;
	sqlist L;
	printf("原来的数组是:\n");
	for(int i =0;i<L.length;i++){
		printf("%d ",L.a[i]);
	}
	printf("\n");

	
	deleteX(L,x);
	
	printf("现在的数组是:\n");
	for(int i =0;i<L.length;i++){
		printf("%d ",L.a[i]);
	}
}