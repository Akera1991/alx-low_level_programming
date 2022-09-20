/**
 * swap_int - swaps the values of two integers using the input parameters
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * return :nothing
 */
void swap_int(int *a, int *b)
{
int temp; 
temp = *a; 
*a = *b; 
*b = temp;    
}
