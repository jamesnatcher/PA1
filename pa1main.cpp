#include <iostream>
#include <vector>
using namespace std;


int costGridSeed = 10;
int ticketMinPrice = 99;
int ticketMaxPrice = 2000;
const int numOfCities = 26;


int fitnessCalculator(vector<int> tour, vector<vector<int>> costGrid) {

	int totalFitness = 0;

	for (int i = 1; i < tour.size(); i++)
	{
		totalFitness += costGrid[i - 1][i];
	}

	return totalFitness;
}

class Tour {
public:
	int fitness;
	vector<int> path;
};

void insertMutation(vector<vector<int>> costGrid, Tour* bestTour) {
	vector<int> bestOfRun;
	int generationOfBOR;

}

void insert(Tour* tour) {

}

void swapMutation(vector<vector<int>> costGrid, Tour* bestTour) {

}

void swap(Tour* tour) {

}

void inversionMutation(vector<vector<int>> costGrid, Tour* bestTour) {

}

void inversion(Tour* tour) {

}

void scrambleMutation(vector<vector<int>> costGrid, Tour* bestTour) {

}

void scramble(Tour* tour) {

}

Tour orderCrossover(Tour* tour1, Tour* tour2) {

}

int main(void) {

	vector<vector<int>> costGrid;
	vector<int> temp;
	Tour bestOfRun1, bestOfRun2, bestOfRun3, bestOfRun4, bestOfRun5, bestOfRun6, bestOfRun7, bestOfRun8, bestOfRun9, bestOfRun10, bestOfRun11, bestOfRun12;
	int population = 1000;
	int maxGeneration = 20;
	vector<Tour> population;

	srand(costGridSeed);

	for (int i = 0; i < numOfCities; i++)
	{
		for (int j = 0; j < numOfCities; j++)
		{
			temp.push_back(rand() % (ticketMaxPrice - ticketMinPrice + 1) + ticketMinPrice);
		}
		costGrid.push_back(temp);
		temp.clear();
	}
	
	int asciiOut = 65;
	for (int i = 0; i < numOfCities; i++)
	{
		for (int j = 0; j < numOfCities; j++)
		{
			cout << "[" << char(asciiOut + i) << "->" << char(asciiOut + j) << ":"<< costGrid[i][j] << "]";
		}
		cout << endl;
	}

	srand(100);
	insertMutation(costGrid, &bestOfRun1);
	srand(200);
	insertMutation(costGrid, &bestOfRun2);
	srand(300);
	insertMutation(costGrid, &bestOfRun3);

	srand(400);
	swapMutation(costGrid, &bestOfRun4);
	srand(500);
	swapMutation(costGrid, &bestOfRun5);
	srand(600);
	swapMutation(costGrid, &bestOfRun6);

	srand(150);
	inversionMutation(costGrid, &bestOfRun7);
	srand(250);
	inversionMutation(costGrid, &bestOfRun8);
	srand(350);
	inversionMutation(costGrid, &bestOfRun9);

	srand(450);
	scrambleMutation(costGrid, &bestOfRun10);
	srand(550);
	scrambleMutation(costGrid, &bestOfRun11);
	srand(650);
	scrambleMutation(costGrid, &bestOfRun12);
}