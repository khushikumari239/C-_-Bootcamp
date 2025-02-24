// A number n is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
// // Given a number n, the task is to return the list/vector of the factorial numbers smaller than or equal to n.


class Solution {
    public:
      vector<long long> factorialNumbers(long long n) {
          
          // Write Your Code here
            vector<long long> factorials;
      long long fact = 1;
      long long i = 1;
  
      while (fact <= n) {
          factorials.push_back(fact);
          i++;
          fact *= i; // Calculate the next factorial
      }
  
      return factorials;
          
          
      }
  };