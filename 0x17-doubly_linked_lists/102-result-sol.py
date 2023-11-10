def is_palindrome(n):
  """Returns True if n is a palindrome, False otherwise."""
  n_str = str(n)
  return n_str == n_str[::-1]

def largest_palindrome_product(n_digits):
  """Returns the largest palindrome made from the product of two n-digit numbers."""
  largest_palindrome = 0
  for i in range(10**(n_digits - 1), 10**n_digits):
    for j in range(10**(n_digits - 1), 10**n_digits):
      product = i * j
      if is_palindrome(product) and product > largest_palindrome:
        largest_palindrome = product
  return largest_palindrome

print(largest_palindrome_product(3))