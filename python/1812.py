class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        evens = ['a', 'c', 'e', 'g']
        if coordinates[0] in evens:
            return (int(coordinates[1]) % 2 == 0)
        else:
            return int(coordinates[1]) % 2 != 0
