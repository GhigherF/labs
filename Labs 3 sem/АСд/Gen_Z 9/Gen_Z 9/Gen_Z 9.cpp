#include <iostream>
#include <vector>
#include <random>
#include <numeric>

using namespace std;

pair<vector<int>, int> crossoverOX(pair<vector<int>, int>& parent1, pair<vector<int>, int>& parent2, pair<pair<int, int>, int>* arr, int N) {
	bool flag = false;
	int size = parent1.first.size();
	pair<vector<int>, int> child = make_pair(vector<int>(size, 0), 0);

	do
	{
	    child = make_pair(vector<int>(size, 0), 0);
		int start = rand() % size;
		int end = rand() % size;

		if (start > end) swap(start, end);

		for (int i = start; i <= end; ++i) {
			child.first[i] = parent1.first[i];
		}

		int idx = (end + 1) % size;
		for (int i = 0; i < size; ++i) {
			int gene = parent2.first[(end + 1 + i) % size];
			if (find(child.first.begin(), child.first.end(), gene) == child.first.end()) {
				child.first[idx] = gene;
				idx = (idx + 1) % size;
			}
		}

	

		child.second = 0;
		for (int i = 0; i < child.first.size() - 1; i++)
		{
			flag = false;
			for (int j = 0; j < N; j++)
			{
				if (arr[j].first.first == child.first[i] && arr[j].first.second == child.first[i + 1])
				{
					flag = true;
					child.second += arr[j].second;
				}
			}
			if (flag == false) break;
		}
	} while (!flag);
	/*cout << "\nChild:"<< '\n';
	for (int i = 0; i < child.first.size(); i++)
	{
		cout << "->" << child.first[i];
	}
	cout << "  " << child.second << '\n';*/
	return child;
}

void mutate(pair<vector<int>, int>& individual, pair<pair<int, int>, int>* arr, int N) {
	int size = individual.first.size();
	int idx1 = rand() % size;
	int idx2 = rand() % size;
	swap(individual.first[idx1], individual.first[idx2]);

	individual.second = 0;
	for (int i = 0; i < individual.first.size()-1; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[j].first.first == individual.first[i] && arr[j].first.second == individual.first[i + 1])
			{
				individual.second += arr[j].second;
			}
		}
	}
	/*cout << "\nMut:"<<'\n';
	for (int i = 0; i < individual.first.size(); i++)
	{
		cout << "->" << individual.first[i];
	}
	cout << "  " << individual.second << '\n';*/
}


pair<vector<int>, int> selectParent(vector<pair<vector<int>, int>>& population, const vector<double>& fitness) {
	double totalFitness = accumulate(fitness.begin(), fitness.end(), 0.0);
	double randomValue = ((double)rand() / RAND_MAX) * totalFitness;

	double cumulativeFitness = 0.0;
	for (size_t i = 0; i < fitness.size(); ++i) {
		cumulativeFitness += fitness[i];
		if (cumulativeFitness >= randomValue) {
			return population[i];
		}
	}
	return population.back();
}


vector<pair<vector<int>,int>> generateInitialPopulation(int populationSize, int cityCount, pair<pair<int, int>, int>* arr,int N) {
	srand(time(NULL));

	vector<pair<vector<int>, int>> population(populationSize, make_pair(vector<int>(cityCount, 0), 0));
	
	for (auto& solo : population) {
		bool valid = false;
		do {

			iota(solo.first.begin(), solo.first.end(), 1);
			shuffle(solo.first.begin(), solo.first.end(), mt19937(random_device()()));

			solo.second = 0;
			valid = true;   

			for (int i = 0; i < cityCount - 1; i++) {
				bool matchFound = false;

				for (int j = 0; j < N; j++) {
					if (arr[j].first.first == solo.first[i] && arr[j].first.second == solo.first[i + 1]) {
						matchFound = true;          
						solo.second += arr[j].second; 
						break;                      
					}
				}

				if (!matchFound) {
					valid = false; 
					break;         
				}
			}
		} while (!valid); 
	}
	return population;
}


void main()
{
	setlocale(LC_ALL, "Russian");
	
	

	int size = 0;
	int i = 0;
	int N = 999;
	int k = 0;
pair<pair<int, int>, int>* arr = new pair<pair<int, int>, int>[N];





	bool flag = true;
	while (flag == true)
	{
		
		bool temp;
		cout << "1/0? ";
		cin >> temp;

		if (temp == false)
		{
			flag = false;
			break;
		}
		k += 1;	
		
			cout << "Point 1:";
			cin >> arr[i].first.first;
			cout << "\nPoint 2: ";
			cin >> arr[i].first.second;
			cout << "\nWeight: ";
			cin >> arr[i].second;
			cout << "\n";
			i += 1;
	}
	N = k;
	cout<<"cities:";
	int cities;
	cin>>cities;
	size=cities;
	
	



//
//	arr[0].first.first = 1;
//	arr[0].first.second = 2;
//	arr[0].second = 25;
//
//	arr[1].first.first = 1;
//	arr[1].first.second = 3;
//	arr[1].second = 40;
//
//	arr[2].first.first = 1;
//	arr[2].first.second = 4;
//	arr[2].second = 31;
//
//	arr[3].first.first = 1;
//	arr[3].first.second = 5;
//	arr[3].second = 27;
//	size += 1;
///////////////////////////////////////////
//	arr[4].first.first = 2;
//	arr[4].first.second =1;
//	arr[4].second = 5;
//
//	arr[5].first.first = 2;
//	arr[5].first.second = 3;
//	arr[5].second = 17;
//
//	arr[6].first.first = 2;
//	arr[6].first.second = 4;
//	arr[6].second = 30;
//
//	arr[7].first.first = 2;
//	arr[7].first.second = 5;
//	arr[7].second = 25;
//	size += 1;
//	/////////////////////////////////////
//	arr[8].first.first = 3;
//	arr[8].first.second = 1;
//	arr[8].second = 19;
//
//	arr[9].first.first = 3;
//	arr[9].first.second = 2;
//	arr[9].second =15;
//
//	arr[10].first.first = 3;
//	arr[10].first.second = 4;
//	arr[10].second = 6;
//
//	arr[11].first.first = 3;
//	arr[11].first.second = 5;
//	arr[11].second = 1;
//	size += 1;
/////////////////////////////////////////////
//	arr[12].first.first = 4;
//	arr[12].first.second = 1;
//	arr[12].second = 9;
//
//	arr[13].first.first = 4;
//	arr[13].first.second = 2;
//	arr[13].second = 50;
//
//	arr[14].first.first = 4;
//	arr[14].first.second = 3;
//	arr[14].second = 24;
//
//	arr[15].first.first = 4;
//	arr[15].first.second = 5;
//	arr[15].second = 6;
//	size += 1;
////////////////////////////////////////////
//	arr[16].first.first = 5;
//	arr[16].first.second = 1;
//	arr[16].second = 22;
//
//	arr[17].first.first = 5;
//	arr[17].first.second = 2;
//	arr[17].second = 8;
//
//	arr[18].first.first = 5;
//	arr[18].first.second = 3;
//	arr[18].second = 7;
//
//	arr[19].first.first = 5;
//	arr[19].first.second = 4;
//	arr[19].second = 10;
//	size += 1;
//////////////////////////////////////////





//arr[0].first.first = 1;
//arr[0].first.second = 2;
//arr[0].second = 11;
//
//arr[1].first.first = 2;
//arr[1].first.second = 3;
//arr[1].second = 11;
//
//arr[2].first.first = 3;
//arr[2].first.second = 4;
//arr[2].second = 11;
//
//arr[3].first.first = 4;
//arr[3].first.second = 5;
//arr[3].second = 11;
//
//arr[4].first.first = 5;
//arr[4].first.second = 6;
//arr[4].second = 11;
//
//arr[5].first.first = 6;
//arr[5].first.second = 7;
//arr[5].second = 11;
//
//arr[6].first.first = 7;
//arr[6].first.second = 8;
//arr[6].second = 11;
//
//arr[7].first.first = 8;
//arr[7].first.second = 1;
//arr[7].second = 11;

//N = 8;
//size = 8;


	N = 20;


	for (int i=0;i<N;i++)
	{
		cout << arr[i].first.first << "->" << arr[i].first.second << "   :" << arr[i].second << '\n';
	}

	int generations = 100;
	double mutation=0.2;	


	auto population=generateInitialPopulation(size*5,size, arr,N);
	cout << "\n\n\n";

for (auto j: population)
{
	for (auto i : j.first)
	{
		cout << "->"<<i;
	}
	cout<<"  "<<j.second;
	cout << '\n';
}


for (int generation = 0; generation < generations; ++generation) {

	vector<double> fitness(population.size());
	for (size_t i = 0; i < population.size(); ++i) {
		fitness[i] = 1.0 / population[i].second;
	}
	vector<pair<vector<int>, int>>  newPopulation;
	for (size_t i = 0; i < population.size() / 2; ++i) {
		pair<vector<int>, int> parent1 = selectParent(population, fitness);
		pair<vector<int>, int> parent2 = selectParent(population, fitness);

		pair<vector<int>, int> child1 = crossoverOX(parent1, parent2,arr,N);
		pair<vector<int>, int> child2 = crossoverOX(parent2, parent1,arr,N);

		if (((double)rand() / RAND_MAX) < mutation) mutate(child1,arr,N);
		if (((double)rand() / RAND_MAX) < mutation) mutate(child2,arr,N);

		newPopulation.push_back(child1);
		newPopulation.push_back(child2);
	}
	population = move(newPopulation);
}

double bestFitness = -numeric_limits<double>::infinity();
pair<vector<int>, int> bestIndividual;
for (const auto& individual : population) 
{
	double currentFitness = 1.0 / individual.second;
	if (currentFitness > bestFitness) {
		bestFitness = currentFitness;
		bestIndividual = individual;
	}
}

cout << "\n\n\n";
for (auto i : bestIndividual.first)
{
	cout << "->" << i;
}
cout << "  " << bestIndividual.second;

}