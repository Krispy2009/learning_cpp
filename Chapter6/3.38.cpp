int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
// returns a pointer to an array of five int elements
decltype(odd) &arrPtr(int i)
{
    return (i % 2) ? odd : even; // returns a pointer to the array
}
