// FUN_00010cc0 @ 00010cc0  size=224  callers=1
// program: monitor-ipsig


char * FUN_00010cc0(char *param_1,char *param_2)

{
  char *param0;
  int __fd;
  int iVar1;
  char acStack_38 [18];
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  param0 = calloc(0x28,1);
  __fd = socket(2,1,0);
  if (__fd < 0) {
    perror("socket");
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  strcpy(acStack_38,param_2);
  iVar1 = ioctl(__fd,0x8927,acStack_38);
  if (iVar1 < 0) {
    perror("ioctl");
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  close(__fd);
  sprintf(param0,"%02X:%02X:%02X:%02X:%02X:%02X",(uint)local_26,(uint)local_25,(uint)local_24,
          (uint)local_23,(uint)local_22,(uint)local_21);
  strcpy(param_1,param0);
  free(param0);
  return param_1;
}

