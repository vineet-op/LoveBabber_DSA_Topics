#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> sortedVector = {1, 3, 5, 7, 9, 11, 13, 15};

    // Perform binary search using std::binary_search
    int target1 = 7;
    bool found = std::binary_search(sortedVector.begin(), sortedVector.end(), target1);
    if (found)
    {
        std::cout << target1 << " is found in the vector." << std::endl;
    }
    else
    {
        std::cout << target1 << " is not found in the vector." << std::endl;
    }

    // Use std::lower_bound and std::upper_bound to find the range of elements
    // equal to the target element (in case of duplicates)
    int target2 = 10;
    auto lower = std::lower_bound(sortedVector.begin(), sortedVector.end(), target2);
    auto upper = std::upper_bound(sortedVector.begin(), sortedVector.end(), target2);

    if (lower != sortedVector.end() && *lower == target2)
    {
        std::cout << target2 << " is found in the vector between indices " << (lower - sortedVector.begin())
                  << " and " << (upper - sortedVector.begin() - 1) << std::endl;
    }
    else
    {
        std::cout << target2 << " is not found in the vector." << std::endl;
    }

    return 0;
}
