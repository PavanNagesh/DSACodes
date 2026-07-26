select a.activity_date as day, COUNT(DISTINCT(user_id)) as active_users
FROM Activity as a
WHERE activity_date <= '2019-07-27' AND Datediff('2019-07-27', a.activity_date) < 30
GROUP BY activity_date;