SELECT id
FROM(
    SELECT id, recordDate, temperature, LAG(temperature) OVER(ORDER BY recordDate) as prev_temp, LAG(recordDate) OVER(ORDER BY recordDate) as prev_date
    FROM Weather
) as t
WHERE DATEDIFF(recordDate, prev_date) = 1
AND temperature > prev_temp;