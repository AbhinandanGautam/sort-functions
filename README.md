Different c++ sorting function

*In each function vector<int> is argument type

1. Selection Sort
   The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. 
   The algorithm maintains two subarrays in a given array:
   1) The subarray which is already sorted.
   2) Remaining subarray which is unsorted.
   In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.

2. Bubble Sort
   Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

3. Insertion Sort
   Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
   Algorithm :
   To sort an array of size n in ascending order: 
   1: Iterate from arr[1] to arr[n] over the array. 
   2: Compare the current element (key) to its predecessor. 
   3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

4. Merge Sort
   Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The merge() function is used for merging two halves. 

5. Quick Sort
   QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. 
   The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.

6. Wave Sort
   Sort an array in form of a wave
   Following are simple steps. 
   Traverse all even positioned elements of input array, and do following. 
   a) If current element is smaller than previous odd element, swap previous and current. 
   b) If current element is smaller than next odd element, swap next and current.

7. Heap Sort
   Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the minimum element and place the minimum element at the beginning.
   Heap Sort Algorithm for sorting in increasing order: 
   1. Build a max heap from the input data. 
   2. At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of heap by 1. Finally, heapify the root of the tree. 
   3. Repeat step 2 while the size of the heap is greater than 1.