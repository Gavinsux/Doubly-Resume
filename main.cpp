#include <iostream>
#include <fstream>
#include "doubly_linked_list.h"
#include "ArgumentManager.h"

using namespace std;

int main(int argc, char* argv[]) {
    // Initialize ArgumentManager to handle input and output file arguments
    ArgumentManager am(argc, argv);
    string inputFile = am.getArgument("input"); // Get the input file name
    string outputFile = am.getArgument("output"); // Get the output file name

    // Check if input and output file arguments are provided
    if (inputFile.empty() || outputFile.empty()) {
        cerr << "Please provide valid input and output files: input=<input_file> output=<output_file>" << endl;
        return 1; // Exit with error if files are not provided
    }

    // Open input file for reading
    ifstream infile(inputFile);
    if (!infile.is_open()) {
        cerr << "Could not open input file." << endl;
        return 1; // Exit if the input file cannot be opened
    }

    // Create a new doubly linked list
    DoublyLinkedList<int> list;
    int value;

    // Read integers from the file and insert them into the list
    while (infile >> value) {
        list.insertAtTail(value); // Insert value at the tail of the list
    }
    infile.close(); // Close the input file

    // Sort the list using bubble sort
    list.bubbleSort();

    // Open output file for writing the sorted list
    ofstream outfile(outputFile);
    if (!outfile.is_open()) {
        cerr << "Could not open output file." << endl;
        return 1; // Exit if the output file cannot be opened
    }

    // Write the sorted list to the output file
    list.writeToFile(outfile);
    outfile.close(); // Close the output file

    // Output success message
    cout << "Sorted list written to " << outputFile << endl;

    return 0;
}
