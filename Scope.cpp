#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here

Difference(vector <int> elem){
            elements = elem;
}
                
int computeDifference(){
            int max = elements[0], min = elements[0];
                        
            for(int i = 1; i < elements.size(); i++){
                if(elements[i] < min){min = elements[i];}
                if(elements[i] > max){max = elements[i];}
            }

            maximumDifference = abs(max - min);
            return maximumDifference;
}



}; // End of Difference class
