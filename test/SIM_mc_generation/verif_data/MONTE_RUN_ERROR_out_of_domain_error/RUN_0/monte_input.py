monte_carlo.mc_master.active = True
monte_carlo.mc_master.generate_dispersions = False

exec(open('RUN_ERROR_out_of_domain_error/input.py').read())
monte_carlo.mc_master.monte_run_number = 0

test.x_normal = 0.3028052237074139
