cmake_minimum_required(VERSION 3.29)
project(Leetcode)

set(CMAKE_CXX_STANDARD 20)

add_executable(Leetcode main.cpp
        problems/MergeTwoSortedLists.cpp
        problems/MissingNumber.cpp
        problems/mySqrt.cpp
        problems/KthFactor.cpp
        problems/BinarySearch.cpp
        problems/RomanToInteger.cpp
        problems/ContainerWithMostWater.cpp
        problems/MedianOfTwoSortedArrays.cpp
        problems/RemoveElement.cpp
        problems/TwoSum.cpp
        problems/FirstBadVersion.cpp
        problems/MergeStringsAlternately.cpp
        problems/GreatestCommonDivisorofStrings.cpp
        problems/KidsWithExtraCandies.cpp
        problems/JumpGame.cpp
        problems/CanPlaceFlower.cpp
        problems/MoveZeros.cpp
        problems/IsSubsequence.cpp
        problems/ContainsDuplicates.cpp
        problems/ValidAnagram.cpp
)
