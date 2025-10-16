
# WRAP- UP
# ---AI Data Summary (Fully Commented) ---

import numpy as np  # Import NumPy for statistical and array operations

# Set a random seed so results are repeatable (optional, but useful for debugging/demonstration)
np.random.seed(42)

# Generate random marks for 10 students between 0 and 100 (inclusive of 0, exclusive of 101)
marks = np.random.randint(0, 101, size=10)

# Compute summary statistics
avg = marks.mean()      # Calculate the arithmetic mean of the marks
topper = marks.max()    # Find the highest score
lowest = marks.min()    # Find the lowest score

# Boolean mask for students scoring above average
above_avg_mask = marks > avg          # True for marks above the class average
above_avg_scores = marks[above_avg_mask]  # Filter marks above the average

# Display the full analysis
print("Marks array         :", marks)                       # Show all marks
print("Class Average       :", round(avg, 2))               # Show average (rounded to 2 decimals)
print("Topper Score        :", topper)                      # Show highest mark
print("Lowest Score        :", lowest)                      # Show lowest mark
print("Above-Average Mask  :", above_avg_mask)              # Show boolean mask for above-average scores
print("Above-Average Scores:", above_avg_scores)            # Show only the above-average scores