int get_pivot(int arr[], int left, int right)
{
    return arr[(left + right)/2 ];
}

int partition(int arr[], int left, int right)
{
      int i = left, j = right;
      int tmp;
      int pivot = get_pivot(arr, left, right);
     
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
     
      return i;
}
 
void do_quick_sort(int arr[], int left, int right) {
      int index = partition(arr, left, right);
      if (left < index - 1)
            do_quick_sort(arr, left, index - 1);
      if (index < right)
            do_quick_sort(arr, index, right);
}

void quick_sort(int arr[], int len)
{
    do_quick_sort(arr, 0, len-1);
}
