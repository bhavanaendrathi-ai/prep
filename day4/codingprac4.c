//second largest number in an array
#include <stdio.h>

int main()
{
    int arr[6] = {3,5,7,8,9,2};
    int largest = arr[0];
    int second = arr[0];
    
    for(int i = 0; i < 6; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second )
        {
            second = arr[i];
        }
    }
    
    printf("largest: %d\n",largest);
    printf("second: %d",second);
    
    return 0;
}

//