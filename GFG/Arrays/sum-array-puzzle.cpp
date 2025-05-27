// arr is the array
// n is the number of element in array
class Solution
{
public:
    void sumArray(vector<int> &arr)
    {
        // Your code goes here
        int arraySum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            arraySum += arr[i];
        }
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = arraySum - arr[i];
        }
    }
};