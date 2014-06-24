void insertion_sort(int a[], int n)
{
    int i, j, tmp;
    for(i = 1; i < n; i++)
    {
        tmp = a[i]; 
        j = i-1;
        while(a[j] > tmp && j >= 0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp;
    }  
}
