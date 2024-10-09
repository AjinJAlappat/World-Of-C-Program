#include<stdio.h>
int main()
{
    int bro1,bro2,latebro;
    printf("Enter two brother comes first.. (1 or 2 or 3)\n");
    scanf("%d %d",&bro1,&bro2);
    if((1<=bro1 && bro1<=3) && (1<=bro2 && bro2<=3) && (bro1!=bro2))
    {
        latebro=6-(bro1+bro2);
    }
    else{
        printf("recheck the brothers came there!!\n");
        return 0;
    }
    
    switch(latebro)
    {
        case 3:
            printf("late brother is %d\n",latebro);
            break;
        case 2:
            printf("late brother is %d\n",latebro);
            break;
        case 1:
            printf("late brother is %d\n",latebro);
            break;
        default:
            printf("invalid brothers came here, recheck whether they are yours!!\n");
    }
    //printf("late brother is %d",latebro);

    return 0;
}