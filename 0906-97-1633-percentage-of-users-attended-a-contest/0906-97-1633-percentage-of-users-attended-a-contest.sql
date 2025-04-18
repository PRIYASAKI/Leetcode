# Write your MySQL query statement below
select r.contest_id,ROUND(COUNT(DISTINCT r.user_id)*100/ (SELECT COUNT(*) from Users),2) as percentage  
from Users u
join Register r on u.user_id=r.user_id
GROUP BY r.contest_id
ORDER BY percentage DESC, contest_id ASC;