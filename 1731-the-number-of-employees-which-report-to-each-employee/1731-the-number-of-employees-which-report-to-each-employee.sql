SELECT DISTINCT(e1.employee_id), e1.name, COUNT(e2.reports_to) as reports_count, ROUND(AVG(e2.age)) as average_age 
FROM Employees as e1
Join Employees as e2
ON e1.employee_id = e2.reports_to
GROUP BY employee_id
ORDER BY employee_id ASC