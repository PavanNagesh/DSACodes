SELECT DISTINCT(l1.num) as ConsecutiveNums 
FROM Logs as l1
JOIN Logs as l2
ON l1.num = l2.num
AND l2.id = l1.id + 1
JOIN Logs as l3
ON l2.num = l3.num
AND l3.id = l2.id + 1