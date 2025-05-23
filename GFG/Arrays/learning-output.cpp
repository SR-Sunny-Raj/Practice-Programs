
class Solution
{
public:
    void Learning(int a[], int n, float &pos, float &neg, float &zero)
    {
        // Your code goes here
        int posCount = 0, negCount = 0, zeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                posCount++;
            else if (a[i] < 0)
                negCount++;
            else
                zeroCount++;
        }
        pos = float(n) / float(posCount);
        neg = float(n) / float(negCount);
        zero = float(n) / float(zeroCount);
    }
};