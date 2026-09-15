class Solution:
    def interpret(self, command: str) -> str:
        goldpraser = ""
        i = 0
        while(i<len(command)):
            if(command[i]=="G"):
                goldpraser += "G"
                i += 1
            elif(command[i]=="(" and command[i+1]==")"):
                goldpraser += "o"
                i += 2
            else:
                goldpraser += "al"
                i += 4
        return goldpraser