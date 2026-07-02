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

أكيد — هذا تكملة بنفس **نفس الأسلوب** اللي كتبتيه، للـ **Course Schedule** (آخر واحد حليناه). انسخي وحطيه تحتهم مباشرة:

---

## Graph + Topological Sort Technique (Course Schedule)

For this problem, I used **Graph Traversal** with **Topological Sort** to check if completing all courses is possible.

Each course can depend on another course before taking it, so I represented all courses as a graph.

Instead of checking prerequisites repeatedly, I stored the dependencies for each course and counted how many requirements each course has.

I started with the courses that have no prerequisites.

Each time I completed one course, I updated the remaining dependent courses.

If all courses can be processed successfully, then finishing all courses is possible.

If there is a cycle between courses, then completing all courses becomes impossible.

### Idea Behind the Solution

```text
create graph for all courses

store prerequisites

count dependencies for each course

find courses with no prerequisites

process courses one by one

    remove completed course

    update connected courses

    if dependency becomes zero
        add course to process

if all courses are completed
    return true

otherwise
    return false
```

Using graph traversal helps avoid checking prerequisites multiple times.

Time Complexity:

O(V + E)

where:

V = number of courses
E = number of prerequisites

instead of checking dependencies manually many times.

## LeetCode Submission Result

<img width="1909" height="848" alt="Screenshot 2026-07-02 135343" src="https://github.com/user-attachments/assets/bd883ab3-5d32-4467-8d06-392863d77d47" />

Passed all test cases successfully using Graph Traversal and Topological Sort with O(V + E) time complexity.
