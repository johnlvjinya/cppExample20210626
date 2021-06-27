

import time
import math

def get_prime_number_search_time(n=100):
    begin_time = time.time()

    res_list = []
    for i in range(2, n):
        b = True
        for j in range(2, int(math.sqrt(i))):
            if i%j==0:
                b = False
                break
        if b:
            res_list.append(i)
    end_time = time.time()
    print('n is %s search time: %s'%(str(n), str(round(end_time-begin_time, 4))))

if __name__=='__main__':
    get_prime_number_search_time(n=100)
    # get_prime_number_search_time(n=1000)
    # get_prime_number_search_time(n=10000)
    # get_prime_number_search_time(n=100000) ## c++:1.35s, python:2.7s
    get_prime_number_search_time(n=10000000) ## c++:33.87s, python: 74.88s