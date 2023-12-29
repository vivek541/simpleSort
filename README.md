#simpleSort- a faster selectionSort variation.

Algorithm:

1. traverse the input array to find the max and min values.
2. swap the min and max values with the leftmost and rightmost array elements.
3. converge the searchSpace by 2 as the 2 elements located at extremes of the array are now sorted.
4. repeat steps 1 through 3 while searchSpace>=2.

note: searchSpace refers to the unsorted portion of the input array. Intially it is equal to the size of the input array and decreases by 2 in every subsequent iteration.
      the searchSpace changes as shown:   iteration1 ---> 8  2  1  9  0  7
                                          iteration2 ---> 1 |2  8  7  0| 9
                                          iteration3 ---> 1  0 |2  7| 8  9   (here, searchSpace == 2 which satisfies the loop condition, therefore the array is sorted)


