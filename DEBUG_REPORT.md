# Debug Report

## Title

Debugging a Linear Queue Implementation in C

## Objective

To identify, analyze, and correct bugs in a linear queue program implemented using an array.

## Program Description

The program implements a queue with a maximum size of five elements. It supports two operations:

* Enqueue
* Dequeue

## Bugs Identified

### Bug 1: Missing Parameter Type

**Original Code**

```c
int enqueue(x)
```

**Issue**

The parameter `x` has no declared data type.

**Correction**

```c
void enqueue(int x)
```

---

### Bug 2: Incorrect Order in `dequeue()`

**Original Code**

```c
front++;
int x = queue[front];
```

**Issue**

The `front` index is incremented before reading the value, causing the first queued element to be skipped.

**Correction**

```c
int x = queue[front];
front++;
```

---

### Bug 3: Incorrect Return Type

**Issue**

The `enqueue()` function was declared to return an `int` but did not return any value.

**Correction**

Changed the function return type to `void`.

---

### Bug 4: Missing Return When Queue Is Empty

**Issue**

The `dequeue()` function did not return a value when the queue was empty.

**Correction**

```c
return -1;
```

## Testing

The program was tested by inserting six elements into a queue with a capacity of five and then removing six elements.

### Results

* Overflow was detected correctly.
* Underflow was detected correctly.
* Queue elements were removed in FIFO (First In, First Out) order after correcting the bugs.

## Conclusion

The identified bugs were fixed successfully. The corrected program now performs queue operations correctly and handles both overflow and underflow conditions.
