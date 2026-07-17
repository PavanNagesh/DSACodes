SELECT unique_id, name from Employees as u
LEFT JOIN EmployeeUNI as e
ON u.id = e.id;