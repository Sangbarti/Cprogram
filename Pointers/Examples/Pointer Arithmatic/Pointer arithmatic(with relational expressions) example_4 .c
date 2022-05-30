int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = &arr[0];  // ptr points to arr[0]

    while(ptr <= &arr[4])
    {
        // ptr will always point within the array
        // Do some task

        // Move ptr to next array element
        printf("%d\n",*ptr);
        ptr++;
    }
 
    return 0;
}

