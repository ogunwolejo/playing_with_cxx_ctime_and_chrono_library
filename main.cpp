/***********************************************************************************************************************************************************
 * Playing with the time library, i will first be trying the ctime library before trying the chrono library
 * lets have fun trying different functions in this library
 * the ctime library has various functions, which i will list below they include:
 * * time, asctime, localtime, clock, mktime, difftime, strftime all this are few of the ctime functions
 ************************************************************************************************************************************************************/

#include <iostream>
#include <ctime>
#include <vector>
#include <chrono>
#include <cstdio>

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
    for(int i {0}; i < 10; i++) {
        for(int j {0}; j < 10; j++) {
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


    /** The use of the clock function in the ctime library, this function returns the time in seconds it took for the system processor to finish a certain task */
    std::cout << "The clock function in ctime library is "  << std::clock() << std::endl;

    /**The mktime function, this function is use to make a calendar format time*/
    std::time_t mk_time {};
    std::time_t* p_mk_time{&mk_time};
    std::tm* p_mk_tm {nullptr};

    int y = 2022, m = 1, d = 17;
    std::vector<std::string> weekday {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    std::time(p_mk_time);
    p_mk_tm = std::localtime(p_mk_time);

    p_mk_tm->tm_year = y - 1990;
    p_mk_tm->tm_mon = m - 1;
    p_mk_tm->tm_mday = d;


    std::cout << "The result of the mktime function is -------------------------------\n ";
    std::cout << p_mk_tm->tm_year << " " << p_mk_tm->tm_mon << " " << p_mk_tm->tm_mday  << std::endl;


    /**The strftime() function in C++ converts the given date and time from a given calendar time time to a null-terminated multibyte character string according to a format string.
     * size_t strftime( char* str, size_t count, const char* format, const tm* time );
     * **/
     std::time_t curr_time{};
     std::time_t* p_curr_time{&curr_time};
     std::tm * tm_curr_time{};

     std::time(p_curr_time);
     tm_curr_time = std::localtime(p_curr_time);

     /** we then create variables were the return values will be written into **/
     char date_string [100];
     char time_string [100];
     std::strftime(date_string, 100, "Today is %B %d, %Y", tm_curr_time);
     std::strftime(time_string, 50, "Current time is %H:%M:%S", tm_curr_time);

     std::cout << date_string  << std::endl;
     std::cout <<  time_string  << std::endl;


     /**using the chrono library to see the diffference or simplicity has compared to the ctime*/
     std::cout << "The period of the system_clock is " << std::chrono::system_clock::period::num << "/" << std::chrono::system_clock::period::den << std::endl;
     std::cout << "The period of the steady_clock is " << std::chrono::steady_clock::period::num << "/" << std::chrono::steady_clock::period::den << std::endl;


     std::chrono::microseconds mir {3600000000};
     std::chrono::nanoseconds nas {mir};
     std::chrono::milliseconds mil {std::chrono::duration_cast<std::chrono::milliseconds>(mir)};
     std::chrono::seconds sec {std::chrono::duration_cast<std::chrono::seconds>(mir)};

     std::cout << "The mircoseconds is " << mir.count() << std::endl;
     std::cout << "The milliseconds is " << mil.count() << std::endl;
     std::cout << "The nanoseconds value is " << nas.count() << std::endl;
     std::cout << "The seconds value is " << sec.count() << std::endl;

     std::chrono::system_clock::time_point t_p {std::chrono::system_clock::now()};
     std::cout << "The system clock using the chrono library is " << t_p.time_since_epoch().count() << std::endl;

     std::chrono::steady_clock::time_point t_ps {std::chrono::steady_clock::now()};
     std::cout << "The steady clock using the chrono library is " << t_ps.time_since_epoch().count() << std::endl;

     std::chrono::duration<int, std::ratio<1,1>> d_1 {3600};
     std::chrono::duration<int, std::ratio<60, 1>> d_2 {3600};
     std::cout << d_1.count() << std::endl;
     std::cout << d_2.count() << std::endl;

     std::chrono::steady_clock::time_point d_3 {std::chrono::steady_clock::now()};
     std::chrono::steady_clock::time_point* p_d_3 {&d_3};

     std::cout << p_d_3->time_since_epoch().count() << " " << d_3.time_since_epoch().count() << std::endl;

    return 0;
}