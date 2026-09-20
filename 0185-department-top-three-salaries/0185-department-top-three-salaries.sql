SELECT Department, Employee, Salary
FROM(
    SELECT d.name AS Department, e.name AS Employee, salary AS Salary, DENSE_RANK() OVER(PARTITION BY d.id ORDER BY salary DESC) AS ranked
    FROM Employee e
    JOIN Department d
    ON e.departmentId = d.id
    ORDER BY salary DESC
) m
WHERE ranked <= 3