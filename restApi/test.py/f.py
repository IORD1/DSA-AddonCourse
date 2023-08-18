import reqests as req
import json

def lad():
    requests = req.get(f"a;ldjfadksjflakdsfj")
    requests = json.loads(requests.text)
    data = requests['data']
    