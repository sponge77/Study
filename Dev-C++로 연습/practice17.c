#include <stdio.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main(void){
	int n,m;
	int i,j;
	int min=0;
	int result;
	scanf("%d %d",&n,&m);
	char s[n+1][m+1]; //char�� �ٲ�� ��! (���ڿ��� �ٷ�� ������) ���� �Է� �κп� ���� ������ char��!!! 
	char c[1001];
	
	for(i=1;i<=n;i++){
		scanf("%d",c[i]);
		for(j=1;j<=m;j++){
			min=0;
			s[i][j] = c[i-1];
			if(s[i][j]>0){
				min = MIN(s[i-1][j-1],s[i-1][j]);
				min = MIN(s[i][j-1],min);
				s[i][j] = min+1;
				result = MAX(s[i][j],result);
			}	
		}
	}
	
	printf("%d\n",result*result);
	
	return 0;
}
