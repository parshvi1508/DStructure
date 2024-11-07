#include<stdio.h>
#include<conio.h>
int main()


{
   int a[10],b[10],i,c[10],j,k=0,n1,n2;
   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);
   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);   
   for(i=0;i<n1;i++)
   {       
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) 
       {
          c[k]=a[i];
          k++;
       }
    }
       for(i=0;i<n2;i++)
   {
    for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) 
     {
       c[k]=b[i];
       k++;
     }
   }
   printf("Union of set A and B is:-\n");

    for(i=0;i<k;i++)
      printf("%d ",c[i]);

k=0;
for(i=0;i<n1;i++){
   for(j=0;j<n1;j++){
      if(a[i]==b[j]){
         c[k]=a[i];
         k++;
      
   }
}
        
    }
    printf("\n intersection of set A and set B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
    
    return 0; 
}
