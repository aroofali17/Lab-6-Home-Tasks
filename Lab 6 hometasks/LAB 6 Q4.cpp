#include<stdio.h>
int main(){
	int noc,cw,choi,result,Tresult;
	printf("Enter No of containers to check ");
	scanf("%d",&noc);
	for(int i=1;i<=noc;i++){
	printf("\nEnter Container Weight in kg ");
	scanf("%d",&cw);
	printf("\nEnter 1 for General Goods, 2 for Hazardous Materials, and 3 for Refrigerated Goods ");
	scanf("%d",&choi);
	switch(choi){
		case 1:
			printf("\nYour Cargo type is for General Goods ");break;
		case 2:
			printf("\nYour Cargo type is for Hazardous Materials ");break;
		case 3:
			printf("\nYour Cargo type is for Refrigerated Goods ");break;
		default:
			printf("\nINVALID");break;
		}
		if (choi==1){
			if(cw<=20000)
			printf("\nGeneral Goods Loaded");
			else
			printf("\nloaded weight exceeds");
			}
			else if (choi==2){
			if(cw<=15000&&i%2!=0)
			printf("\nHazardous Goods Loaded");
			else
			printf("\nloaded weight exceeds");
			}
		   else if (choi==3){
			if(cw<=18000)
			printf("\nRefrigerator Goods Loaded");
			else
			printf("\nloaded weight exceeds");
		}
		else
		printf("\nINVALID");
		result=cw%97;
		Tresult=result%100;
		printf("\n2DIGIT CODE IS: %02d",Tresult);
	}
	return 0;
}
