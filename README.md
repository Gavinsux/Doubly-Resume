# Doubly-Resume
Resume project code
Doubly Linked List Implementation in C++

Project Overview
This project was originally developed as part of a C++ course and demonstrates key concepts of data structures, sorting algorithms, file I/O, and dynamic memory management. The core of the project is an implementation of a doubly linked list to manage data, with built-in functionality to sort the data using various algorithms, such as Bubble Sort, Insertion Sort, Selection Sort, and more.

The program is designed to:

Insert values into a doubly linked list.
Sort the data using multiple sorting algorithms.
Read data from an external file and write the sorted data back to an output file.
Key Features:
Doubly Linked List: Dynamic memory management to create a flexible data structure with pointers to both previous and next elements.
Sorting Algorithms: Implemented several sorting algorithms, including:
Bubble Sort
Merge Sort
Quick Sort
Selection Sort
File I/O: The program reads data from a text file, sorts the data, and outputs the results to another text file.
Modular Code Design: The project follows good programming practices by separating the code into multiple files (main.cpp, doubly_linked_list.h, and doubly_linked_list.cpp).

Skills Demonstrated
This project showcases the following skills:
C++ Programming: Used core C++ concepts such as pointers, dynamic memory allocation, file handling, and object-oriented design.
Data Structures: Demonstrated proficiency in working with linked lists, particularly doubly linked lists, which offer advantages in both directions of traversal.
Sorting Algorithms: Implemented multiple sorting algorithms, showcasing an understanding of time complexity and algorithm efficiency.
File Handling: Managed external input and output through file streams in C++, further emphasizing practical data management skills.

Why the Code is Currently Not Functional
While this project was fully functional at the time of submission for the course, it is currently missing the argument manager, which was used to handle command-line arguments. The argument manager was responsible for accepting the input and output file paths as command-line arguments and parsing them for use within the program.
Without the argument manager, the program lacks the ability to properly load the input and output files, resulting in non-functional behavior in its current form. Re-implementing the argument manager or manually specifying the file paths in the code would restore the program's functionality.

Context:
This project was completed as part of a previous C++ course, and since I have passed the class, I no longer have the original argument manager that was used. The core functionality (linked list manipulation, sorting, and file handling) remains intact, but it requires the argument manager for command-line input processing.

Next Steps to Restore Functionality:
Reintroduce the Argument Manager: A simple implementation of the argument manager would allow the program to correctly handle file input and output paths.
Update the Code to Accept Direct User Input: Alternatively, modifying the code to take input file paths directly from the user instead of command-line arguments would also restore functionality.
Future Improvements
If this project were to be revisited, the following improvements could be made:

Re-introduce the argument manager for command-line input handling.
Implement additional sorting algorithms or allow for sorting based on user-defined criteria.
Add error handling to improve robustness in cases of invalid input or file access errors.
