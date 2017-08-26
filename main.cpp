#include <iostream>
using namespace std;
/*
ptr++;    // Pointer moves to the next int position (as if it was an array)
++ptr;    // Pointer moves to the next int position (as if it was an array)
++*ptr;   // The value of ptr is incremented
++(*ptr); // The value of ptr is incremented
++*(ptr); // The value of ptr is incremented
*ptr++;   // Pointer moves to the next int position (as if it was an array). But returns the old content
(*ptr)++; // The value of ptr is incremented
*(ptr)++; // Pointer moves to the next int position (as if it was an array). But returns the old content
*++ptr;   // Pointer moves to the next int position, and then get's accessed, with your code, segfault
*(++ptr); // Pointer moves to the next int position, and then get's accessed, with your code, segfault
*/

int a[7] = {3,6,8,1,3,6,8};
int b, result[7], i ,j;

void reverse2(int*, int);

void reverse1(int [], int);
int main()
{
    reverse2(a,7);//As seen in the code, Pointers give us a much accurate result
    cout<<endl;
    reverse1(a,7);

    return 0;
}

void reverse1(int c[], int b)
{
    for ( i=0, j=b-1;i<b/2;i++,j--)
    {
        int temp;
        temp = a[i];
        a[i] =a[j];
        a[j] = temp;
    }
    for (i=0;i<b;++i)
    {
        cout<<a[i]<<",";
    }


}

void reverse2(int* ptr, int b)
{
    int* startptr = &a[0];
    int* stopptr = &a[b-1];

    while(startptr<stopptr)
    {
        int temp = *startptr;
        *startptr++ = *stopptr;
        *stopptr-- = temp;
    }
    for(int i=0; i<b;i++)
    {
        cout<<a[i]<<";";
    }
}
