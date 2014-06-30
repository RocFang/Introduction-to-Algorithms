void keep_heap(int a[], int end)
{
    int i;
    int left, right, largest;
    int temp;
    for(i = end; i >= 0; i--)
    {
        largest = i;
        left = 2 * i + 1;
        right = 2 * i + 2;  

        if(left <= end)
        {
            if(a[i] < a[left])
            {
                largest = left;
            }        
    
            if(right <= end && a[largest] < a[right])
            {
                largest = right;
            }

            if(largest != i)
            {
                temp = a[i];
                a[i] = a[largest];
                a[largest] = temp;     
            }
        }  
    } 
}

void heap_sort(int a[], int len)
{
    int end = len -1;
    int temp;
    
    while(end >= 0)
    {
        keep_heap(a, end);
        temp = a[0];
        a[0] = a[end];
        a[end] = temp;

        end--;
    }     
}
