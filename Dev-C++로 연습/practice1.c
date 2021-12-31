#include <stdio.h>
int record[5][5];
void WriteRecord(void){//for saving student's score
	int i,j;
	
	for(i=0;i<4;i++){
		printf("%d번째 학생의 성적 입력 \n",i+1);
		for(j=0;j<4;j++){
			printf("과목 %d:",j+1);
			scanf("%d",&record[i][j]);
			
		}
	
	}	
	
}
//record[0][4] = sum1[0];
//record[1][4] = sum1[1];
//record[2][4] = sum1[2];
//record[3][4] = sum1[3];
//record[4][0] = sum2[0];
//record[4][1] = sum2[1];
//record[4][2] = sum2[2];
//record[4][3] = sum2[3];
void WirteSumRecord(void){//write the sum of records per subject
	int i,j;
	int sum1[4]={0,};
	int sum2[4]={0,};
    for(i=0;i<4;i++){
    	for(j=0;j<4;j++){
    		sum1[i] += record[i][j];
    		sum2[i] += record[j][i];
		}
	}
	for(i=0;i<4;i++){
		record[i][4] = sum1[i];
		record[4][i] = sum2[i];
		record[4][4] += sum1[i];
	}
	
}
void ShowAllRecord(void){//show all the results saved in the array
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",record[i][j]);
		}
		printf("\n");
	}
}	
int main(void){

WriteRecord();
WirteSumRecord();
ShowAllRecord();	
	return 0;
}
