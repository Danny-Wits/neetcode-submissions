class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1_size = len(s1)
        counter = Counter(s1)

        for i in range(0,len(s2)):
            window = s2[i:i+s1_size]
            if(Counter(window) == counter):
                return True
        return False
