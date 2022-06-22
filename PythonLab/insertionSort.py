# Python program for implementation of Insertion Sort 

  

# creating a Function to do insertion sort 

def insertion_Sort(arr): 

  # Outer Loop to Traverse through 1 to len(arr) 

  for i in range(1, len(arr)):

    key = arr[i]

    # Move elements of arr[0..i-1], that are

    # greater than key, to one position ahead

    # of their current position

    j = i-1

    while j >=0 and key < arr[j]:

      arr[j+1] = arr[j]

      j = j-1

      arr[j+1] = key

  return arr

  

# Driver code to test above 

arr = [80, 10, 60, 40, 70, 50] 

print("Unsorted array is:", arr)  

print ("Sorted array is:",insertion_Sort(arr))

