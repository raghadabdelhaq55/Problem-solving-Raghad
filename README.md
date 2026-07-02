# Problem Solving

A collection of coding problems I solve while practicing C++ and improving my problem solving skills.

Each problem includes the solution and the main idea used to solve it.

## Hash Map Technique (Two Sum)

For this problem, I used a **Hash Map** to make the solution faster.

Instead of checking every possible pair using nested loops, I go through the array only once and store each number with its index.

For each number, I calculate the value needed to reach the target.

If that value already exists in the hash map, then I found the answer and return both indices.

### Idea Behind the Solution

```text id="f2mz7k"
create empty hash map

go through the array

    needed value = target - current number

    if needed value exists:
        return both indices

    otherwise:
        store current number and index
```

Using this method makes searching much faster because hash map lookup is efficient.

Time Complexity:

O(n)

instead of

O(n²)
## LeetCode Submission Result

<img width="1920" height="1020" alt="Screenshot 2026-07-02 124732" src="https://github.com/user-attachments/assets/a9473b82-6a28-4bd4-b1aa-9b753cf8745f" />

Passed all test cases successfully using Hash Map with O(n) time complexity.

---

## Two Pointer Technique (3Sum)

For this problem, I used the **Two Pointer** technique after sorting the array.

Instead of checking every possible combination of three numbers using three nested loops, I first sort the array and fix one number at a time.

Then I use two pointers to search for two other numbers that make the total sum equal to zero.

If the sum is too small, I move the left pointer forward.

If the sum is too large, I move the right pointer backward.

If the sum equals zero, I store the triplet and skip duplicate values to avoid repeated answers.

### Idea Behind the Solution

```text
sort the array

go through the array

    fix one number

    set left pointer after current number
    set right pointer at end

    while left < right

        calculate total sum

        if sum = 0
            store triplet
            skip duplicates

        if sum < 0
            move left pointer

        if sum > 0
            move right pointer
```

Using sorting with two pointers avoids checking every possible combination manually.

Time Complexity:

O(n²)

instead of

O(n³)

## LeetCode Submission Result
<img width="1919" height="1079" alt="image" src="https://github.com/user-attachments/assets/395ea4a8-09c4-466e-8a6b-40dc2ef1fc12" />

Passed all test cases successfully using Two Pointer technique with O(n²) time complexity.
