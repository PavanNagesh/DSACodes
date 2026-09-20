SELECT Department, Employee, salary AS Salary
FROM(
    SELECT d.name as Department, e.name as Employee, e.salary as Salary, MAX(e.salary) OVER(PARTITION BY e.departmentId) AS max_dept
    FROM Employee e
    JOIN Department d
    ON e.departmentId = d.id
) m
WHERE salary = max_dept