int findMax(const vector<int> &arr) {
    int max = arr[0];  // Count = 2 (assignment, Array Access arr[0])
    for (int i = 1; i < arr.size(); i++) {
        // Loop initialization: Count = 1 (assignment i = 0)
        // Each iteation:
        //  - Comparison: Count = 1 (i < arr.size())
        //  - Increment: Count = 1 (i++)
        if (arr[i] > max) {
            // Comparison: Count = 2 (Array Access, Comparison)
            max = arr[i];  // Count = 2 (Array Access, Assignment)
        }
    }
    // TODO: Add count for return
    return max;
}