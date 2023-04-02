<?php
$max = 1;

$min = 0;

$rand_guess = rand($min, $max);

$stdin = fopen("php://stdin", "r");

printf ("Choose rock, paper, or scissors: ");

$input = rtrim(fgets($stdin), "\n");

if (strpos($input, 'rock') !== false)
{
	if ($rand_guess == 0)
		printf ("Sorry, you lost. The computer chose paper.\n");
	if ($rand_guess == 1)
		printf ("Congratulations! You won! The computer chose scissors.\n");
}
if (strpos($input, 'paper') !== false)
{
	if ($rand_guess == 0)
		printf ("Sorry, you lost. The computer chose scissors.\n");
	if ($rand_guess == 1)
		printf ("Congratulations! You won! The computer chose rock.\n");
}
if (strpos($input, 'scissors') !== false)
{
	if ($rand_guess == 0)
		printf ("Sorry, you lost. The computer chose rock.\n");
	if ($rand_guess == 1)
		printf ("Congratulations! You won! The computer chose paper.\n");
}
?>
