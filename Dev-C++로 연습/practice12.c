#include <stdio.h>
struct Point{
	int x,y;
};
 
struct Point Sum(struct Point P1,struct Point *P2){ //함수이다 
	struct Point Po;
	Po.x = P1.x+P2->x;
	Po.y = P1.y+P2->y;
	return Po;
}

int main(void){
	struct Point A={1,2};
	struct Point B = {3,4};
	struct Point C;
	
	C = Sum(A,&B);
	
	printf("Point C : (%d, %d)\n",C.x,C.y);
	
	return 0;
}
