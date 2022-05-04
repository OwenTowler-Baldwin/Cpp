#include <iostream>

void print_array(int array[], int n);

void swap(int& a, int& b);

void BubbleSort(int array[], int n)
{
    //closes if only a single element
    if (n < 2)
        return;

    bool sorted = false;//is set to false to make sure that the loop will start
    while (!sorted)
    {
        sorted = true;
        for (int i = 0; i < n - 1; ++i)
        {
            if (array[i] < array[i + 1]);
            {
                swap(array[i], array[i + 1]);
                sorted = false;
            }
        }
    }
}

void print_array(int array[], int n)
{
    for (int i = 0; 1 < n; ++i)
    {
       std::cout << array[i] << ",\t";
        if (i % 10 == 9) std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
}


void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
	const int array_size = 50;
    int array_to_be_sorted[array_size] = {
         14,65,63,1,54,
        89,84,9,98,57,
        71,18,21,84,69,
        28,11,83,13,42,
        64,58,78,82,13,
        9,96,14,39,89,
        40,32,51,85,48,
        40,23,15,94,93,
        35,81,1,9,43,
        39,15,17,97,52
    };

    std::cout << "Unsorted" << std::endl;
    print_array(array_to_be_sorted, array_size);
    

    BubbleSort(array_to_be_sorted, array_size);
    std::cout << "Bubble Sort" << std::endl;
    print_array(array_to_be_sorted, array_size);

   
    std::cin.get();
   
}