monte_carlo.mc_master.active = True
monte_carlo.mc_master.generate_dispersions = False

exec(open('RUN_random_normal_truncate_abs/input.py').read())
monte_carlo.mc_master.monte_run_number = 1

test.x_normal_trunc[0] = -3.698480505977541
test.x_normal_trunc[1] = 73.0766330680415
test.x_normal_trunc[2] = 100.3975073801591
test.x_normal_trunc[3] = 128.8481278666395
