// FUN_00010bbc @ 00010bbc  size=260  callers=0
// program: monitor-ipsig


undefined4 * FUN_00010bbc(undefined4 *param_1,char *param_2)

{
  char *param0;
  int __fd;
  int iVar1;
  char *pcVar2;
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
  *param_1 = 0x3d43414d;
  pcVar2 = stpcpy((char *)(param_1 + 1),param0);
  pcVar2[0] = ',';
  pcVar2[1] = '\0';
  free(param0);
  return param_1;
}

