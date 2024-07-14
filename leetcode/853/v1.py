class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        # Calculate time to reach the target for each car
        cars = [(p, (target - p) / s) for p, s in zip(position, speed)]
        
        # Sort cars based on their starting positions in descending order
        cars.sort(reverse=True)
        
        fleets = 0
        time_to_reach_target = 0
        
        for pos, time in cars:
            if time > time_to_reach_target:
                # If this car takes longer than the current fleet's time to reach the target
                fleets += 1
                time_to_reach_target = time
        
        return fleets

        
