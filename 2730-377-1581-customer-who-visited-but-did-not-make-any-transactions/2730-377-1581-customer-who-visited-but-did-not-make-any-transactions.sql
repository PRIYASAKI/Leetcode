# Write your MySQL query statement below
select customer_id,COUNT(*) as count_no_trans
from Visits v
left join Transactions t ON v.visit_id=t.visit_id
where t.transaction_id IS NULL
GROUP BY v.customer_id;