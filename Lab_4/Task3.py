
#Task 3 : NumPy array Basics
# ---  NumPy Array Basics (Fully Commented) ---

import numpy as np  # Import NumPy, a fundamental package for scientific computing in Python

# Create a NumPy array of numeric values (10 elements)
arr = np.array([10, 20, 30, 40, 50, 60, 70, 80, 90, 100])

# Compute basic statistics using NumPy's vectorized methods:
arr_sum = arr.sum()       # Calculate the sum of all elements in the array
arr_mean = arr.mean()     # Calculate the arithmetic mean (average) of the array
arr_max = arr.max()       # Find the maximum value in the array
arr_min = arr.min()       # Find the minimum value in the array

# Build a boolean mask: True where an element is strictly greater than the mean
mask_above_mean = arr > arr_mean

# Use the mask to filter elements that are above the mean value
above_mean_values = arr[mask_above_mean]

# Display results
print("Array     :", arr)                 # Show the original array
print("Sum       :", arr_sum)             # Show the sum of all elements
print("Mean      :", arr_mean)            # Show the mean value
print("Max / Min :", arr_max, "/", arr_min)  # Show the max and min values
print("Above Mean?", mask_above_mean)     # Show which elements are above mean (True/False)
print("Values > mean :", above_mean_values)   # Show elements that are above the mean