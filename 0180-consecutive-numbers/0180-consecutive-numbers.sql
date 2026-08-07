SELECT DISTINCT(num) as ConsecutiveNums
FROM (
    SELECT id, num, CASE 
        WHEN LAG(num) OVER(ORDER BY id) = num AND LEAD(num) OVER(ORDER BY id) = num THEN 'YES'
        ELSE 'NO'
    END as bool
    FROM Logs
    ORDER BY id
) as t
WHERE bool = 'YES';