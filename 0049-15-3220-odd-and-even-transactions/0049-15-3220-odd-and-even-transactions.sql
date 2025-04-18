# Write your MySQL query statement below
select transaction_date, 
     SUM(CASE WHEN amount%2!=0 THEN amount ELSE 0 END) as odd_sum, 
     SUM(CASE WHEN amount%2=0 THEN amount ELSE 0 END) as even_sum
from transactions
GROUP BY transaction_date
order by transaction_date ASC;


