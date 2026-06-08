//AS20250634    
//N K S S Chandrasekara

#include <stdio.h>
#include <stdlib.h>


int main(){

    int math=0;
    int english=0;
    int science=0;
    float fullmark=0;
    float average=0;
    float highets=0;

    printf("enter your mathmatics marks out of 100:");
    scanf("%d",&math);

    printf("enter your english marks out of 100:");
    scanf("%d",&english);

    printf("enter your science marks out of 100:");
    scanf("%d",&science);

    
        fullmark=math+science+english;
        average=fullmark/3;

        printf("Total:%.2f \n",fullmark);
        printf("average:%.2f \n",average);

        if(average>=80){
            printf("grade: A \n");
        }
        else if(average>=70){
            printf("grade: B \n");
        }
        else if(average>=60){
            printf("grade: C \n");
        }
        else if (average>50){
            printf("grade: D \n");
        }
        else{
            printf("grade: F \n");
        }

        if (math>40 && science>40 && english>40){
            printf("PASS \n");
        }
        else {
            printf("FAIL \n");
        }

     
        highets=math;
        if (science>highets){
            highets=science;
        }
        if (english>highets){
            highets=english;
            
        }
        printf("highets:%.2f \n",highets);

    
    return 0;
}
