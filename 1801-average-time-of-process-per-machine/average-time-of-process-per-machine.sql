SELECT t1.machine_id,ROUND(AVG(diff),3)[processing_time]
FROM(
SELECT a.machine_id,a.process_id,abs(b.timestamp - a.timestamp)as diff
FROM
Activity a
INNER JOIN Activity b ON a.machine_id = b.machine_id
AND
a.process_id = b.process_id
AND
a.activity_type  = 'start' AND b.activity_type = 'end'
) t1
GROUP BY t1.machine_id