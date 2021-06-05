#include "rbb.h"

int rbs(int *v, int left, int right, int val) {

    int mid = (left + right) / 2;  //middle element

    if (right < left) //stop codition, pointers shifted
        return -1;

    if (val == v[mid]) //found value
        return mid;  

    if (val > v[mid]) //value is on vector right portion
        return rbs(v, mid+1, right, val);

    if (val < v[mid]) //value is on vector left portion
        return rbs(v, left, mid-1, val);
}