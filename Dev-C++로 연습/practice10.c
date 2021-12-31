#include <stdio.h>
int main(void){
	int arr[42]={0,};
	int num;
	//int k[42];
	int cnt=0;
	int i,j;
	for(i=0;i<10;i++){
		scanf("%d",&num);
		num %= 42;
		arr[num] = 1;
	}
	
	for(i=0;i<42;i++){
		if(arr[i] == 1)
		cnt++;
		
	}
	
	printf("%d",cnt);
	return 0;
}
