import string
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1_size = len(s1)
        if s1_size > len(s2):return False
        #check dict
        need = {chr(x):0 for x in range(ord('a'),ord('z')+1)}
        for i in s1:
            need[i]+=1

        counter ={chr(x):0 for x in range(ord('a'),ord('z')+1)}
        #init
        for i in range(0,s1_size):
            counter[s2[i]]+=1
        if(need == counter):
                return True
        #count
        for i in range(0,len(s2)-s1_size):
            counter[s2[i]]-= 1
            counter[s2[i+s1_size]]+=1
            print(count)
            if(need == counter):
                return True
        return False
