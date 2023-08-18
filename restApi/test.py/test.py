#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'getTotalGoals' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. STRING team
#  2. INTEGER year
#
import requests as req
import json
def getTotalGoals(team, year):
    # Write your code here
    response = req.get(f"https://jsonmock.hackerrank.com/api/football_matches?year={year}&team1={team}")
    result = json.loads(response.text)
    total_pages = int(result['total_pages'])
    goals = 0
    print(result)
    for i in range(1,total_pages+1):
        res = req.get(f"https://jsonmock.hackerrank.com/api/football_matches?year={year}&team1={team}&page={i}")
        res = json.loads(res.text)
        data = res['data']
        for entry in data:
            goals = goals + int(entry['team1goals'])
    response = req.get(f"https://jsonmock.hackerrank.com/api/football_matches?year={year}&team2={team}")
    result = json.loads(response.text)
    total_pages = int(result['total_pages'])   
    for i in range(1,total_pages+1):
        res = req.get(f"https://jsonmock.hackerrank.com/api/football_matches?year={year}&team2={team}&page={i}")
        res = json.loads(res.text)
        data = res['data']
        for entry in data:
            goals = goals + int(entry['team2goals'])
    return goals

if _name_ == '_main_':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    team = input()

    year = int(input().strip())

    result = getTotalGoals(team, year)

    fptr.write(str(result) + '\n')

    fptr.close()