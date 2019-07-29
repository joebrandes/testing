int i;
int tw = 72;

for(i = 0; i < nr_of_lines(); i++)
    output_wrapped_line(i, tw);

print_stats();
