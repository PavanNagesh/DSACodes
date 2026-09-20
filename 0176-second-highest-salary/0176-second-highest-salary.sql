SELECT MAX(Salary) AS SecondHighestSalary
FROM Employee e1
WHERE salary < (
    SELECT MAX(Salary) AS maxSal
    FROM Employee e2 
);