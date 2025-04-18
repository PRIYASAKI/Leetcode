# Write your MySQL query statement below
select p.product_id,IFNULL(ROUND(SUM(s.units*p.price)/SUM(s.units),2),0) as average_price
from Prices p
left join UnitsSold s on p.product_id=s.product_id
AND s.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY product_id;