#include <iostream>
#include <string>

int main()
{

    int T;
    std::cin >> T;
    while (T--)
    {

        int n;
        std::cin >> n;

        std::string str;
        std::cin >> str;

        int array[n];
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '<')
            {
                array[i] = 1;
            }
            else
            {
                array[i] = 0;
            }
        }

        int pivot = 0;
        int maxPivot = 0;
        int id = 0;

        for (int i = 0; i < n; i++)
        {

            if (array[i] == id)
            {
                pivot++;
                maxPivot = std::max(pivot, maxPivot);
            }

            else
            {
                maxPivot = std::max(pivot, maxPivot);
                pivot = 1;
                id = 1-id;
            }
        }
        maxPivot = std::max(pivot, maxPivot);
        std::cout << maxPivot + 1 << std::endl;
    }

    return 0;
}