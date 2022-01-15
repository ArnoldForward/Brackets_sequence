# Brackets_sequence
A simple program for checking a correct brackets order

Задание: программа должна вывести YES, если во входной последовательности символов скобки расставлены верно, или NO, если скобки расставлены неверно. Могут использоваться скобки всех трёх видов: (), [], {}.

Пример: (([[{{}}]]))() - True, (([[){{}}]]) - False.

Тесты:
(([][{{}}][]))()()[[{{}}][]]                true
(([][{{}}][]))()()[[{{}}(][)]]   	          false
(([][{{}}][]))()()[[{{}}(][)]])) 	          false
[[{(([][{{}}][]))()()[[{{}}][]]}{{}[]}]()]  true
