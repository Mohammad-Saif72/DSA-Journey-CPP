// Q22. Job Modeling

// A job has:

// id
// deadline
// profit

// Design:

// struct Job

// You have a vector of jobs.

// Write:

// int findMostProfitableJobIndex(
//     const std::vector<Job>& jobs
// );

// Return the index of the job with the maximum profit.

// Handle:

// Empty vector
// Equal profits


#include<iostream>
#include<vector>

struct Job{
    int id;
    int deadline;
    double profit;
};


int findMostProfitableJobIndex(
    const std::vector<Job>& jobs
){

    if(jobs.size()==0){
        return -1;
    }

    double profit=jobs[0].profit;
    int index = 0;
    for(int i=1;i<jobs.size();i++){
        if(profit<jobs[i].profit){
            index = i;
            profit = jobs[i].profit;
        }
    }

    return index;
};


int main(){

    std::vector<Job> jobs = {
        {101,15,10000},
        {102,10,20000},
        {103,100,300000},
        {104,17, 100000}
    };

    int index = findMostProfitableJobIndex(jobs);

    std::cout<<"Most profitable job at index: "<<index;

    return 0;
}
