#include <stdio.h>
int main(void){
	int n,s=0,i,j,k;
	char arr[80];
	scanf("%d",&n);
	int sum;
	int score;
	while(s<n){
		sum=0;
		score=1;
		scanf("%s",arr);
		for(i=0;arr[i]!='\0';i++){
			if(arr[i] == 'O'){
				sum+=score;
				score++;
			}else if(arr[i] == 'X') score = 1;
			
		}
		//printf("\n");
		printf("%d\n",sum);
		s++;
	}
	
	return 0;
}
