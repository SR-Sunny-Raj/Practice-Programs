

class Solution
{
public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine)
    {
        // code here
        long long fineAmount = 0;
        if (date % 2 == 0)
        {
            for (int i = 0; i < car.size(); i++)
            {
                if (car[i] % 2 == 1)
                {
                    fineAmount += fine[i];
                }
            }
        }
        else
        {
            for (int i = 0; i < car.size(); i++)
            {
                if (car[i] % 2 == 0)
                {
                    fineAmount += fine[i];
                }
            }
        }
        return fineAmount;
    }
};