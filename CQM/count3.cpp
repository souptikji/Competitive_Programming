#include<iostream.h>
#include<math.h>

#define MAX 10

class subset
{
	private : int n, exsetsum, set[MAX], selected[MAX];
	public  : void readset();
		  void setsum();
};

void subset :: readset()
{
	int i;
	cout << "\nEnter the number of Elements in the Set : ";
	cin  >> n;
	cout << "\nEnter the Elements of the Set\n\n";
	for (i = 1; i <= n; i++)
		cin >> set[i];
	cout << "\nEnter the expected sum of the subset : ";
	cin  >> exsetsum;
}

void subset :: setsum()
{
	int i, j, no, sum, k, s,cnt=0;
	no = pow (2, n);
	cout << "\nAll possible subsets whose sum is equal to " << exsetsum << " are\n\n";
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
		cout<<cnt;
	
}

int main()
{
	subset s;
	s.readset();
	s.setsum();
	int faal;
	cin>>faal;
	return 0;
}
