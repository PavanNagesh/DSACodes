SELECT Department, Employee, salary as Salary
FROM(
    SELECT d.name as Department, 
        e.name as Employee,
        e.salary, 
        MAX(e.salary) OVER(PARTITION BY e.departmentId) as max_dept
    FROM Employee as e
    JOIN Department as d
    ON e.departmentId = d.id
) as t
WHERE salary = max_dept;