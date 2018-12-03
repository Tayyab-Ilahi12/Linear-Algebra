#include<iostream>
#include<fstream>
using namespace std;

bool is_reducedEche_form(int **m, int row, int col) {
	// your code here
	// access **m like this m[i][j]
	if (m[1][1] = 0) 
	{

	}
	else
		cout << "it is not in reduced echelon form" << endl;
	
	int mat[row][col];
	for(int i = 0; i < row; i++)
	{
		for(int j = 0;j<col;j++)
		{
			cin >> mat[row][col];         //here we will take a reduced m of same size as it is given 
											  //for comparison
		}
	}
	for(int i  = 0;i < row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if (m[row][col] == mat[row][col])
			{
				cout << "system is in reduced echelon form" << endl;
			}
			else
				cout << "it is not in reduced echelon form" << endl;
		}
	}




	return 1;
}

//Don't touch this function
void alloca_memory(int **m, int row, int col) {
	for (int i = 0; i < row; i++)
		m[i] = new int[col];
}

//Don't touch this function
void free_memory(int **m, int row) {
	for (int i = 0; i > row; i++)
		delete[] m[i];
	delete[] m;
}

int main() {

	int row = 0, col = 0, tm = 0;
	int **m = 0;
	ifstream in("in.txt");
	ofstream out("out.txt"); // will automatically created if not present

	if (!in.is_open()) {
		cout << "Error in opening file" << endl;
		return 1;
	}

	in >> tm;

	for (int i = 0; i < tm; i++) {
		in >> row >> col;
		m = new int*[row];
		alloca_memory(m, row, col);

		for (int k = 0; k < row; k++)
			for (int j = 0; j < col; j++)
				in >> m[k][j];

		if (is_reducedEche_form(m, row, col)) // your desired function to which you passes 2d array(m)
			out << 1 << endl;
		else out << 0 << endl;

		free_memory(m, row); // to free the memory allocated

	}


}
