//2495¹ø ¹®Á¦ 
//experiment : fucntion first or code writting first?? Let's take a look at it.
//checking the pointer
#include <stdio.h>
int ret[10] = {0,};
char arr[8];
bool sequence(char *arr,int n){	
	int i,j;
	bool flag=false;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i] != arr[j]){
				break;
			}
			flag = true;
		}
		if(flag == true) return true;
		i=j-1;
	}
	return false;
}
void check(int n){
	int i,j;
		for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i] != arr[j]){
				break;
			}
			ret[arr[i]-'0']++;
		
			
			i=j-1;
		}
	
}
}
void cal(int *max){
	int i;
	*max = ret[0];
	for(i=0;i<10;i++){
	if(*max < ret[i])
	*max = ret[i];
	}
	
}
int main(void){
	int i=0;
	int max=0;
	while(i<3){
	scanf("%s",arr);
	//printf("%c\n",'a');
	//printf("%s\n",arr);
	if(sequence(arr,sizeof(arr)/sizeof(char)) == false){
		printf("%d\n",1);
	}else{
		check(8);
		cal(&max);
		printf("%d\n",max+1);
	}
	i++;
}
	return 0;
}
