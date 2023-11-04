//calclute the avrage of numbers entered by the user
# include <stdio.h>
int main(){
    int num=0,sum=0,count=0;
    printf("enter any number , -1 to stop\n ");
    scanf("%d",&num);
    while(num !=-1){
       count++;
        sum=sum+num;
        printf("enter any number , -1 to stop\n ");
        scanf("%d",&num);

    }
    printf(" sum=%d \n",sum);

    float avg;
    avg= sum%count;
    printf("\n avareag=%f \n",avg);

    return 0;
}
