#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int nBasicIdx=0;

void Sort(int *arr,int check,int n){
	int count=0;
	int buff=0;
	
	for(count=(check+1);count<n;count++){
		if(arr[nBasicIdx]>arr[count]){
			buff = arr[count];
			arr[count] = arr[nBasicIdx];
			arr[nBasicIdx] = buff;
		}
	}
	nBasicIdx++;
	if(nBasicIdx <= (n-1)) Sort(arr,nBasicIdx,n);
}
int main(void){
	//srand(time(NULL));
	int num,i;
	int a[5];
	int p[5] = {0,};
	int result=0;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	Sort(a,0,num);
	for(i=0;i<num;i++){
		p[i] = 5-i;
		result += p[i] * a[i];
	}
	
	//int i,j;
	/*int a[5];
	for(i=0;i<5;i++){
		a[i] = rand()%5+1;
		for(j=0;j<i;j++){
			if(a[i] == a[j]) i--;
		}
		
	} */
	/*for(i=0;i<num;i++){
		printf("%d ",a[i]);
	}
	printf("\n");*/
	printf("%d\n",result);
		
}
