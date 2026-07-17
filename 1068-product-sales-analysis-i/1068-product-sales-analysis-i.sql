SELECT product_name, year, price FROM Sales as s
RIGHT JOIN Product as p
ON s.product_id = p.product_id
WHERE year IS NOT NULL;