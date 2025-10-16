
#Task 1 : Function Practice
# --- Task 1: Function Practice - Student Grading (Fully Commented) ---

def get_grade(marks):
    """
    Returns a letter grade based on numeric marks.

    Parameters
    ----------
    marks : int or float
        The marks for a student (0-100).

    Returns
    -------
    str
        Letter grade: one of 'A', 'B', 'C', or 'Fail' according to specified thresholds.
    """
    # If marks are 80 or above, assign grade 'A'
    if marks >= 80:
        return "A"      # 80-100 -> A
    # If marks are 60 or above but less than 80, assign grade 'B'
    elif marks >= 60:
        return "B"      # 60-79  -> B
    # If marks are 40 or above but less than 60, assign grade 'C'
    elif marks >= 40:
        return "C"      # 40-59  -> C
    # If marks are below 40, assign 'Fail'
    else:
        return "Fail"   # <40    -> Fail

# Example usage: list of marks for demonstration
marks_list = [95, 72, 38, 60, 45]

# Loop through the list and print the grade for each entry
for m in marks_list:
    # Use f-string to display both marks and the corresponding grade
    print(f"Marks: {m} -> Grade: {get_grade(m)}")