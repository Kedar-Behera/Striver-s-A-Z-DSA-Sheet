vector<int> countPrimes(int n)

{

    vector<int> ans;

 

    for(int i=2; i<=n; i++)

    {

        if(n%i == 0)

        {

            bool isPrime = true;

 

            for(int j=2; j<i; j++)

            {

                if(i%j == 0)

                {

                    isPrime = false;

                    break;

                }

            }

            

            if(isPrime)

            {

                ans.push_back(i);

            }

        }

    }

 

    return ans;

}