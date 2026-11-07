// FUN_00010afc @ 00010afc  size=192  callers=1
// program: monitor-ipsig


undefined4 FUN_00010afc(char *param_1,char *param_2)

{
  int __fd;
  int iVar1;
  char *__src;
  undefined4 uVar2;
  char acStack_30 [15];
  undefined1 local_21;
  in_addr iStack_1c;
  
  __fd = socket(2,2,0);
  if (__fd == -1) {
    perror("socket");
    uVar2 = 0xffffffff;
  }
  else {
    strncpy(acStack_30,param_1,0x14);
    local_21 = 0x30;
    iVar1 = ioctl(__fd,0x8915,acStack_30);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
      printf(":No Such Device %s/n",param_1);
    }
    else {
      __src = inet_ntoa(iStack_1c);
      strcpy(param_2,__src);
      uVar2 = 1;
      close(__fd);
    }
  }
  return uVar2;
}

