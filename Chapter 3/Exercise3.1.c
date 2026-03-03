#include <stdio.h>
int binsearch(int x, int v[], int n);
int main(){
    int a[]= {2, 5, 7, 8, 10, 15, 20};
    int n = 7;
    printf("%d",binsearch(7,a,n));
    return 0;
}
 int binsearch(int x, int v[], int n){
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low < high){
        mid = (low+high)/2;
        if (x <= v[mid])
            high = mid;
        else
            low=mid+1;
        }
    if (low==mid)
        return mid;
    else
        return -1;   /* no match */
   }
