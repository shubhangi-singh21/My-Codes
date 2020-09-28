/* HitCounter counter = new HitCounter();

// hit at timestamp 1.
counter.hit(1);

// hit at timestamp 2.
counter.hit(2);

// hit at timestamp 3.
counter.hit(3);

// get hits at timestamp 4, should return 3.
counter.getHits(4);

// hit at timestamp 300.
counter.hit(300);

// get hits at timestamp 300, should return 4.
counter.getHits(300);

// get hits at timestamp 301, should return 3.
counter.getHits(301); */


vector<int> times, hits; 
  
times.resize(300); 
hits.resize(300); 
  
/** Record a hit. 
   @param timestamp - The current timestamp 
   (in seconds granularity). */
void hit(int timestamp) 
{ 
    int idx = timestamp % 300; 
    if (times[idx] != timestamp) { 
        times[idx] = timestamp; 
        hits[idx] = 1; 
    } 
    else { 
        ++hits[idx]; 
    } 
} 
  
// Time Complexity : O(1) 
  
/** Return the number of hits in the past 5 minutes. 
    @param timestamp - The current timestamp (in  
    seconds granularity). */
int getHits(int timestamp) 
{ 
    int res = 0; 
    for (int i = 0; i < 300; ++i) { 
        if (timestamp - times[i] < 300) { 
            res += hits[i]; 
        } 
    } 
    return res; 
} 
// Time Complexity : O(300) == O(1)
