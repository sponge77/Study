#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
void sort(char s[][21],int n){
	int i, j;
 	char temp[n][21];

 for (i = 0; i < n - 1; i++)
 {
  for (j = i + 1; j < n; j++)
  {
   if (strcmp(s[i], s[j]) > 0)
   {
   	memcpy(temp, s[i], 21);
	memcpy(s[i], s[j], 21);
    memcpy(s[j], temp, 21);
   }
  }
 }
 
}
int main(void){
	int nolisten,nosight,i,j,h=0,q;
	int count=0;
	int k[500000]={0,};
	scanf("%d %d",&nolisten,&nosight);
	//int k[nolisten] = {0,};
	char temp[21];
	char s[nolisten + nosight][21];
	//char p[nolisten + nosight][21];
	char a[nosight][21];
	for(i=0;i<nolisten;i++){
		scanf("%s",s[i]);
	}
	for(j=nolisten;j<(nolisten + nosight);j++){
		scanf("%s",s[j]);
		strcpy(a[j-nolisten],s[j]);
	}
	//max = nolisten > nosight? nolisten : nosight;

	/* k = (int*)malloc(sizeof(int)*nolisten);
	 for(i=0;i<nolisten;i++){
	 	k[i] = 0;
	 }*/
	for(i=0;i<nolisten;i++){
	
		for(j=0;j<nosight;j++){
		//printf("a");
		if(strcmp(s[i], a[j]) == 0){
		
		count++;
	
		//k[i]=i;
		k[i]++;
	
		}
		
		//printf("k[%d] : %d\n",i,k[i]);
		
		
	}
	/**/
	if(k[i] == 0) {
			//printf("a\n");
			strcpy(s[i],"\0");
			//printf("i: %d\n",i);
			}
	}
		
		
	
	printf("%d\n",count);
	sort(s,nolisten);
	for(q=0;q<nolisten;q++){
		if(strcmp(s[q],"\0")!=0)
		printf("%s\n",s[q]);
	}
	/*printf("%d\n",count);
	h=0;
	for(i=0;i<nolisten;i++){
	if(k[i] !=0 ){
	strcpy(p[h],s[i]);
	//printf("p[%d]:%s\n",h,p[h]);
	h++;
	}
	}
    //printf("h : %d\n",h);
	sort(p,h);
	//printf("a\n");
	//printf("%s\n",s[p]);
	//printf("p[0] = %s\n",p[0]);
   //printf("p[1] = %s\n",p[1]);
	for(q=0;q<h;q++){
		printf("%s\n",p[q]);
	}
	*/
	return 0;
}
