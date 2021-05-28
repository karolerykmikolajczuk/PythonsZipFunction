## PythonsZipFunction

First of all, function `zip` is in `tools` namespace.
Second of all, function `zip` is a template function.

It means, we have possibility to decide what type we want i.e. `std::list<int>`

`zip` function implements `fold expression's` so we are not limited with number of parameters.

# How do we use function?

At first, we have to include lib:

>`#include "zip.hpp`

Next, invoke function, like this:

> tools::zip<std::list<int>, std::list<int>>(
{ 1, 2, 3, 4 }, { 4, 5, 6, 7 });

Don't forget to save result into variable:

> auto res_1 = tools::zip<std::list<int>, std::list<int>>(
{ 1, 2, 3, 4 }, { 4, 5, 6, 7 });

If you want to use fold expression:

> const auto& list_from_zip = tools::zip_invoke(a1, a2, a3)

