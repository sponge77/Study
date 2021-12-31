#include <stdio.h>
#include <math.h>
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
	int n,m;
	int i,j,k;
	int sum=0;
	int cur;
	scanf("%d %d",&n,&m);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	Sort(arr,0,n);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++){
				cur = arr[i] + arr[j] + arr[k];
				if(cur > m) break;
				if(abs(m-sum)>abs(m-cur))
				sum = cur;
			}
		}
	}
	printf("%d",sum);
} 
