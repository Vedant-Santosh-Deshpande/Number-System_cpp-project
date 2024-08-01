import tkinter as tk
from tkinter import messagebox
import schedule
import time

def college_time():
    start_time = float(start_time_entry.get())
    end_time = float(end_time_entry.get())

    college_label.config(text="College Time Is from {} to {}".format(start_time, end_time))

    return start_time, end_time  # Return the start and end time values

def create_timetable():
    rows = int(num_tasks_entry.get())
    timetable = []

    for i in range(rows):
        Task = Task_entries[i].get()
        task_time = float(time_entries[i].get())

        # Check for time conflict with college time
        if college_start <= task_time <= college_end:
            messagebox.showerror("Time Conflict", "Time conflict with college hours. Please choose a different time.")
            return None

        timetable.append((Task, task_time))

    return timetable

def print_timetable(timetable):
    if timetable is None:
        return

    timetable_text.delete("1.0", tk.END)
    timetable_text.insert(tk.END, "Task\t\tTime\n")
    for Task, time in timetable:
        timetable_text.insert(tk.END, "{}\t\t{}\n".format(Task, time))

def generate_timetable():
    global college_start, college_end
    college_start, college_end = college_time()
    timetable = create_timetable()
    print_timetable(timetable)

# Create the main window
window = tk.Tk()
window.title("Time Table Generator")
window.configure(bg='#2C3539',padx=15,pady=15,relief='sunken')

# College Time Frame
college_frame = tk.LabelFrame(window, text="College Time",fg='#B8D8D8',bg='Black',font=2)
college_frame.pack(padx=10, pady=10)

start_time_label = tk.Label(college_frame, text="Start Time:",fg='#008080',bg='Black')
start_time_label.grid(row=0, column=0, padx=5, pady=5)

start_time_entry = tk.Entry(college_frame)
start_time_entry.grid(row=0, column=1, padx=5, pady=5)

end_time_label = tk.Label(college_frame, text="End Time:",fg='#008080',bg='Black')
end_time_label.grid(row=1, column=0, padx=5, pady=5)

end_time_entry = tk.Entry(college_frame)
end_time_entry.grid(row=1, column=1, padx=5, pady=5)

college_label = tk.Label(college_frame, text="College Time Is from 0.0 to 0.0",fg='light Blue',bg='Black')
college_label.grid(row=2, columnspan=2, padx=5, pady=5)

# Timetable Frame
timetable_frame = tk.LabelFrame(window, text="Timetable",fg='#B8D8D8',bg='Black',font=2)
timetable_frame.pack(padx=10, pady=10)

num_tasks_label = tk.Label(timetable_frame, text="Number of Tasks:",fg='#008080',bg='Black')
num_tasks_label.grid(row=0, column=0, padx=5, pady=5)

num_tasks_entry = tk.Entry(timetable_frame)
num_tasks_entry.grid(row=0, column=1, padx=5, pady=5)

Task_entries = []
time_entries = []

def add_task_fields():
    rows = int(num_tasks_entry.get())

    for i in range(rows):
        Task_label = tk.Label(timetable_frame,fg='#008080',bg='Black', text="Task {}: ".format(i + 1))
        Task_label.grid(row=i + 1, column=0, padx=5, pady=5)

        Task_entry = tk.Entry(timetable_frame)
        Task_entry.grid(row=i + 1, column=1, padx=5, pady=5)
        Task_entries.append(Task_entry)

        time_label = tk.Label(timetable_frame,fg='#008080',bg='Black', text="Time {}: ".format(i + 1))
        time_label.grid(row=i + 1, column=2, padx=5, pady=5)

        time_entry = tk.Entry(timetable_frame)
        time_entry.grid(row=i + 1, column=3, padx=5, pady=5)
        time_entries.append(time_entry)

add_button = tk.Button(timetable_frame, text="Add Tasks",fg='Red',bg='Black', command=add_task_fields)
add_button.grid(row=0, column=2, padx=5, pady=5)

generate_button = tk.Button(window, text="Generate Timetable",fg='Red',bg='Black', command=generate_timetable)
generate_button.pack(pady=10)

timetable_text = tk.Text(window, width=30, height=10)
timetable_text.pack(padx=10, pady=10)

window.mainloop()
