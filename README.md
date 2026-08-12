## Description

This PR adds a C++ solution to swap alternate elements of an array.

### Approach

* Traverse the array using a loop with `i += 2`.
* Check whether the next element exists using `i + 1 < size`.
* Swap the current element with the next element.
* Print the updated array.

### Example

For the array:

`[1, 2, 3, 4, 5]`

After swapping alternate elements:

`[2, 1, 4, 3, 5]`

For an even-sized array:

`[7, 6, 5, 4, 3, 2]`

Output:

`[6, 7, 4, 5, 2, 3]`

### Complexity

* Time Complexity: **O(n)**
* Space Complexity: **O(1)**

### Language

* C++
