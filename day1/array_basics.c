//sum of array elements
#include <stdio.h>

int main(){

    int sum = 0;
    int arr[5] = {10,20,30,40,50};

    for(int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum of the array: %d",sum);
    return 0;
}

//average of the array
#include <stdio.h>

int main(){

    int sum = 0;
    int avg = 0;
    int arr[5] = {10,20,30,40,50};

    for(int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum/5;

    printf("average of the array: %d",avg);
    return 0;
}

//find the largest element of an array
#include <stdio.h>

int main(){

    int arr[5] = {10,20,70,40,50};
    int max = arr[0];
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    

    printf("largest element of the array: %d",max);
    return 0;
}

//find the smallest element 
#include <stdio.h>

int main(){

    int arr[5] = {10,20,70,40,50};
    int min = arr[4];
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    

    printf("smallest element of the array: %d",min);
    return 0;
}

//find the count of even and odd numbers in an array
#include <stdio.h>

int main(){

    int arr[5] = {1,2,7,4,5};
    int even = 0, odd = 0;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }else{
            odd++;
        }
    }
    

    printf("even number: %d\n odd number: %d",even,odd);
    return 0;
}

//Find the number of elements greater than the average
#include <stdio.h>

int main(){
    int sum = 0, avg = 0;
    int arr[5] = {10, 20, 30, 40, 50};
    
    for(int i = 0; i < 5; i++){
        
        sum = sum + arr[i];
    }
    
    avg = sum/5;
    
    int max = avg;
    int count = 0;
    
    for(int j = 0; j < 5; j++)
    {
        if(arr[j] > max)
        {
            max = arr[j];
            count++;
        }
    }
    
    printf("average is: %d\n",avg);
    printf("number of elements greater than average: %d",count);
    return 0;
}

//Find the sum of positive and negative elements separately
#include <stdio.h>

int main()
{
    int a[6] = {-2, 5, -7, 10, 3, -4};
    int pos = 0;
    int neg = 0;
    
    for(int i = 0; i < 6; i++)
    {
        if(a[i] > 0)
        {
            pos = pos + a[i];
        }
        else
        {
            neg = neg + a[i];
        }
    }
    
    printf("sum of positive number: %d\n sum of negative numbers: %d",pos,neg);
    return 0;
}

//Search for an element in an array
#include <stdio.h>

int main(){
    
    int arr[6] = {13,23,34,56,34,25};
    int key = 2;
    int found = 0;
    
    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
        else{
            found = 0;
        }
    }
    
    if(found == 1)
    {
        printf("element is found!");
    }
    else{
        printf("element is not found");
    }
    
    return 0;
}

//count duplicate elements of an array//done in day/codingprac.c
//Find elements that occur only once//done in day2/codingprac.c
//find the second largest number//done in day2/codingprac.c

