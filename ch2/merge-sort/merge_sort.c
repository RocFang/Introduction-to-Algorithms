#include <stdlib.h>

void merge(int a[], int start, int middle, int end)
{
    int n1 = middle - start + 1;
    int n2 = end - middle;

    int *left = (int *)malloc(sizeof(int) * n1);
    int *right = (int *)malloc(sizeof(int) * n2);

    int i, j, k;
    for(i = 0; i < n1; i++)
    {
        left[i] = a[start + i];
    }

    for (i = 0; i < n2; i++)
    {
        right[i] = a[middle+1+i];
    }
    for(i = 0; i< n1 ; i++)
    {
        printf("%d ", left[i]);
    }
    printf("\n");
    for(i=0;i<n2;i++)
    {
        printf("%d ", right[i]);
    }
    printf("\n");
   
    for(i = start, j = 0, k = 0; j < n1 && k < n2; i++)
    {
        if(left[j] >= right[k])
        {
            a[i] = right[k];
            k++;    
        }
        else
        {
            a[i] = left[j];
            j++;
        }
    }
        
    if(j >= n1 && k < n2)
    {
        for(; i <= end; i++, k++)
        {
            a[i] = right[k];
        } 
    }
    if(k >= n2 && j < n1) 
    {
        for(; i<=end; i++, j++)
        {
            a[i] = left[j];
        }
    }
    //}
    free(left);
    free(right);
    int z = 0;
    printf("======================\n");
    printf("hahahahah\n");
    for(z=start;z<=end;z++)
    {
        printf("%d ", a[z]);
    }
    printf("\n");
    printf("======================\n");
    
}

void do_merge_sort(int a[], int left, int right)
{
    if(left < right)
    {
        int middle = (left + right) / 2;
        do_merge_sort(a, left, middle);
        do_merge_sort(a, middle+1,right);
        merge(a, left, middle, right);
    }
 
}

void merge_sort(int a[], int len)
{
    do_merge_sort(a, 0, len-1);
}
