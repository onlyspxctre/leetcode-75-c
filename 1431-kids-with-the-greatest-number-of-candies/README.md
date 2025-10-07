1431: Kids With the Greatest Number of Candies

Given an array of `candies`, where every element represents the number
of candies a kid has. Return a boolean array `result` where each element
corresponds to each kid, and is `true` if the kid will have the greatest
number of candies amongst the kids after being given `extraCandies`, or
false if not.

This is an extremely simple problem... a little too simple.

We iterate through the array once to find the greatest number of candies
among the kids. We do a second iteration through the array to check
whether the given kid would have more than the greatest if given
`extraCandies`.

The time complexity is `O(n)` but we must iterate through the array twice.

The space complexity is `O(n)`, since we `malloc` an array of n length,
where n is the length of the `candies` array.
