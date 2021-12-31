#include <stdio.h>
int count=0;
int arr[8][8];
int n=0,m=0;
/*void BFS(){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(arr[i][j] == 2){
			if((i-1)<0 || (j-1) < 0 || (j+1)>(m-1) || (i+1) >(n-1)){
				continue;
			}
		if(arr[i-1][j] == 0 && (i-1)>=0) arr[i-1][j] = 2; 
		if(arr[i][j-1] == 0 && (j-1)>=0) arr[i][j-1] = 2;
		if(arr[i][j+1] == 0 && (j+1) <= (m-1)) arr[i][j+1] = 2;
		if(arr[i+1][j] == 0 && (i+1) <= (n-1)) arr[i+1][j] = 2;
		}
		
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr[i][j] == 0) count++;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("count = %d\n",count);
	
}*/
void DFS(int x){
	if(x==3){
		
	}
	int i,j;
	for(i=0;i<n;i++){
					for(j=0;j<m;j++){
						if(arr[i][j] == 0){
							arr[i][j] = 1;
							DFS(x+1); 
							arr[i][j] = 0;
				}
			}
			
		}
}

/*void DFS(x){
	int i,j;
	if(x == 3){
		H(x);
	}else{
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(arr[i][j] == 0){
					arr[i][j] = 1;
					DFS(x+1);
					arr[i][j] = 0;
				}
			}
		}
	}
}*/

int main(void)
{
	//int n,m;
	int i,j;
	//int count=0;
	int count2=0;
	int count3=0;
	scanf("%d %d",&n,&m);
	//int arr[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			while(count2<3){
				if(arr[i][j]==0){
				arr[i][j] = 1;
				count2++;
			}
				
			}
		
				
		}
		
	}
			
/*	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			while(count2<3){
				if(arr[i][j] == 0){
					if(max(arr))
				}
				count2++;
			}
			arr[i][j]++;
			//think..
			if(arr[i][j] == 0){
				
				count2++;
			}
		}
		
	}*/
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(arr[i][j] == 2){
		if(arr[i-1][j] == 0) arr[i-1][j] = 2; 
		if(arr[i][j-1] == 0) arr[i][j-1] = 2;
		if(arr[i][j+1] == 0) arr[i][j+1] = 2;
		if(arr[i+1][j] == 0) arr[i+1][j] = 2;
		}
		
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr[i][j] == 0) count3++;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("count = %d\n",count3);
	
}
