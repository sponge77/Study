#include <stdio.h>
#include <stdlib.h>
/*void avg(int *a,int n){
	int sum=0;
	double avg;
	int i;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	avg = (double)sum/n;
	printf("%lf\n",avg);
}*/
int* sort(int *a,int n){
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
	
	return a;
}
/*void median(int *a,int n){
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
	printf("%d\n",a[k]);
}*/
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
	printf("%d\n",p);
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
	printf("%d\n",result > 0? result : -result);
}
int main(void){
	int num;
	int *a,*b,*c,sum=0;
	int k;
	int count = 0,max,p;
	int b2[4001] = {0,};
	//int average;
	int i;
	
	scanf("%d",&num);
	a = (int*)malloc(sizeof(int)*num);
	b = (int*)malloc(sizeof(int)*num);
	c = (int*)malloc(sizeof(int)*num);
	
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
		c[i] = a[i];
        sum += a[i];
	}
	
	b = sort(a,num);

		
	for(i=0;i<num;i++){
		printf("결과: %d\n",b[i]);
	}
	
	printf("%lf\n",(double)sum/num); //average
	k = num/2;
	printf("%d",b[k]); //median
	//median(a,num);
	
	for(i=0;i<num;i++){
		k = c[i]; //k = 8
		b2[k-1]++;
	}
	max = b2[0];
	for(i=0;i<4001;i++){
		if(b2[i] > max){
		max = b2[i];
		p = i+1;
		count++;
		}
		if(count == 2) break;
		
	}
	printf("%d\n",p);
	
	//mode(a,num);
	
	for(i=0;i<num;i++){
		printf("확인용: %d\n",c[i]);
	} 
	
	//mode
	//range(a,num); 
	//range
}
