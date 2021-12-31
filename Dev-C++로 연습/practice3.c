#include <stdio.h>
#include <stdlib.h>
void avg(int *a,int n){
	int sum=0;
	double avg;
	int i;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	avg = (double)sum/n;
	printf("결과값 : %lf\n",avg);
}
void median(int *a,int n){
	int i,j,temp,k;
	
	for(i=0;i<n-1;i++){
		for(j=1;j<n-i;j++){
			if(a[j-1] > a[j]){
				temp = *(a+j-1);
				*(a+j-1) = *(a+j);
				*(a+j) = temp;
			}
		}
	}
	k =n/2;
	printf("중앙값 : %d\n",a[k]);
}
void mode(int *a,int n){
	int b[4001] = {0,};
	int i,k,max;
	int p;
	int count = 0;
	for(i=0;i<n;i++){
		k = a[i]; //k = 8
		b[k-1]++;
	}
	
	max = b[0];
	for(i=0;i<4001;i++){
		if(b[i] > max){
		max = b[i];
		p = i+1;
		count++;
		}
		if(count == 2) break;
		
	}
	printf("최빈값 : %d\n",p);
}
void range(int *a,int n){
	int i,j,temp,result;
	
	for(i=0;i<n-1;i++){
		for(j=1;j<n-i;j++){
			if(a[j-1] > a[j]){
				temp = *(a+j-1);
				*(a+j-1) = *(a+j);
				*(a+j) = temp;
			}
		}
	}
	
	result = a[n-1] - a[0];
	printf("범위 : %d\n",result > 0? result : -result);
}
int main(void){
	int num;
	int sum=0;
	int *a;
	//int average;
	int i;
	
	scanf("%d",&num);
	a = (int*)malloc(sizeof(int)*num);
	
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	
	avg(a,num);
	median(a,num);
	mode(a,num);
	range(a,num); 
	/*for(i=0;i<num;i++){
		sum += a[i];
	}
	average = sum/num;
	printf("%d",average);
	*/
	printf("\n");
	for(i=0;i<num;i++){
		printf("%d",a[i]);
	}
	
	return 0;
}
