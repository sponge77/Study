#include <stdio.h>
#include <stdlib.h> 
int **array;
int **visit;
int a=0,b=0;
int num;
int arr[10];
void BFS(int x,int y){
	a++;
	visit[x][y] = 1;
	if(array[x][y-1] == 1 && visit[x][y-1] == 0 && y-1 > -1){
		BFS(x,y-1);
	}
	if(array[x][y+1]==1 && visit[x][y+1] == 0 && y+1<num){
		BFS(x,y+1);
	}
	if(array[x-1][y] == 1 && visit[x-1][y] ==0 && x-1>-1){
		BFS(x-1,y);
	}
	if(array[x+1][y] == 1 && visit[x+1][y] == 0 && x+1<num){
		BFS(x+1,y);
	}
}
int main(void){
    int i,j;
	
	//array allocation 
	scanf("%d",&num);
	array = (int**)malloc(sizeof(int*)*num);
	
	for(i=0;i<num;i++){
		array[i] = (int*)malloc(num*sizeof(int));
	}
	//visit allocation
	
	visit = (int**)malloc(sizeof(int*)*num);
	
	for(i=0;i<num;i++){
		visit[i] = (int*)malloc(num*sizeof(int));
	}
	
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			visit[i][j] = 0;
		}
	}
	//입력 
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			a = 0;
			if(array[i][j] == 1 && visit[i][j] == 0){		
			    b++;		
				BFS(i,j);
				
				arr[b] = a;
			}
		}
	}
	printf("갯수: %d\n",b);

	for(i=1;i<b+1;i++){
		printf("오름차순 : %d ",arr[i]);
	}
	
	//출력
	 
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			printf("%d ",visit[i][j]);
		}
		printf("\n");
	}
	return 0;
}
