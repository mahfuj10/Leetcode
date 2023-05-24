/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar)
{
    unordered_map<int, int> sockCount;
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        int sock = ar[i];

        if (sockCount.find(sock) != sockCount.end())
        {
            count++;
            sockCount.erase(sock);
        }
        else
        {
            sockCount[sock] = 1;
        }
    }

    return count;
}
