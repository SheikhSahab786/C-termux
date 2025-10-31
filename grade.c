#include <stdio.h>
   int main (){
    int sum,eng,math, hindi, urdu;
    float pre;
    printf("enter eng no...");
    scanf("%d",&eng);
    printf("enter math no...");
    scanf("%d",&math);
    printf("enter hindi no...");
    scanf("%d",&hindi);
    printf("enter urdu no...");
    scanf("%d",&urdu);
    
    sum=(eng+math+hindi+urdu);
    pre = sum/4;
    
    printf("total no...%d\n",sum);    
    printf("percentage....%.2f\n",pre);

            
  if (pre>80){
     printf("Grade A");      
       }
   else if (pre>70){
        printf("Grade B");
        }
   else if (pre>60){
        printf("Grade C");
        }
    else if (pre>50){
       printf("Grade D");
        }
     else if (pre>33){
        printf("Grade E");
        }
     else if (pre>0){
            printf("fail");
    }
   }
   
