/*Name:Arti auti ,DSPL Assigment no.1,date:01-Aug-2024*/
#include <iostream>
using namespace std;

class LinearSearch
{
    int a[10], n, i, target;
public:
    void accept();
    int search();
    int count();
    void firstAndLastOccurrence();
};

void LinearSearch::accept()
{
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements in the array: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int LinearSearch::search()
{
    cout << "Enter the target: ";
    cin >> target;
    for (i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            cout << "Element " << target << " found at index " << i << endl;
            return i; // Return the index of the found element
        }
    }
    cout << "Element " << target << " not found" << endl;
    return -1; // Return -1 if the element is not found
}

int LinearSearch::count()
{
    cout << "Enter the target to count: ";
    cin >> target;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            count++;
        }
    }
    cout << "Element " << target << " occurred " << count << " times" << endl;
    return count;
}

void LinearSearch::firstAndLastOccurrence()
{
    cout << "Enter the target to find occurrences: ";
    cin >> target;
  int first = -1;
  int last = -1;
    for (i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    if (first != -1) {
        cout << "First occurrence of " << target << " is at index " << first << endl;
        cout << "Last occurrence of " << target << " is at index " << last << endl;
    }
    else {
        cout << "Element " << target << " not found" << endl;
    }
}

int main()
{
    LinearSearch l;
    int choice, first, last;
    do
    {
        cout << "\nMenu\n";
        cout << "1. Accept\n";
        cout << "2. Search\n";
        cout << "3. Count\n";
        cout << "4. First and Last Occurrences\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            l.accept();
            break;
        case 2:
            l.search();
            break;
        case 3:
            l.count();
            break;
        case 4:
            l.firstAndLastOccurrence();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}