/* Write your PL/SQL query statement below */
select a.id from weather a
left join weather b on a.recordDate=b.recordDate+1
where a.temperature>b.temperature