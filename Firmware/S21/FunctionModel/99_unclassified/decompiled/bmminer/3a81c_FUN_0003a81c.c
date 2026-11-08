// FUN_0003a81c @ 0003a81c  size=88  callers=1
// program: bmminer


void FUN_0003a81c(int param_1,sockaddr *param_2,char *param_3,uint param_4)

{
  in_addr_t iVar1;
  int iVar2;
  
  param_2->sa_family = 2;
  if (param_3 == (char *)0x0) {
    param_2->sa_data[2] = '\0';
    param_2->sa_data[3] = '\0';
    param_2->sa_data[4] = '\0';
    param_2->sa_data[5] = '\0';
  }
  else {
    iVar1 = inet_addr(param_3);
    *(in_addr_t *)(param_2->sa_data + 2) = iVar1;
  }
  *(ushort *)param_2->sa_data = (ushort)((param_4 & 0xff) << 8) | (ushort)(param_4 >> 8) & 0xff;
  iVar2 = bind(param_1,param_2,0x10);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}

