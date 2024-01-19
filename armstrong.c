// check which one is arstrong no. which is palindrom also ...???
// armstrong no. eg :- 1^2+3^2 = 13
// palndrom no. :- 121 , 1221 , numbers which are same whether we right it from start or end...


    #include <stdio.h>
int main()
{
  int n,i,sum=0,sum1=0,c=0,a,rev=0,t,p,b;
  printf("Enter a number:\n");
  scanf("%d",&n);
  p=t=n;
  while(p>0) /*Here we will count the number of digits present in the number*/ 
  {
    p/=10;
    c++;
  }
  while(n>0)
  {
    a=n%10; //this will give the last digit of the number//
    sum=sum+a;
    rev=rev*10+a;
    n=n/10;
    sum1=sum1+(a*a*a);
    
  }
  printf("Total number of digits= %d",c);
  printf("\nSum of all the digits= %d",sum);
  printf("\nReverse of %d is= %d",t,rev);
  if(t==rev)
  {
    printf("\n%d ia palindrome number\n",t);
  }
  else 
  {
    printf("\n%d is not a palindrome number\n",t);
  }
  
  if(t==sum1)
  {
    printf("%d is an Armstrong number",t);
  }
  else
  {
    printf("%d is not an Armstrong number",t);
  }
  
}


