int main()
{
    int num = 10, num1 = 12;
    int *ptr1 = &num;    // ptr1 points to num
    int *ptr2 = &num1;    // ptr2 also points to num

    if(ptr1 == ptr2)
    {
        // Both pointers points to same memory location
        // Do some task 
        printf("Same value");   
	
    }
    else
    {
    	printf("Not same");
	}

    return 0;
}

