import requests
from lxml import html as etree

session = requests.session()
print(session.get('https://atcoder.jp/').text)
document = etree.fromstring(session.get('https://atcoder.jp/users/' + input()).text)
print(document.xpath('/html/body/div[1]/div/div[1]/div[3]/table/tr[1]/td')[0].text)
print(document.xpath('/html/body/div[1]/div/div[1]/div[3]/table/tr[2]/td/span[1]')[0].text)
