SELECT 
    p.product_id,
    COALESCE(
        CAST(ROUND(SUM(p.price * us.units) / NULLIF(SUM(us.units * 1.0), 0), 2) AS DECIMAL(10, 2)),
        0.00
    ) AS average_price
FROM Prices p
LEFT JOIN UnitsSold us 
    ON p.product_id = us.product_id 
    AND us.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id;
