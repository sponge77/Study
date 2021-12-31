#include <stdio.h>
int main(void)
{
int n,m;
int i,j;
scanf("%d %d",&n,&m);
char arr[n][m];
for(i=0;i<n;i++){
for(j=0;j<m;j++){
fflush(stdin);
scanf("%c",&arr[i][j]);
}
}
printf("\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%c ",arr[i][j]);
}
printf("\n");
}
}
