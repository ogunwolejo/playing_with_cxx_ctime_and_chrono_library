/***********************************************************************************************************************************************************
 * Playing with the time library, i will first be trying the ctime library before trying the chrono library
 * lets have fun trying different functions in this library
 * the ctime library has various functions, which i will list below they include:
 * * time, asctime, localtime, clock, mktime, difftime, strftime all this are few of the ctime functions
 ************************************************************************************************************************************************************/

#include <iostream>
#include <ctime>

int main(int argc, char* argv[]) {
    // the ctime library begins
    /**
     * time function takes in a time_t pointer as an argument and returns the value in seconds: let begin
     **/

    std::time_t  current_time {};
    std::time_t* p_current_time {&current_time};

    // calling the time function
    std::cout << "The result of the time function in the ctime library is " << std::time(p_current_time) << std::endl;

    /**
     * the difftime function takes two argument which can be normal time_t variables or pointers, in the other of time to end, then time to start
     * the difftime function finds the difference between the two time; Hence, we will create a time variable called  time1 and time2 where time1 will be time before the loop
     * and time2 will be time after the loop: then we find the diff between the two time points, the result returned is in seconds
     * */

    std::time_t time1 {};
    std::time_t time2 {};

    // pointers for the above times
    std::time_t* p_time_1{&time1};
    std::time_t* p_time_2{&time2};

    long long product_result {};

    std::time(p_time_1);
    // using large values will result in a greater time period difference: e.g i < 1000 and j < 100
    for(int i {0}; i < 1000; i++) {
        for(int j {0}; j < 100; j++) {
            product_result = i * j;
            std::cout << product_result << std::endl;
        }
    };

    std::time(p_time_2);
    std::cout << "The time it took for the loop to finish is " << std::difftime(time2, time1) << std::endl;

    /**
     * The next function is the localtime function which accepts the time_t pointers and returns a value as a pointer of type tm
     * the value which the function returns is the local time of the geographical location
     * */

    std::time_t local_time {};
    //std::tm result_of_local_time{};

    // pointers
    std::time_t* p_local_time {&local_time};
    std::tm* p_result_of_local_time{nullptr};

    std::time(p_local_time);
    p_result_of_local_time = std::localtime(p_local_time);
    std::cout << "The local time of my geographical location is " << p_result_of_local_time->tm_hour << ":" << p_result_of_local_time->tm_min << ":" << p_result_of_local_time->tm_sec << std::endl;


    /** The next function is the asctime function which return the date and time in a calender format, the asctime function takes in an argument which is a pointer of type tm
     * */

    std::time_t calender_time {};
    std::time_t* p_calender_time {&calender_time};
    std::time(p_calender_time);
    std::cout << "The Calender time from the asctime function which shows the day, month, day, time and year is " << std::asctime(std::localtime(p_calender_time)) << std::endl;


    return 0;
}