## PythonsZipFunction

It's python's Zip function implemented in C++ 

Python's Zip function works like this:

Imagine, we have 2 containers:

> [1, 2, 3] and [4, 5, 6]

Invoking Zip function in python, like this:

> zip([1, 2, 3], [4, 5, 6])

Will output this:

> [[1, 4][2, 5][3, 6]]

We do not have something like this in C++, so this is the implementation.
