class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        cars = [(pos, (target - pos) / s) for pos, s in zip(position, speed)]
        cars.sort(reverse=True)
        fleets = 0
        time_to_target = 0

        for pos, time in cars:
            if time > time_to_target:
                time_to_target = time
                fleets += 1
        return fleets