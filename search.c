#include<stdio.h>
void main()
{ 
     int i,n,low,high,mid,a[100],ele,found=0;
     printf("ENTER NO OF ELEMENTS");
     scanf("%d",&n);
     printf("ENTER THE ELEMENTS");
     for(i=0;i<n;i++)
     {  
         scanf("%d",&a[i]);
     }
      printf("ENTER THE SEARCHD ELEMENT ");
      scanf("%d",&ele);
     low=0;
    high=n-1;
    while(low<=high)
    { 
         mid=(low+high)/2;
         if(ele==a[mid])
         {printf("ELEMENT TO BE FOUND=%d",ele);
            printf("INDEX OF ELMENT=%d",i);
            found=1;
            break;
         }
         else
         { 
            if(ele<=a[mid])
            high=mid-1;
            else
            low=mid+1;
         }
         if(found==0)
         { 
            printf("element not found");
         }
    }
}