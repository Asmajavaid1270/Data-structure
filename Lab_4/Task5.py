
# Task 5 :NumPy decision even or odd

# ---  NumPy Decision - Even/Odd Analyzer (Fully Commented) ---

import numpy as np  # Import NumPy for numerical operations

# Create integers from 1 to 20 (inclusive of 1, exclusive of 21)
arr = np.arange(1, 21)

# Boolean masks: True where the condition holds
even_mask = (arr % 2 == 0)    # Mask for even numbers (True if divisible by 2)
odd_mask = ~even_mask         # Logical NOT of even_mask gives mask for odd numbers

# Filter arrays using masks
evens = arr[even_mask]        # Select only even numbers
odds = arr[odd_mask]          # Select only odd numbers

# Count evens and odds using len()
n_evens = len(evens)
n_odds = len(odds)

# Display results
print("All numbers :", arr)                       # Show full array
print("Even mask   :", even_mask)                 # Show boolean mask for evens
print("Odd mask    :", odd_mask)                  # Show boolean mask for odds
print("Evens       :", evens, "→ count =", n_evens)  # Show even values and their count
print("Odds        :", odds, "→ count =", n_odds)    # Show odd values and their count