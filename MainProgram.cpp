// ============================================================
// Lab W7: C++ OOP Review - Classes, Encapsulation, Strings,
//         Copy Constructors, Operator Overloading
// Course: Object-Oriented Programming
// Duration: 40 minutes
// ============================================================
// SINGLE FILE IMPLEMENTATION - No header files allowed
// ============================================================

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// ================================
// CLASS DEFINITIONS
// ================================

// -----------------------------------------------------------
// Class: Student
// Represents a university student with name, ID, and GPA.
// This class reviews:
//   - Encapsulation (private data, public interface)
//   - Constructors (default, parameterized)
//   - Destructor
//   - Copy Constructor
//   - Operator Overloading (<<, ==, <)
//   - String operations
// -----------------------------------------------------------
class Student {
private:
    string name;
    int id;
    double gpa;

public:
    // ----- Task 1: Constructors & Destructor -----

    // TODO 1a: Default constructor
    // Set name to "Unknown", id to 0, gpa to 0.0
    Student() {
        // YOUR CODE HERE
        name = "Unknown";
        id = 0;
        gpa = 0.0;
    }

    // TODO 1b: Parameterized constructor
    // Initialize all three member variables from parameters
