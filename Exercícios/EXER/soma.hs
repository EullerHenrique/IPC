
-- jeito errado
-- soma :: [a] -> a
-- soma [x] = x
-- soma (x:xs) = x + soma (xs)

-- jeito certo

soma :: Num a => [a] -> a
soma [x] = x
soma(x:xs) = x + soma(xs)

--Num, é uma classe, uma restrição

-- 1) 
segundo :: [a] -> a
segundo xs = head(tail xs)

troca :: (a,b) -> (b,a)
troca (x,y) = (y,x)

parear :: a -> b -> (a,b)
parear x y = (x,y)

-- dobro :: Num a => a -> a
-- dobro 

-- palimondro :: EQ a => [a] -> Bool
-- palindromo x 
-- | xs = reverse xs == True


pertence :: Eq a => a -> [a] -> Bool
pertence x [] = False
pertence x (head:tail)
 |x == head = True && pertence x (tail)  
 |otherwise = False && pertence x (tail)

substituir_todos :: Eq a => a -> a -> [a]  -> [a]
substituir_todos x y [] = []
substituir_todos x y (head:tail) 
  |x == head = [y] ++ substituir_todos x y (tail)
  |otherwise = [head] ++ substituir_todos x y (tail)






