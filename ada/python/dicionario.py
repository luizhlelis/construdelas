thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964,
  "car": {"brand": "Ford", "model": "Mustang", "year": 1964, "car": {"brand": "Ford", "model": "Mustang", "year": 1964}}
}
print(thisdict["car"]["car"]["model"])
