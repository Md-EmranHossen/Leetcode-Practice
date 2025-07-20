SELECT w1.id[Id]
FROM Weather w1
INNER JOIN Weather w2 
ON w1.recordDate = DATEADD(Day,1,w2.recordDate)
WHERE w1. temperature > w2. temperature

