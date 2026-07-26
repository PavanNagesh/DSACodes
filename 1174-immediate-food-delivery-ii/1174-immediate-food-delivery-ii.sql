SELECT ROUND(AVG(CASE
    WHEN order_date = customer_pref_delivery_date THEN 1 ELSE 0
END) * 100, 2) as immediate_percentage  
FROM Delivery d1
WHERE order_date IN(
    SELECT min(order_date)
    FROM Delivery d
    WHERE d1.customer_id = d.customer_id
)