#include <algorithm>                                      //For using back, size and pop_back
std::vector<int> maps(const std::vector<int> & values) {
  int n = values.size();                                 //Let`s know how long is our vector
  
  std::vector<int> aVect;                                //We created some vectors for ourselves
  std::vector<int> mVect;
  aVect=values;                                          //Linked vector is constant, so we should copy it to modify
  for(int k=0;k<n;k++){                                  //We reversed vector multiplying it`s number two
    mVect.push_back(aVect.back()*2);
    aVect.pop_back();
  }
  for(int k=0;k<n;k++){                                 //The same operation, but without multiplying
    aVect.push_back(mVect.back());
    mVect.pop_back();
  }
  return aVect;                                        //Return your vector.
}//P.S.:https://github.com/d9nchik
