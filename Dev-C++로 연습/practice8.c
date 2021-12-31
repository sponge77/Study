#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num,students,i=0,j,k,m,n,p;
	int *arr;
    int temp;
	int min;
	int max;
	int largest;
	
	scanf("%d",&num);


	while(num--){
		
		scanf("%d",&students);
		arr = (int*)malloc(sizeof(int)*students);
		for(j=0;j<students;j++){
			scanf("%d",&arr[j]);
		}
		
		for(m=0;m<students;m++){
        	for(n=0;n<students-1-m;n++){
        		if(arr[n] > arr[n+1]){
        			temp = arr[n];
        			arr[n] = arr[n+1];
        			arr[n+1] = temp;
				}
			}
		}
		//sort(arr,students);
        /*for(p=0;p<students;p++){
        	printf("%d ",arr[p]);
		}*/
		min = arr[0];
		max = arr[students-1];
		largest = arr[1]- arr[0];
		for(k=0;k<students-1;k++){
			if(largest < arr[k+1] - arr[k]) //arr[1] - arr[0] ~ arr[2] - arr[1]
			largest = arr[k+1] - arr[k];
		} 
	/*	for (int i = 0; i < n - 1; i++)
            if (lg < a[i] - a[i+1])
                lg = a[i] - a[i+1];*/



		
		printf("Class %d\nMax %d, Min %d, Largest gap %d\n",i+1,max,min,largest);
		free(arr);
    	i++;
	}
	
    
	return 0;
}
