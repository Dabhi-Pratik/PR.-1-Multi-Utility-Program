#include<stdio.h>

int main(){
	  
	  
	int salary, hra, da, ta, hra_amount,da_amount,ta_amount;
	
       printf("Salary:");
	   scanf("%d", &salary);
	   
	    printf("HRA:");
	   scanf("%d", &hra);
	   
	    printf("DA:");
	   scanf("%d", &da);
	   
	    printf("TA:");
	   scanf("%d", &ta);
	   
	   hra_amount=hra*salary /100;
	   da_amount=da*salary /100;
	   ta_amount=ta*salary /100;
	   
	   int gross_salary=salary+hra_amount + da_amount + ta_amount;
	   
	   printf("Gross_Salary:%d \n \n",gross_salary);
	   
	 
	   
	int Celsius;
	
	printf("Celsius:");
	scanf("%d" , &Celsius);
	
    float formula=32+(Celsius*9/5);
	printf("Fahrenheit:%f \n \n",formula);
	
	
	int x,y;
	
	   printf("First Angle:");
	   scanf("%d", &x);
	   
	   printf("Second Angle:");
	   scanf("%d",&y);
	
	  int z=180-(x+y);
	  
	  printf("Third Angle:%d",z);
	   
	   
	   	
}
