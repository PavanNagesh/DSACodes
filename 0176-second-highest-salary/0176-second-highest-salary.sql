SELECT MAX(Salary) AS SecondHighestSalary
FROM Employee e1
WHERE salary NOT IN (
    SELECT MAX(Salary) AS maxSal
    FROM Employee e2 
);