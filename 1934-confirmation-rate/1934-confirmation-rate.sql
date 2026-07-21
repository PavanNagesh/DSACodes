SELECT s.user_id,COALESCE(ROUND(SUM(Case
                        when c.action = 'confirmed' then 1
                        else 0
                    END)/NULLIF(COUNT(c.user_id),0), 2), 0) as confirmation_rate
FROM Signups as s
LEFT JOIN Confirmations as c
ON s.user_id = c.user_id
GROUP BY s.user_id;