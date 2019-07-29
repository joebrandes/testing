int i;

for(i = 0; i < nr_of_lines(); i++) {
    if(i > config_get("max_output_lines"))
        break;
    output_line(i);
}

print_stats();
