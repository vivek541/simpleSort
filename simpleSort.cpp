/*
 * Author: VivekPrasad
 * Date: December 29, 2023
 * Purpose: A modified & faster selectionSort variation
 */
#include<bits/stdc++.h>
using namespace std;

void simpleSort(int arr[], int arrSize){

    /*initial searchSpace bounds*/
    int left = 0;
    int right = arrSize-1;

    int maxElem, minElem, maxElemIndex, minElemIndex;
    maxElem = minElem = arr[left];
    minElemIndex = maxElemIndex = left;

    while(left < right){

        //1. iterate array to find the min and max elements & their indices
        for(int i = left; i<= right; i++){
            if(arr[i] >= maxElem){
                maxElem = arr[i];
                maxElemIndex = i;
            }
            if(arr[i] <= minElem){
                minElem = arr[i];
                minElemIndex = i;
            }
        }

        //2. swap the min and max elements with leftmost and rightmost elements 
        if(left == maxElemIndex && right == minElemIndex){
            /*here if we do 2 swaps then both swaps will nullify each other*/
            swap(arr[left], arr[minElemIndex]);
        }
        else if(left == maxElemIndex){
            swap(arr[right], arr[maxElemIndex]);
            swap(arr[left], arr[minElemIndex]);
        }
        else{
            swap(arr[left], arr[minElemIndex]);
            swap(arr[right], arr[maxElemIndex]);
        }

        //3. converging the searchSpace window as the leftmost and rightmost elements are sorted now
        left++;
        right--;
    }
}

int main(){

    int arr[] = {8,0,2,5,8,4,1};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    simpleSort(arr, arrSize);

    //display sorted array
    for(int i = 0; i< arrSize; i++) cout<< arr[i]<< endl;

    return 0;
}
