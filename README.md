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
<img width="943" height="696" alt="Screenshot 2026-07-02 130011" src="https://github.com/user-attachments/assets/8d457e31-9ffa-4c16-8e03-5d7e30495cc7" />

Passed all test cases successfully using Hash Map with O(n) time complexity.
