from asyncio.windows_events import NULL
import sys,asyncio,os
from urllib import request
request_from = 'http://cloud.nat.yinidc.cn:26725/chfs/shared/Server_Backup/latest.txt'
request_file='F:\Server_Backups\Version.txt'
request.urlretrieve(url=request_from,filename=request_file,reporthook=None)
f=open('F:\Server_Backups\Version.txt','r',encoding = 'utf-8')
downb_from =f.read()
f.close()
down_from = 'http://cloud.nat.yinidc.cn:26725/chfs/shared/Server_Backup/down_to.txt'
request.urlretrieve(url=down_from,filename='F:\Server_Backups\down_to.txt',reporthook=None) 
f=open('F:\Server_Backups\down_to.txt','r',encoding = 'utf-8')
file_name=f.read()
f.close()
request.urlretrieve(url=downb_from,filename=file_name,reporthook=None) 