
# Task 2 : Text Cleaner

# --- Task 2: Text Cleaner (NLP Pre-processing Step) (Fully Commented) ---

import string  # Import string module for string.punctuation (all punctuation symbols)

# Example input sentence (can replace with input() to get user input)
sentence = "Hello, Students! AI is amazing, isn't it?"

# 1) Convert the input sentence to lowercase.
# This helps reduce the number of unique words by treating "Hello" and "hello" as the same word.
sentence_lower = sentence.lower()

# 2) Remove punctuation characters.
# For each punctuation character in string.punctuation, replace it with an empty string.
cleaned = sentence_lower
for p in string.punctuation:
    cleaned = cleaned.replace(p, "")

# 3) Split the cleaned sentence into words (tokens) using whitespace.
# This step converts the string into a list of words for further processing.
words = cleaned.split()

# Display results at each stage for clarity.
print("Original:", sentence)            # Original sentence
print("Lower   :", sentence_lower)      # Sentence after lowercasing
print("Cleaned :", cleaned)             # After punctuation is removed
print("Words   :", words)               # Final list of words (tokens)