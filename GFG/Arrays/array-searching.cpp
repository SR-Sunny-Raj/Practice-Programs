class Solution
{
public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int n, int x)
    {

        // Your code here
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};