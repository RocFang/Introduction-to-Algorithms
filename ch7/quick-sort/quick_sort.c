int middlelize(int a[], int left, int right)
{
    int flag = a[left];
    int flag_pos = left;
    int i;
    for(i=left+1; i <= right; i++)
    {
        if(a[i] < flag)
        {
            int temp = a[i];
            int j = i;
            while(j > flag_pos)
            {
                a[j] = a[j-1];
                j--;
            }
            a[flag_pos] = temp;
            flag_pos++;

        }
    }
    return flag_pos;
}

int do_quick_sort(int a[], int left, int right)
{
    int middle;
    if(right > left)
    {
        middle = middlelize(a, left, right);
	if(middle > left)
        {
            do_quick_sort(a, left, middle);
        }
        if(middle < right)
        {
            do_quick_sort(a, middle+1, right);
        }
    }
}

int quick_sort(int a[], int len)
{
    do_quick_sort(a, 0, len-1);
}
