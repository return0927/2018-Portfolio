#include <stdio.h>


int main()
{
    float second, sum=0;
    int count=1;
    
    while(count<4){
	
	    printf("100MM 달리기 걸린 시간");
	    scanf("%f", &second); 
	    
	    
	    sum=sum+second;
	    
	    if(second < 10.0)
	   {
		    printf("금메달\n"); 
	   } else if(second < 15.0) {
	        printf("은메달\n");
	   } else if(second < 20.0) {
	        printf("동메달\n");
	   } else {
	        printf("잘했어\n") ;
	   }
       count++;
	   
    }
       
          
   printf("***********************************\n");
   printf("평균 시간 : %.1f",sum/3.0);
    return 0;


}


	
