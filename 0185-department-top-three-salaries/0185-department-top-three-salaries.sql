SELECT Department, Employee, Salary
FROM(
    SELECT d.name as Department, e.name as Employee, e.salary as Salary, DENSE_RANK() OVER(PARTITION BY d.name ORDER BY e.salary DESC) as rank_sal
    FROM Employee as e
    JOIN Department as d
    ON e.departmentId = d.id
) as t
WHERE rank_sal <= 3;