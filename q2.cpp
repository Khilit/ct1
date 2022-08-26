//Khilit Gupta
//2010990381
//set-03
//Q2
#include <stdio.h>
using namespace std;
 
// To find a pair with a given sum in an array 
void findPair(int num[], int n, int target)
{
    // iiterate till second last element
    for (int i = 0; i < n - 1; i++)
    {
        // iiterate from the i'th element until the last element
        for (int j=i + 1; j < n; j++)
        {
            // if the sum is found that we want, print it
            if (num[i] + num[j] == target)
            {
                printf("Pair found (%d, %d)\n", num[i], num[j]);
                return;
            }
        }
    }
 
    // if pair is not found
    printf("Pair not found");
}
 int main(void)
{
    int num[] = { 5, 2, 6, 8, 1, 9 };
    int target = 12;
    int n = sizeof(num)/sizeof(num[0]);
 
    findPair(num, n, target);
 
    return 0;
}
