class Solution
{
  public:
    int reverse(int x)
    {
        long long int toReturn = 0;
        int f = 0;
        if (x < 0)
            f = 1;

        long long int b = x;
        b = abs(b);
        while (b != 0)
        {
            toReturn = toReturn * 10 + b % 10;
            b /= 10;
        }

        if (f)
        {
            toReturn = -toReturn;
        }

        if (toReturn < INT_MIN || toReturn > INT_MAX)
        {
            return 0;
        }
        else
        {
            return toReturn;
        }
    }
};