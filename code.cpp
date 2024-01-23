#include<stdio>
#include<math.h>
 int main()
  {
  	int salary,deduction,remsalary;
  	salary=0;
  	deduction=0;
  	remsalary=0;
  	cout<<"please enter your salary:";
  	cin>>salary;
  	if(salary>50000)
  	 {deduction=salary*5/100;
  	 cout<<"your deducted salary is:"<<deduction;
  	 remsalary=salary-deduction;
  	 cout<<"your remaining salary is:"<<remsalary;
  	 
	   }  
	   {
	   
	   else{printf("your salary is below tax net");
	   }
  }