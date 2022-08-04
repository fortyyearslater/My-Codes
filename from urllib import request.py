from asyncio.windows_events import NULL
from urllib import request

down_url = 'http://docs.python-requests.org/zh_CN/latest/_static/requests-sidebar.png'
file_name=NULL
request.urlretrieve(url=down_url,filename=file_name,reporthook=None) 