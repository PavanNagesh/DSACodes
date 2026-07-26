SELECT ROUND(COUNT(player_id)/(SELECT COUNT(DISTINCT player_id) FROM Activity),2) as fraction
FROM Activity as a
WHERE DATEDIFF(a.event_date, (SELECT min(event_date) FROM Activity as a1 WHERE a1.player_id = a.player_id)) = 1;