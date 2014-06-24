void insertion_sort(int a[], int n)
{
    int i, j, k, tmp;
    for(i = 1; i < n; i++)
    {
        tmp = a[i]; 
        for(j = 0; j < i; j++)
        {
            if(a[j] > a[i])
            {
                for(k = i; k > j; k--)
                {
                    a[k] = a[k-1];
                }
                a[j] = tmp;
                break;
            }
        }         
    }  
}
