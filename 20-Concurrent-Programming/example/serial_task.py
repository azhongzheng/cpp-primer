import time
from cmath import sqrt


def worker(min, max) -> float:
    sum = 0
    for i in range(min, max):
        sum += sqrt(i)
    return sum


if __name__ == "__main__":
    time_start = time.time()
    min = 0
    max = 1000000000
    sum = worker(min, max)
    time_end = time.time()
    print(f"Sum: {sum},Time: {time_end - time_start}")
