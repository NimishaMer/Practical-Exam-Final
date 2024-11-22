#include<stdio.h>

int main(){
	int angle1 , angle2 , angle3 ;
	
	printf("ENTER THE FIRSHT ANGLE1 :");
	scanf("%d",&angle1);
	
	printf("ENTER THE SECOND ANGLE2 :");
	scanf("%d",&angle2);
	
	angle3= 180-(angle1+angle2);
	
	printf("ENTER THE THARD ANGLE :%d",angle3);
	
	return 0;
	
}
