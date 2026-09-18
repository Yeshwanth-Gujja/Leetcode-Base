class Solution:
    def toggleLightBulbs(self, bulbs: list[int]) -> list[int]:
        simulation = [False]*101
        result = []
        i = 0
        while(i<len(bulbs)):
            simulation[bulbs[i]] = not(simulation[bulbs[i]])
            i += 1
        i=0
        while(i<101):
            if(simulation[i]):
                result.append(i)
            i += 1
        return result