#include <stdio.h>
#include <string.h>

int main(void){
	int num,length;
	int i=0,j,z,l,q;
	int max;
	int count=0;
	int result = 0;
	int a=0,c=0,g=0,t=0;
	int p[4]={0,};
	char y[4] = {'A','C','G','T'};
	//char *a;
	scanf("%d %d",&num,&length);
	char arr[num][length];
	int s[num][length];
	char k[length];
	//a = (char*)malloc(sizeof(char)*num);
	while(i<num){
		scanf("%s",arr[i]);
		i++;
	}
	
	for(i=0;i<num;i++){
		for(j=0;j<length;j++){
			//s[i][j] = 0;
			
			if(arr[i][j]=='A') s[i][j] = 0;
			else if(arr[i][j]=='C') s[i][j] = 1;
			else if(arr[i][j]=='G') s[i][j] = 2;
			else if(arr[i][j]=='T') s[i][j] = 3;
		}
	}
		
		
	for(i=0;i<length;i++){
				
	for(z=0;z<4;z++){
			p[z] = 0;	
		}
		//max = 0;
		for(j=0;j<num;j++){
	
		p[(s[j][i])]++;
	
		
		
	}
	//printf("%d\n",1);
		max = p[0];
		for(l=0;l<4;l++){
			if(max < p[l]){
			max = p[l];
			q=l; //q must be initialized!!
			//q도 반드시 초기화 되어야 한다!!! 
		
			}
			//printf("q = %d\n",q);
			
		}
	
		//printf("%d\n",2);
	k[count]=y[q];
	//printf("k[%d] = %c\n",count,k[count]);
	count+=1;
	q=0;
	if(count==length) break;
	
}
	
	//printf("a\n");
for(i=0;i<length;i++){
	printf("%c",k[i]);
}
printf("\n");
for(i=0;i<num;i++){
	for(j=0;j<length;j++){
		if(k[j] != arr[i][j]) result++;
	}
} 
printf("%d\n",result);
	/*	for(i=0;i<2;i++){
		p[arr[i][1]]++;
		max = p[0];
		for(j=0;j<3;j++){
			if(max < p[0])
			max = p[0];
		}
	}*/
	return 0;
}
