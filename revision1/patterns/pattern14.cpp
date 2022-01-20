        /*
        Pattern 14
                                 * * * * *
                                  * * * *
                                   * * *
                                    * *
                                     *
                                     *
                                    * *
                                   * * *
                                  * * * *
                                 * * * * *
         */
        // Creating Scanner Object For taking inputs from the USER
#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the rows ";
	std::cin >> n;

	for(int i = 1; i <= n ; i++)
	{
		for(int j = 1 ; j <= i -1; j++)
		{
			std::cout << " ";
		}
		for(int k = 1 ; k <= n - i + 1; k++)
		{
			std::cout << "* ";
		}
		std::cout <<'\n';
	}


	for(int i = 1; i <= n ; i++)
	{

		for(int j = 1 ; j <= n -i; j++)
		{
			std::cout << " ";
		}
		for(int k=1 ; k <=i ; k++)
		{
			std::cout << "* ";
		}
		std::cout << '\n';
	}

	return 0;
}
