#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    // set things up
    std::srand(std::time(0));

    cout << "Case study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);

    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours;

    cout << "Enter the average number of customer per hour: ";
    double perhour;
    cin >> perhour;
    double min_per_cust;
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;
    long turnaways = 0; // turned away by full queue
    long customers = 0; // joined the queue
    long served = 0;    // served during the simulation
    long sum_line = 0;  // cumulative line length
    int wait_time = 0;  // time until autoteller is free
    long line_wait = 0; // cumulative time in line

    // run the simulation
    for ( int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (line.isfull())
            turnaways++;
        else
        {
            customers++;
            temp.set(cycle); // cycle equals to time of arrival
            line.enqueue(temp); // add new customer to line
        }

        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp);
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }

        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
    }

    // report results
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: " << (double) line_wait / served << " minutes\n"; 
    }
    else
        cout << "No Customers\n";
    cout << "Done!\n";
    return 0;
}