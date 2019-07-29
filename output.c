int i;
int tw = 72;

for(i = 0; i < nr_of_lines(); i++) {
    if(i > config_get("max_output_lines"))
        break;
    output_wrapped_line(i, tw);
}

print_stats();
