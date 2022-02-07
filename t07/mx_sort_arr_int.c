void mx_sort_arr_int(int *arr, int size)
{
    int noSwap;
    int tmp;

    for (int i = 0; i < size; i++)
    {
        noSwap = 1;

        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                noSwap = 0;
            }
        }

        if (noSwap == 1)
        {
            break;
        }
    }
}
