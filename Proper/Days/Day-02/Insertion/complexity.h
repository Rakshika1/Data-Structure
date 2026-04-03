#ifndef COMPLEXITY_H
#define COMPLEXITY_H

#include <iostream>
#include <time.h>
using namespace std;

// ===== GLOBAL TRACKERS =====
int _totalBytes = 0;
int _heapCount = 0;
int _stepCount = 0;
clock_t _startTime;

// Simple array — vector nahi (vector khud new call karta!)
int _allocSizes[100];
int _allocIndex = 0;
bool _tracking = false; // guard — infinite loop rokne ke liye

// ===== OPERATOR NEW OVERRIDE =====
void *operator new(size_t size)
{
    void *ptr = malloc(size);

    if (_tracking && size >= 16)
    {                      // sirf 16+ bytes track karo
        _tracking = false; // guard on

        _heapCount++;
        _stepCount++;
        _totalBytes += size;
        _allocSizes[_allocIndex++] = size;

        cout << "[HEAP]  Allocation #" << _heapCount
             << " -> Size: " << size
             << " bytes"
             << " | Total: " << _totalBytes
             << " bytes" << endl;

        _tracking = true; // guard off
    }

    return ptr;
}

// ===== AUTO START/END =====
struct AutoStart
{

    AutoStart()
    {
        _startTime = clock();
        _tracking = true; // ab se track karo
        cout << "\n========================================" << endl;
        cout << "         AUTO ANALYSIS STARTED" << endl;
        cout << "========================================\n"
             << endl;
    }

    ~AutoStart()
    {
        _tracking = false;
        clock_t endTime = clock();
        long ticks = endTime - _startTime;
        double timeTaken = (double)ticks / CLOCKS_PER_SEC;

        cout << "\n========================================" << endl;
        cout << "              FULL REPORT" << endl;
        cout << "========================================" << endl;

        // Allocation detail
        cout << "\n--- HEAP ALLOCATIONS ---" << endl;
        cout << "Total Nodes       : " << _heapCount << endl;
        cout << "Total Memory      : " << _totalBytes << " bytes" << endl;

        cout << "\nBreakdown:" << endl;
        for (int i = 0; i < _allocIndex; i++)
        {
            cout << "  Node " << i + 1
                 << " -> " << _allocSizes[i] << " bytes";
            if (_allocSizes[i] == 16)
                cout << " (4 data + 4 padding + 8 next)";
            cout << endl;
        }

        // CPU
        cout << "\n--- CPU ---" << endl;
        cout << "Total Steps       : " << _stepCount << endl;
        cout << "CPU Ticks         : " << ticks << endl;
        cout << "Time Taken        : " << timeTaken << " seconds" << endl;

        cout << "\nTime Complexity   : ";
        if (_stepCount <= 5)
            cout << "O(1)   - Constant    BEST  +++" << endl;
        else if (_stepCount <= 15)
            cout << "O(logn)- Logarithmic GOOD  ++" << endl;
        else if (_stepCount <= 100)
            cout << "O(n)   - Linear      OK    +" << endl;
        else
            cout << "O(n^2) - Quadratic   SLOW  -" << endl;

        // Memory
        cout << "\n--- MEMORY ---" << endl;
        cout << "Heap Used         : " << _totalBytes << " bytes" << endl;
        cout << "Padding Wasted    : " << _heapCount * 4 << " bytes" << endl;
        cout << "Useful Data       : " << _heapCount * 4 << " bytes" << endl;

        cout << "\nSpace Complexity  : ";
        if (_totalBytes <= 32)
            cout << "O(1)   - Constant BEST +++" << endl;
        else if (_totalBytes <= 256)
            cout << "O(logn)- Low      GOOD ++" << endl;
        else if (_totalBytes <= 1024 * 5)
            cout << "O(n)   - Linear   OK   +" << endl;
        else
            cout << "O(n^2) - High     BAD  -" << endl;

        // Verdict
        cout << "\n--- VERDICT ---" << endl;
        if (_stepCount <= 5 && _totalBytes <= 256)
            cout << "Performance       : EXCELLENT +++" << endl;
        else if (_stepCount <= 15)
            cout << "Performance       : GOOD ++" << endl;
        else
            cout << "Performance       : IMPROVE +" << endl;

        cout << "\n========================================" << endl;
        cout << "                  END" << endl;
        cout << "========================================\n"
             << endl;
    }

} _autoStart;

#endif