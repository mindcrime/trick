monte_carlo.mc_master.active = True
monte_carlo.mc_master.generate_dispersions = False

exec(open('RUN_ERROR_random_value_truncation/input.py').read())
monte_carlo.mc_master.monte_run_number = 0

test.x_normal_trunc[0] = 10.525
test.x_normal_trunc[1] = 10.35
test.x_normal_trunc[2] = -165.7
