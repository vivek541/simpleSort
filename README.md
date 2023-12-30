#simpleSort- a faster selectionSort variation.

Algorithm:

1. traverse the input array to find the max and min values.
2. swap the min and max values with the leftmost and rightmost array elements.
3. converge the searchSpace by 2 as the 2 elements located at extremes of the array are now sorted.
4. repeat steps 1 through 3 while searchSpace>=2.

note: searchSpace refers to the unsorted portion of the input array. Intially it is equal to the size of the input array and decreases by 2 in every subsequent iteration.
      the searchSpace changes as shown:   after iteration1 ---> 1 |2  8  7  0| 9
                                          after iteration2 ---> 1  0 |2  7| 8  9
                                          after iteration3 ---> 1  0  2  7  8  9   (here, searchSpace == 0 so we break out of the loop)


