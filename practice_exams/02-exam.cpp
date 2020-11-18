Chapter 7
class Player
{
	private:
		string name;
		int score;
	public:
		void setName(string set_name) { name = set_name; }
		void setScore(int set_score) { score = set_score; }
		string getName() { return name; }
		int getScore() { return score; }
};


Chapter 8

int scores[25];

char streetAddress[80];

cout << monthSales[9];

salarySteps[4] = 160000;

a[0] += 10;

a[n-1] = -1;

a[k + 1] = 9;

a[j] = 2 * a[j + 1];

int denominations[6] = {1, 5, 10, 25, 50, 100};

for(k = 0; k < ndays; k++)
{
	if(parkingTickets[k] > mostTickets)
	{
		mostTickets = parkingTickets[k];
	}
}

void printArray(int [], int);

void printArray(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}

int sumArray(int a[], int n)
{
	int total = 0;
	for(int i = 0; i < n; i++)
	{
		total += a[i];
	}
	return total;
}

string chessboard[8][8];
