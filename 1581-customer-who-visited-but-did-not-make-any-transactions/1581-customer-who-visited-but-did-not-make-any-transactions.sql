SELECT customer_id, COUNT(*) as count_no_trans
FROM Visits
WHERE visit_id NOT IN(
    SELECT DISTINCT visit_id from Transactions
)
Group By customer_id
Order By visit_id Asc;