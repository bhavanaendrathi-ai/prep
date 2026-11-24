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

//move all zeroes to the end of the array
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

//Count how many times each element appears in an array.
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
        
        printf("%d occurs %d times\n",arr[i],count);

    }
    
    return 0;
}
