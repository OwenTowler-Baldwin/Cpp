#include <iostream>

int binary_search(int array[], int start_index, int end_index, int key)
{
    while (start_index <= end_index)
    {
        int pivot = (start_index + end_index) / 2;
        if (array[pivot] == key)
            return pivot;

        if (key < array[pivot])
            end_index = pivot + 1;
    }
    return -1;

}


int main()
{
	const int array_size = 25;
    int array_to_be_sorted[array_size] = {
        14, 65, 63, 1, 54,
        89, 84, 9, 98, 57,
        71, 18, 21, 84, 69,
        28, 11, 83, 13, 42,
        64, 58, 78, 82, 13
     };

   
    

    while (true) {
        std::cout << std::endl << std::endl << "Enter a number to find in the sequence: -1 to end" << std::endl;
        int search_key = -1;
        std::cin >> search_key;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (search_key == -1)
            break;

        int r = binary_search(array_to_be_sorted, 0, array_size -1, v);
        if (r == -1)
            std::cout << "couldnt find" << v << "in the list" << std::endl;
        else
            std::cout << "Found" << v << "at position" << r << std::endl;
    }

    return 0;


}