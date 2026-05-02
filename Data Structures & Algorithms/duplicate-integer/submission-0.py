class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        #duplicate_result = False
        for i in nums:
            if i in seen:
                return True
                break
            else:
                seen.add(i)
        return False

        