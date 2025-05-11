using namespace std;

int* memory_allocation(int size)
{
	int* ar = new int[size];
	return ar;
}

void fill_array(int* ar, int size, int min = 0, int max = 100) 
{
	int l = max - min + 1;
	for (int i = 0; i < size; i++)
		ar[i] = rand() % l + min;
}

void print_array(int* ar, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ar[i] << " ";
	}
	cout << "\n";
}

void delete_array(int*& ar)
{
	delete[] ar;
}

void add_first_element(int*& ar, int& size, int userInt)
{
	int* temp = new int[size + 1];
	temp[0] = userInt;
	for (int i = 0; i < size; i++)
	{
		temp[i + 1] = ar[i];
	}
	delete[] ar;
	ar = temp;
	size++;
}

void add_last_element(int*& ar, int& size, int userInt)
{
	int* temp = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = ar[i];
	}
	temp[size] = userInt;
	delete[] ar;
	ar = temp;
	size++;
}

void add_element_byIndex(int*& ar, int& size, int userInt, int userIndex)
{
	int* temp = new int[size + 1];
	for (int i = 0; i < userIndex; i++) {
		temp[i] = ar[i];
	}
	temp[userIndex] = userInt;
	for (int i = userIndex; i < size; i++) {
		temp[i + 1] = ar[i];
	}
	delete[] ar;
	ar = temp;
	size++;
}

void delete_first_element(int*& ar, int& size)
{
	size--;
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = ar[i + 1];
	}
	delete[] ar;
	ar = temp;
}

void delete_last_element(int*& ar, int& size)
{
	size--;
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = ar[i];
	}
	delete[] ar;
	ar = temp;
}

void delete_element_byIndex(int*& ar, int& size, int userIndex)
{
	int* temp = new int[size - 1];
	for (int i = 0; i < userIndex; i++) {
		temp[i] = ar[i];
	}
	for (int i = userIndex; i < size - 1; i++) {
		temp[i] = ar[i + 1];
	}
	delete[] ar;
	ar = temp;
	size--;
}