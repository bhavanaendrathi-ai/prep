//second largest number in an array
#include <stdio.h>

int main(){
    
    int arr[6] = {34,24,23,53,27,76};
    int max = arr[0],second_max = -9999999;
    
    for(int i = 0; i < 6; i++)
    {
        if(arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        
        else if(arr[i] > second_max && arr[i] < max)
        {
            second_max = arr[i];
        }
        
    }
    
    printf("largest number is: %d\n",max);
    printf("second largest number is: %d",second_max);
    return 0;
}

//count duplicate elements of an array
#include <stdio.h>

int main(){
    int arr[6] = {21,2,14,14,5,2};
    
    for(int i = 0; i < 6; i++){
        
        int visited = 0;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                visited = 1;
                break;
            }
        }
        
        if(visited)
        {
            continue;
        }
        
        int count = 0;
        for(int k = 0; k < 6; k++)
        {
            if(arr[i] == arr[k])
            {
                count++;
            }
        }
        
        if(count > 1)
        {
        printf("%d occurs %d times\n",arr[i],count);
        }
    }
    
    return 0;
}

//Find elements that occur only once
#include <stdio.h>

int main(){
    int arr[6] = {21,2,14,14,5,2};
    
    for(int i = 0; i < 6; i++){
        
        int visited = 0;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                visited = 1;
                break;
            }
        }
        
        if(visited)
        {
            continue;
        }
        
        int count = 0;
        for(int k = 0; k < 6; k++)
        {
            if(arr[i] == arr[k])
            {
                count++;
            }
        }
        
        if(count <= 1)
        {
        printf("%d occurs %d times\n",arr[i],count);
        }
    }
    
    return 0;
}

//day 2 coding practice
//find element which is closest to the 0 in the array
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int arr[5] = {-8, 3, 5, -2, 9};
    int closet = arr[0];
    
    for(int i = 0; i < 5; i++)
    {
        if(abs(arr[i]) < abs(closet))
        {
            closet = arr[i];
        }
    }
    
    printf("closest to zero: %d", closet);
    
    return 0;
}

//find the array element closest to a given target value
#include <stdio.h>
#include <stdlib.h> 

int main(){
    
    int arr[5] = {1, 3, 5, 7, 9};
    int target = 6;
    int closest = arr[0];
    
    for(int i = 0; i < 5; i++)
    {
        if(abs(arr[i] - target) < abs(closest - target))
        {
            closest = arr[i];
        }
    }
    
    printf("closest to %d: %d", target, closest);
    
    return 0;
}

//Check Whether One Element Is Double Another

#include <stdio.h>

int main(){
    
    int arr[5] = {3, 7, 12, 5, 24};
    int found = 0;
    
    for(int i = 0; i < 5;i++)
    {
        for(int j = 0; j < i; j++){
            if(arr[i] == 2 * arr[j])
            {
                found = 1;
            }
        }
        
    }
    
    if(found == 1)
    {
        printf("yes");
        //break;
    }
    else
    {
        printf("no");
    }
    return 0;
}

//move all zeroes to the end of the array
#include <stdio.h>

int main()
{
    int arr[7] = {0,4,0,2,7,0,5};
    int n = 7;
    int pos = 0;
    
    //moves all the non zeros to front
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }
    
    //zeros moves to the end
    while(pos < n)
    {
        arr[pos] = 0;
        pos++;
    }

    //prints the array
    for(int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
    return 0;
}

//merge two sorted arrays into a single sorted array//done in day3 codeprac3.c