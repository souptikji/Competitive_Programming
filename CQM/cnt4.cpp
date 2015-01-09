#include<iostream.h>
#include<math.h>

#define MAX 10

main()
{
      int n,i, exsetsum, set[MAX], selected[MAX],cnt,j, no, sum, k, s,;
      
      	

	while(cin  >> n)
	{cnt=0;
	//cout << "\nEnter the Elements of the Set\n\n";
	for (i = 1; i <= n; i++)
		cin >> set[i];
	//cout << "\nEnter the expected sum of the subset : ";
	cin  >> exsetsum;
	
 
	no = pow (2, n);
//	cout << "\nAll possible subsets whose sum is equal to " << exsetsum << " are\n\n";
	for (i = 1; i < no; i++)
	{
		s = i;
		sum = 0;
		for (j = 1; j <= n; j++)
			selected[j] = 0;
		k = 1;
		while (s > 0)
		{
			if (s % 2)
			{
				sum += set[k];
				selected[k] = 1;
			}
			s = s / 2;
			k++;
		}
		if (sum == exsetsum) cnt++;}
		
		cout<<cnt<<endl;
		
		//int faal;
//		cin>>faal;
    }}
		
