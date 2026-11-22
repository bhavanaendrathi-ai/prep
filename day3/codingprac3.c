//merge two sorted arrays into one sorted array without using built in sorting functions
#include <stdio.h>

int main()
{

    int a1[3] = {1, 3, 5};
    int a2[3] = {2, 4, 6};
    int a3[10];

    int i = 0, j = 0, k = 0;

    while( i < 3 && j < 3)
    {
        if(a1[i] <= a2[j])
        {
            a3[k++] = a1[i++];
        }
        else{
            a3[k++] = a2[j++];
        }
    }

    while(i < 3)
    {
        a3[k++] = a1[i++];
    }

    while(j < 3)
    {
        a3[k++] = a2[j++];
    }

    for(int a = 0; a < 6; a++)
    {
        printf("%d\t", a3[a]);
    }

    return 0;
}

//c program to check weather 2 numeric ranges averlap
#include <stdio.h>

int main(){
    
    int a,b,c,d;
    
    printf("enter the 1st range: ");
    scanf("%d %d",&a,&b);
    
    printf("enter the 2nd range: ");
    scanf("%d %d",&c,&d);
    
    if(b < c || d < a)
    {
        printf("doesnt over lap");
    }
    else{
        printf("does overlap");
    }
    
    return 0;
}

//write a c program to repeat array elements to construct a new array
#include <stdio.h>

int main(){
    
    int r, k = 0, newArr[50];
    
    int arr[5] = {1,2,3,4,5};
    
    printf("enter the repeatator(r): ");
    scanf("%d", &r);
    
    
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < r; j++)
        {
            newArr[k] = arr[i];
            k++;
        }
    }
    
    for(int i = 0; i < k; i++)
    {
        printf("%d\t",newArr[i]);
    }
    
    return 0;
}

//generate arrays using forward and backward number pattern
#include <stdio.h>

int main(){
    
    int n, start = 1;
    
    printf("enter n: ");
    scanf("%d",&n);
    
    int end = n;
    
    while(start <= end)
    {
        printf("%d,", start);
        start++;
        
        if(start <= end)
        {
            printf("%d,",end);
            end--;
        }
    }
    
    return 0;
}

//find the average of array elements satisfying given divisibility conditions
#include <stdio.h>

int main()
{
    int arr[50];
    int n,d,avg;
    int sum = 0, count = 0;
    
    printf("enter size: ");
    scanf("%d",&n);
    
    printf("enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("enter divisor: ");
    scanf("%d",&d);
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % d == 0)
        {
           sum = sum + arr[i];
           count++;
        }
    }
    
    if(count > 0)
    {
        avg = sum / count;
        printf("average: %d",avg);
    }
    else
    {
        printf("no elements are found");
    }
    
    return 0;
}