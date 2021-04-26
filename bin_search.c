#include<stdio.h>

/* Binary search*/

int binary_search(int x, int v[], int n){

    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high){
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid;
        else if (x > v[mid])
            low = mid + 1;
        else                    // found a match
            return mid;
    }
    return -1;
}

int main(){

}