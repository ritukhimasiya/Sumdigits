nt sum (int a);
 
int main()
{
    int n, result;
 
    printf("Enter the number: ");
    scanf("%d", &n);
    result = sum(n);
    printf("Sum of digits is %d\n", result);
    return 0;
}
 
int sum (int n)
{
    if (n != 0)
    {
        return (n % 10 + sum (n / 10));
    }
    else
    {
       return 0;
    }
}
