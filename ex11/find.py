import requests

name = input ("Enter the name of a Pokemon: ")

name = name.lower()

print ("Name: " + name.capitalize())

res = requests.get(f"https://pokeapi.co/api/v2/pokemon/{name}")

data = res.json()

print ("Abilities:")

for ability in data['abilities']:
    print ("- " + ability['ability']['name'].capitalize())
