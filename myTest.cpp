

//*****************
//TEST CASES
//*****************


// CMSC 341 - Fall 2020 - Project 0



// Assignment:
//   (1) Complete the copy constructor (in queue.h)
//   (2) Complete the assignment operator (in queue.h)
//   (3) Complete the destructor (in queue.h)
//   (4) Write a test program (mytest.cpp) to test copy and assignment
//   (5) Verify destructor by running the test program in Valgrind

#include <iostream>
#include "queue.h"
using namespace std;

int main() {

    





    


    //*****************************
    //   TEST ONE:Test the Queue
    //   Create  Source Queues
    //*****************************

    ////////////////////////////////////
    //      TEST FOR INTEGER
    ////////////////////////////////////

    // create an int Queue
    Queue<int> sourceQueueInt;

    //Push ONE integer and dump
    cout << "\nPush ONE integer on sourceQueueInt and dump contents:\n";
    for (int i = 1; i <= 1; i++) {
        sourceQueueInt.enqueue(i);
    }


    //dump the queue
    cout << "This is sourceQueueInt.dump(): " << endl;
    sourceQueueInt.dump();
    //Push 5 integers and dump
    cout << "\nPush 5 MORE integers on sourceQueueInt and dump contents:\n";
    for (int i = 1; i <= 5; i++) {
        sourceQueueInt.enqueue(i);
    }

    //dump the queue
    cout << "This is sourceQueueInt.dump(): " << endl;
    sourceQueueInt.dump();

    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;


    ////////////////////////////////////
    //      TEST FOR DOUBLE
    ////////////////////////////////////


    // create an Double Queue
    Queue<double> sourceQueueDouble;

    //Push ONE integer and dump
    cout << "\nPush ONE double on sourceQueueDouble and dump contents:\n";
    double num = 1.5;
        sourceQueueDouble.enqueue(num);
    

    

    //dump the queue
    cout << "This is sourceQueueDouble.dump(): " << endl;
    sourceQueueDouble.dump();
    //Push 5 integers and dump
    cout << "\nPush 5 MORE double on sourceQueueDouble and dump contents:\n";
    for (double i = 1.5; i <= 5.5; i++) {
        sourceQueueDouble.enqueue(i);
    }

    //dump the queue
    cout << "This is sourceQueueDouble.dump(): " << endl;
    sourceQueueDouble.dump();

    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;


    ////////////////////////////////////
    //      TEST FOR STRING
    ////////////////////////////////////

    Queue<string> sourceQueueString;

    cout << "\nPush ONE string on sourceQueueString and dump contents:\n";
    string str = "String";
    sourceQueueString.enqueue(str);

    //dump the queue
    sourceQueueString.dump();

    //Push 5 strings and dump
    cout << "\nPush 5 MORE strings on sourceQueueInt and dump contents:\n";
    string newStr = "New String";

    for (int i = 1; i <= 5; i++) {
        sourceQueueString.enqueue(newStr);
    }
    //dump the queue
    sourceQueueString.dump();

    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;

    
    

    //****************************************
    //   TEST TWO:Test the Copy Constructor
    //   And assignment operator
    //   Create  new Queues
    //****************************************

    // create  new Queues
    Queue<int> newQueue;
    Queue<double> newQueueDouble;
    Queue<string> newQueueString;


    ////////////////////////////////////
    //      TEST FOR INTEGER
    ////////////////////////////////////


    //Assign sourceQueueInt to newQueue
    cout << "\nAssigning the sourceQueueInt to newQueue." << endl;
    newQueue = sourceQueueInt;

    //Dump the copy 
    cout << "This is newQueue.dump(): " << endl;
    newQueue.dump();

    //Create another Queue anotherQueue
    //Passing sourceQueueInt into anotherQueue
    //Copy Constructor 
    cout << "\nCopying the newQueue into anotherQueue." << endl;
    Queue <int> anotherQueue(sourceQueueInt);


    //Dump the anotherQueue copy 
    cout << "This is anotherQueue.dump(): " << endl;
    anotherQueue.dump();

    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;


    ////////////////////////////////////
    //      TEST FOR DOUBLE
    //////////////////////////////////// 


    //Assign sourceQueueDoube to newQueueDouble
    cout << "\nAssigning the sourceQueueDoube to newQueueDouble." << endl;
    newQueueDouble = sourceQueueDouble;

    //Dump the copy 
    cout << "This is newQueueDouble.dump(): " << endl;
    newQueueDouble.dump();

    //Create another Queue anotherQueueDouble
    //Passing sourceQueueDoube into anotherQueueDouble
    //Copy Constructor 
    cout << "\nCopying the sourceQueueDoube into anotherQueueDouble." << endl;
    Queue <double> anotherQueueDouble(sourceQueueDouble);


    //Dump the anotherQueueDouble copy 
    cout << "This is anotherQueueDouble.dump(): " << endl;
    anotherQueueDouble.dump();

    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;


    ////////////////////////////////////
    //      TEST FOR STRING
    ////////////////////////////////////


    //Assign sourceQueueString to newQueueString
    cout << "\nAssigning the sourceQueueDoube to newQueueDouble." << endl;
    newQueueString = sourceQueueString;

    //Dump the copy 
    cout << "This is newQueueString.dump(): " << endl;
    newQueueString.dump();

    //Create another Queue anotherQueueString
    //Passing sourceQueueString into anotherQueueDouble
    //Copy Constructor 
    cout << "\nCopying the sourceQueueString into anotherQueueDouble." << endl;
    Queue <string> anotherQueueString(sourceQueueString);


    //Dump the anotherQueueString copy 
    cout << "This is anotherQueueString.dump(): " << endl;
    anotherQueueString.dump();
    
    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;

    //****************************************
    //   TEST THREE:Test the Copy is deep
    //   Dequeue the sourceQueueInt
    //   check if newQueue is changed
    //   Copy an empty queue into anotherQueue1
    //****************************************

    


    ////////////////////////////////////
    //      TEST FOR INTEGER
    //////////////////////////////////// 


    //Dequeue the sourceQueueInt
    cout << "\nRead contents of sourceQueueInt using head() and dequeue():\n";
    while (not sourceQueueInt.empty()) {
        cout << sourceQueueInt.head() << endl;
        sourceQueueInt.dequeue();
    }

    //Dump the copy
    cout << "\nThis is newQueue.dump() after sourceQueueInt is Dequeued " << endl;
    newQueue.dump();
   
    //Test COPY Empty
    //create a new queue and copy dequeued sourceQueueInt into anotherQueue1
    Queue <int> emptyQueueInt(sourceQueueInt);
    cout << "\nCopy empty sourceQueueInt into emptyQueueInt and dump it." << endl;
    cout << "This is emptyQueueInt.dump() after copying Dequeued into it: " << endl;
    //Dump Empty COPY
    emptyQueueInt.dump();


    /*
    //////////////////////////////////////////////
    //////////////////////////////////////////////
    Queue <int> emptyQueueInt1;
    emptyQueueInt1 = sourceQueueInt;
    cout << "\nCopy empty sourceQueueInt into emptyQueueInt and dump it." << endl;
    cout << "This is emptyQueueInt1.dump() after copying Dequeued into it: " << endl;
    //Dump Empty COPY
    emptyQueueInt1.dump();
    */

    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;
    

    ////////////////////////////////////
    //      TEST FOR DOUBLE
    ////////////////////////////////////


    //Dequeue the sourceQueueDouble
    cout << "\nRead contents of sourceQueueDouble using head() and dequeue():\n";
    while (not sourceQueueDouble.empty()) {
        cout << sourceQueueDouble.head() << endl;
        sourceQueueDouble.dequeue();
    }

    //Dump the copy
    cout << "\nThis is newQueueDouble.dump() after sourceQueueDouble is Dequeued " << endl;
    newQueueDouble.dump();

    //Test COPY Empty
    //create a new queue and copy dequeued sourceQueueInt into anotherQueue1
    Queue <double> emptyQueueDouble(sourceQueueDouble);
    cout << "\nCopy empty sourceQueueDouble into emptyQueueDouble and dump it." << endl;
    cout << "This is emptyQueueDouble.dump() after copying Dequeued into it: " << endl;
    //Dump Empty COPY
    emptyQueueDouble.dump();



    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;


    

    ////////////////////////////////////
    //      TEST FOR STRING
    ////////////////////////////////////


    //Dequeue the sourceQueueString
    cout << "\nRead contents of sourceQueueString using head() and dequeue():\n";
    while (not sourceQueueString.empty()) {
        cout << sourceQueueString.head() << endl;
        sourceQueueString.dequeue();
    }

    //Dump the copy
    cout << "\nThis is newQueueString.dump() after sourceQueueString is Dequeued " << endl;
    newQueueString.dump();

    //Test COPY Empty
    //create a new queue and copy dequeued sourceQueueString into emptyQueueString
    Queue <string> emptyQueueString(sourceQueueString);
    cout << "\nCopy empty sourceQueueString into emptyQueueString and dump it." << endl;
    cout << "This is emptyQueueString.dump() after copying Dequeued into it: " << endl;
    //Dump Empty COPY
    emptyQueueString.dump();



    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;


    

    //****************************************
    //   TEST FOUR: Test the Edge cases
    //   Try to Deque an empty Queue 
    //   sourceQueueInt is dequeued and empty
    //****************************************


    ////////////////////////////////////
    //      TEST FOR INTEGER
    //////////////////////////////////// 

    cout << "\nemptyQueueInt and sourceQueueInt both were dequeued and empty" << endl;
    cout << "We try to DEQUEUE them again." << endl;
    //An Empty Queue was copy into emptyQueueInt, so it is empty
    //Try to Dequeue an empty queue, emptyQueueInt

    cout << "\nAttempt dequeue() of empty queue (emptyQueueInt):\n";
    try {
        emptyQueueInt.dequeue();
    }
    catch (exception& e) {
        cout << "Caught exception: Empty Queue ERROR !!!\n" << e.what() << endl;
    }


    

    //Try to dequeue an empty queue, sourceQueueInt
     cout << "\nAttempt dequeue() of empty queue(sourceQueueInt):\n";
    try {
        sourceQueueInt.dequeue();
    }
    catch (exception& e) {
        cout << "Caught exception: Empty Queue ERROR !!!\n" << e.what() << endl;
    }


    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;



    ////////////////////////////////////
    //      TEST FOR DOUBLE
    //////////////////////////////////// 

    cout << "\nemptyQueueDouble and sourceQueueDouble both were dequeued and empty" << endl;
    cout << "We try to DEQUEUE them again." << endl;

    //An Empty Queue was copy into emptyQueueDouble, so it is empty
    //Try to Dequeue an empty queue, emptyQueueDouble

    cout << "\nAttempt dequeue() of empty queue (emptyQueueDouble):\n";
    try {
        emptyQueueDouble.dequeue();
    }
    catch (exception& e) {
        cout << "Caught exception: Empty Queue ERROR !!!\n" << e.what() << endl;
    }




    //Try to dequeue an empty queue, sourceQueueDouble
    cout << "\nAttempt dequeue() of empty queue(sourceQueueDouble):\n";
    try {
        sourceQueueDouble.dequeue();
    }
    catch (exception& e) {
        cout << "Caught exception: Empty Queue ERROR !!!\n" << e.what() << endl;
    }


    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;








    ////////////////////////////////////
    //      TEST FOR STRING
    //////////////////////////////////// 

    cout << "\nemptyQueueString and sourceQueueString both were dequeued and empty" << endl;
    cout << "We try to DEQUEUE them again." << endl;

    //An Empty Queue was copy into emptyQueueString, so it is empty
    //Try to Dequeue an empty queue, emptyQueueString

    cout << "\nAttempt dequeue() of empty queue (emptyQueueString):\n";
    try {
        emptyQueueString.dequeue();
    }
    catch (exception& e) {
        cout << "Caught exception: Empty Queue ERROR !!!\n" << e.what() << endl;
    }




    //Try to dequeue an empty queue, sourceQueueString
    cout << "\nAttempt dequeue() of empty queue(sourceQueueString):\n";
    try {
        sourceQueueString.dequeue();
    }
    catch (exception& e) {
        cout << "Caught exception: Empty Queue ERROR !!!\n" << e.what() << endl;
    }


    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;






    //****************************************
    //   TEST FIVE: Test the self assignment
    //****************************************


    ////////////////////////////////////
    //      TEST FOR INTEGER
    //////////////////////////////////// 


    //This is self assignment checking
    cout << "\nThis is self asignment of queues" << endl;
    newQueue = newQueue;
    newQueue.dump();


    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;


    ////////////////////////////////////
    //      TEST FOR DOUBLE
    //////////////////////////////////// 


    newQueueDouble = newQueueDouble;
    newQueueDouble.dump();


    cout << "\n********************************************************************" << endl;
    cout << "********************************************************************" << endl;


    ////////////////////////////////////
    //      TEST FOR STRING
    //////////////////////////////////// 

    newQueueString = newQueueString;
    newQueueString.dump();

    


    


    





    


    return 0;
}