#include <iostream>
#include <csignal>
#include <cstdlib>
using namespace std;

void signalHandler( int signum ) {
    for (int i = 0; i < 100; i++) {
        cout << endl;
    }
    cout << "Why didn't you stay a bit more to reach the end of the endless number ?" << endl;
    exit(signum);  
}

int main()
{
    system("clear");
    signal(SIGINT, signalHandler);  

    cout << endl;cout << endl;cout << endl;
    cout << "You are the owner of the digital endless number!" << endl;
    cout << endl;cout << endl;cout << endl;
    cout << "If you want to stop, press CRTL+C" << endl;
    cout << endl;cout << endl;cout << endl;
    cout << "Press Enter to Start";
    int iterations = 0;
    cin.ignore();
    //long number
    while (true){
        if (iterations > 10000){
            system("clear");
            iterations = 0;
        }

        int* ptr = (int*) malloc(sizeof(int));
        *ptr = rand();
        cout << *ptr;
        free(ptr);
        iterations += 1;
    }
    return 0;
}
