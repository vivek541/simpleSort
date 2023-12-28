# simpleSort- a faster selectionSort variation.

Algorithm:

1. traverse the input array to find the max and min values.
2. swap the min and max values with the leftmost and rightmost array elements.
3. converge the searchSpace by 2 as the 2 elements at located at extremes of the array are now sorted.
4. repeat steps 1 through 3 while searchSpace>=2.

noe: searchSpace refers to the unsorted portion of the input array. Intially it is equal to the size of the input array and decreases by 2 in every subsequent iteration.


