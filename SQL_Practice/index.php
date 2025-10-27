<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>Proba</title>
</head>

<!-- <h1>Привет!</h1>
<?php echo "Это кусок PHP"; ?>
<p>Дальше опять HTML</p> -->

<body>

	<div class="main_window">

		<div class="avtorizacion">

			<form action="" method="post">
				<h2>Login</h2>
				<label for="user_id">User name</label>
				<input 
					type="text",
					id="user_id",
					placeholder="name">
				<label for="user_pas">Password</label>
				<input 
					type="password",
					id="user_pas"
					placeholder="******">
				<button type="button">send</button>
				<br>
				<button type="button">add new user</button>
			</form>

		</div>

		<div class="new_user_window">
			<form action="" method="post">
				<h2>New user</h2>
				<label for="new_user_id">User name</label>
				<input 
					type="text",
					id="new_user_id",
					placeholder="name">
				<label for="new_user_pas">Password</label>
				<input 
					type="password",
					id="new_user_pas"
					placeholder="******">
				<label for="new_user_pas_rep">Repeat Password</label>
				<input 
					type="password",
					id="new_user_pas_rep"
					placeholder="******">
				<br>
				<button type="button">registration user</button>
			</form>

		</div>

		<div class="user_window">
			<h2>Welcome, <span class="user_name"></span></h2>
			<div class="catalog">
				<h3>Catalog</h3>
				<hr>
				<form action="" method="post">
					<ul>
						<li>
							<span id="sku_code">213213</span>
							<span id="sku_name">Lorem ipsum dolor sit amet.</span>
							<span id="sku_price">0.25</span>
							<input type="text" id="sku_count" placeholder="0">
							<input type="checkbox" id="sku_check">
						</li>
						<li>
							<span id="sku_code">213213</span>
							<span id="sku_name">Lorem ipsum dolor sit amet.</span>
							<span id="sku_price">0.25</span>
							<input type="text" id="sku_count" placeholder="0">
							<input type="checkbox" id="sku_check">
						</li>
						<li>
							<span id="sku_code">213213</span>
							<span id="sku_name">Lorem ipsum dolor sit amet.</span>
							<span id="sku_price">0.25</span>
							<input type="text" id="sku_count" placeholder="0">
							<input type="checkbox" id="sku_check">
						</li>
					</ul>
					<button type="button" id="confirm_order">buy</button>
				</form>
			</div>
		</div>

		<div class="admin_window">

		</div>

	</div>
	

	<script src="script.js"></script>
</body>
</html>

