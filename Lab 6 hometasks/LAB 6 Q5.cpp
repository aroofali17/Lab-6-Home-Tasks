#include<stdio.h>
int main(){
    int access,hour;
    int mode,entry;
	int pool=1;
    int sauna=2;
    int trainer=4;
    int TF=8;
	while (1)
    {
        printf("Enter access number(9999 to stop) ");
        scanf("%d",&access);
		if (access==9999)
        break;

        printf("Enter current hour (0-23) ");
        scanf("%d", &hour);
        mode=(hour>=22||hour<6)?1:0;

        if(mode==1)
            printf("LATE NIGHT MODE\n");
        else
            printf("STANDARD MODE\n");
        if (mode==0)
            entry=access&(pool|sauna|trainer);
        else
            entry=access&TF;

        if(entry)
            printf("Entry Granted\n");
        else
            printf("Entry Denied\n");
		 if (access&trainer)
            printf("Personal Trainer Access= Yes\n");
        else
            printf("Personal Trainer Access= No\n\n");
    }
	return 0;
}
