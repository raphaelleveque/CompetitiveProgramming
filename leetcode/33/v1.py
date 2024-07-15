class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # Inicializando os ponteiros da busca binária
        left, right = 0, len(nums) - 1
        
        # Enquanto os ponteiros não se cruzarem
        while left <= right:
            # Calcula o meio
            mid = (left + right) // 2
            
            # Se encontrar o alvo, retorna o índice
            if nums[mid] == target:
                return mid
            
            # Verifica se a metade esquerda está ordenada
            if nums[left] <= nums[mid]:
                # Se o alvo está entre left e mid, ajusta right
                if nums[left] <= target < nums[mid]:
                    right = mid - 1
                else:
                    # Caso contrário, ajusta left
                    left = mid + 1
            else:
                # A metade direita está ordenada
                if nums[mid] < target <= nums[right]:
                    left = mid + 1
                else:
                    right = mid - 1
        
        # Se não encontrar o alvo, retorna -1
        return -1
