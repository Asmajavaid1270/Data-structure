
# Task 4 : Mini Rule-Based System : Health tips

# ---  Mini Rule-Based System - Health Tips (Fully Commented) ---

# Example user input (can replace with input() for interactive use)
feeling = "hungry"  # Try values like "tired", "hungry", "sad", "happy", etc.

# Dictionary mapping known feelings to suggested health tips
responses = {
    "tired": "Take a short rest and drink water.",
    "hungry": "Have a balanced snack (fruit + nuts) or a healthy meal.",
    "sad": "Take a short walk and talk to a friend.",
    "happy": "Great! Keep smiling and spread positivity."
}

# Normalize the feeling string to lowercase to match dictionary keys
feeling_key = feeling.lower()

# Select a response based on the input; provide a default if not found
if feeling_key in responses:
    # If the feeling is recognized, print the suggestion
    print("Feeling    :", feeling)
    print("Suggestion :", responses[feeling_key])
else:
    # If the feeling is not in the dictionary, provide a generic suggestion
    print("Feeling    :", feeling)
    print("Suggestion : I'm not sure about this feeling. Try 'tired', 'hungry', 'sad', or 'happy'.")