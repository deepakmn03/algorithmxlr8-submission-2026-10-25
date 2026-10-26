<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Reverse Linked List

**Difficulty:** `Easy`

## Problem

Given the head of a singly linked list, reverse the list, and return the reversed list.

Reversing means changing the next pointers so the last node becomes the new head and every node points to the node that used to come before it. The values themselves are not changed, only the links. An empty list stays empty and a list with one node stays the same.

Follow up: a linked list can be reversed either iteratively or recursively. Could you implement both? The iterative way walks through the list once with three pointers (previous, current, next) in O(n) time and O(1) extra memory.

Input format: the first line contains an integer n, the number of nodes. If n > 0, the second line contains the n node values from head to tail, separated by spaces. If n is 0 the second line is empty or missing.

Output format: print the values of the reversed list from head to tail on one line, separated by single spaces. If the list is empty, print (empty).

## Examples

### Example 1

**Input**
```
head = [1,2,3,4,5]
```
**Output**
```
[5,4,3,2,1]
```

**Explanation:** After reversing all links, 5 is the new head and the list reads 5 -> 4 -> 3 -> 2 -> 1.

### Example 2

**Input**
```
head = [1,2]
```
**Output**
```
[2,1]
```

**Explanation:** The single link is turned around, so 2 now points to 1.

### Example 3

**Input**
```
head = []
```
**Output**
```
(empty)
```

**Explanation:** There are no nodes, so the reversed list is also empty and (empty) is printed.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/reverse-linked-list).