#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int [], int, int );
void ssort(int [], int);

void ssort(int arr[],int l) /*ssort definition*/
{
for(int i=0;i<l;i++)
 {
 swap_max(arr,l,i);/*calling swap_max inside ssort*/
 }
}

void swap_max(int arr[],int l,int n)/*swap_max definition*/
{
int largest=0;
int i;
int index;
for(i=n;i<l;i++)
 {
 if(arr[i]>largest)
   {
   largest=arr[i];
   index=i;
   }
 }
int temp;
temp=arr[index];
arr[index]=arr[n];
arr[n]=temp;
}
