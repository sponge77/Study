#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num;
	int *stair,*stairpoint,count=0,i,j,k,p;
	srand(time(NULL));
	int max;
	int n = rand()%2;
	int sum[10]={0,};
	scanf("%d",&num);
	
	stairpoint = (int*)malloc(sizeof(int)*num);
	stair = (int*)malloc(sizeof(int)*num);
	
	for(i=0;i<num;i++){
		scanf("%d",&stairpoint[i]);
	}
	i=-1;
	p=0;
	for(q=0;q<num;q++){
		while(i<num){
		i = (n == 0)? i+1 : i+2;
		stair[i]++;
		if(stair[i]) k=i;
		if(stair[k]==1 && stair[k+1]==1 && stair[k+2]==1)
		i--;
		/*for(j=0;j<num;j++){
			if(stair[j]==1 && stair[j+1]==1 && stair[j+2]==1)
			
		}*/
	
		
		sum+=stairpoint[k];
		i++;
	}
	}
	
	max = sum[0];
	for(i=0;i<num;i++){
		if(sum[i] > max)
		max = sum[i];
	}
	

	printf("%d",max);
	
	return 0;
}



