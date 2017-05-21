import datetime

start_date = datetime.datetime(1901, 1, 1)
delta_t = datetime.timedelta(1)

total_sundays = 0
while start_date != (datetime.datetime(2000, 12, 31) + delta_t):
    if(start_date.weekday() == 6 and start_date.day == 1):
        total_sundays += 1
    start_date += delta_t

print(total_sundays)