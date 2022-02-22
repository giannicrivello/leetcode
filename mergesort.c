#include<stdio.h>
#include<stdlib.h>

//psudocode for merge sort
//Input: two sorted arrays m,n
//Output: m+n sorted array
//goal O(m+n) or in other words O(n);
//
//Initilize two sorted arrays m, n
//Call Merge(m,n, sizeof(m), sizeof(n))
//Merge() logic:
//Merge(){
//int *pm, *pn, *w;
//copy(newN, n); //copy n to new n for use of comparison logic
//set *pm = m[a]
//set *pn = newN[i]
//do (logic for size of output){
//compare(*pm > *pn) 
//    *w = *pn
//    n[k] = *w;
//    k++;
//    a++;
//    repeat;
//
//}
//compare(*pn > *pm){
//    *w = *pn;
//    n[k] = *w;
//    k++;
//    i++;
//    repeat;
//}
//}
//
