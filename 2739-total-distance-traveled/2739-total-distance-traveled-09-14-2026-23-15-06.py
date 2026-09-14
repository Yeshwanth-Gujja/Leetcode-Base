class Solution:
    def distanceTraveled(self, mainTank: int, additionalTank: int) -> int:
        distance = 0
        while mainTank >= 5 and additionalTank >= 1:
            distance += 10*5
            mainTank-=4
            additionalTank-=1
        return distance + (mainTank*10)