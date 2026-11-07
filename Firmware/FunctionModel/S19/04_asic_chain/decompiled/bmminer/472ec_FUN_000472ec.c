// FUN_000472ec @ 000472ec  size=584  callers=0
// program: bmminer


uint FUN_000472ec(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *__format;
  pthread_mutex_t *__mutex;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 local_92c;
  undefined4 local_928;
  undefined4 local_924;
  uint local_920;
  uint local_91c;
  byte local_918 [256];
  char acStack_818 [2048];
  
  memset(local_918,0,0x100);
  local_92c = 0;
  __mutex = (pthread_mutex_t *)(param_1 * 0x18 + 0x50f638);
  local_928 = 0;
  local_924 = 0;
  local_920 = 0;
  local_91c = 0;
  pthread_mutex_lock(__mutex);
  iVar1 = FUN_00046b00(param_1,&local_91c,&local_92c,&local_928,&local_924);
  if (iVar1 != 0) {
    snprintf(acStack_818,0x800,"get_send_address_info error, chain_id = %d\n",param_1);
    FUN_00032218(0,acStack_818,0);
    pthread_mutex_unlock(__mutex);
    return 0;
  }
  iVar1 = 0x15;
  do {
    FUN_00045bc4(local_92c,&local_920);
    local_920 = local_920 >> (local_91c & 0xff) & 0xff;
    if (param_3 <= local_920) {
      iVar1 = 0x16;
      do {
        FUN_00045bc4(local_928,&local_920);
        if (-1 < (int)local_920) {
          memcpy(local_918,param_2,param_3);
          uVar2 = param_3 >> 2;
          if (uVar2 != 0) {
            pbVar4 = local_918;
            do {
              pbVar5 = pbVar4 + 4;
              FUN_00045c40(local_924,
                           (uint)pbVar4[1] << 0x10 | (uint)*pbVar4 << 0x18 | (uint)pbVar4[3] |
                           (uint)pbVar4[2] << 8);
              pbVar4 = pbVar5;
            } while (local_918 + uVar2 * 4 != pbVar5);
          }
          uVar3 = param_3 & 3;
          if (uVar3 != 0) {
            iVar1 = uVar2 * 4;
            uVar2 = (uint)local_918[iVar1] << 0x18;
            if (uVar3 == 2) {
              uVar2 = uVar2 | (uint)local_918[iVar1 + 1] << 0x10;
            }
            else if (uVar3 == 3) {
              uVar2 = (uint)local_918[iVar1 + 2] << 8 | (uint)local_918[iVar1 + 1] << 0x10 | uVar2;
            }
            FUN_00045c40(local_924,uVar2);
          }
          FUN_00045c40(local_928,param_3 | 0x80000000);
          pthread_mutex_unlock(__mutex);
          return param_3;
        }
        usleep(3000);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      pthread_mutex_unlock(__mutex);
      __format = "%s: uart%d always busy, break\n";
      goto LAB_000474e4;
    }
    usleep(3000);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  pthread_mutex_unlock(__mutex);
  __format = "%s: uart%d always dose not has enough send fifo space, break\n";
LAB_000474e4:
  snprintf(acStack_818,0x800,__format,"uart_send",param_1);
  FUN_00032218(0,acStack_818,0);
  return 0;
}

