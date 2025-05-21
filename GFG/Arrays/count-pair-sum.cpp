
class Solution
{
public:
    int countPairs(vector<int> &arr1, vector<int> &arr2, int x)
    {
        // code here.
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        int count = 0, hashTable[arr1[arr1.size() - 1] + arr2[arr2.size() - 1]] = {0};
        for (int i = 0; i < arr1.size(); i++)
        {
            arr1[i] = x - arr1[i];
            hashTable[arr1[i]]++;
        }
        for (int i = 0; i < arr2.size(); i++)
        {
            hashTable[arr2[i]]++;
            if (hashTable[arr2[i]] == 2)
                count++;
        }
        return count;
    }
};