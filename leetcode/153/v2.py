from typing import List

class Solution:
    def findMin(self, nums: List[int]) -> int:
        # Inicializando os ponteiros da busca binária
        left, right = 0, len(nums) - 1
        
        # Enquanto os ponteiros não se cruzarem
        while left < right:
            # Calcula o meio
            mid = (left + right) // 2
            
            # Compara o elemento do meio com o elemento da direita
            if nums[mid] > nums[right]:
                # Se nums[mid] for maior que nums[right], isso significa que o menor valor
                # está na metade direita da matriz. Portanto, movemos o ponteiro 'left'
                # para mid + 1 para buscar na metade direita.
                left = mid + 1
            else:
                # Caso contrário, se nums[mid] for menor ou igual a nums[right],
                # o menor valor pode estar na metade esquerda, incluindo mid. Então,
                # movemos o ponteiro 'right' para mid.
                right = mid
        
        # Quando left == right, encontramos o menor elemento
        return nums[left]

# Exemplo de uso
sol = Solution()
nums = [3, 4, 5, 1, 2]
print(sol.findMin(nums))  # Output: 1

