import datetime
import os
import sys
import time

while True:
    if sys.platform == "win32":
        print(os.system("cls"))
    else:
        print(os.system("clear"))
    print(datetime.datetime.now())
    time.sleep(0.5)