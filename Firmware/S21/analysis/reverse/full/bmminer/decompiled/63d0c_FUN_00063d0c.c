// FUN_00063d0c @ 00063d0c  size=1308  callers=0
// program: bmminer


uint FUN_00063d0c(int param_1,void *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  char acStack_930 [2048];
  uint local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  byte abStack_11c [256];
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_18 = 0;
  local_10 = 0;
  memset(abStack_11c,0,0x100);
  local_14 = 0;
  local_120 = 0;
  local_124 = 0;
  local_128 = 0;
  local_12c = 0;
  local_130 = 0;
  local_1c = param_3;
  pthread_mutex_lock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
  iVar2 = FUN_00062f44(param_1,&local_130,&local_120,&local_124,&local_128);
  if (iVar2 != 0) {
    snprintf(acStack_930,0x800,"get_send_address_info error, chain_id = %d\n",param_1);
    FUN_0004948c(0,acStack_930,0);
    pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
    return 0;
  }
  local_c = 0;
  do {
    FUN_00061240(local_120,&local_12c);
    local_12c = local_12c >> (local_130 & 0xff) & 0xff;
    if (param_3 <= local_12c) {
      local_c = 0;
      do {
        FUN_00061240(local_124,&local_12c);
        if (-1 < (int)local_12c) {
          memcpy(abStack_11c,param_2,param_3);
          local_18 = local_1c >> 2;
          for (local_10 = 0; local_10 < (int)local_18; local_10 = local_10 + 1) {
            local_14 = (uint)abStack_11c[local_10 * 4] << 0x18 |
                       (uint)abStack_11c[local_10 * 4 + 1] << 0x10 |
                       (uint)abStack_11c[local_10 * 4 + 2] << 8 |
                       (uint)abStack_11c[local_10 * 4 + 3];
            FUN_000612bc(local_128,local_14);
          }
          local_18 = local_1c & 3;
          if (local_18 != 0) {
            if (local_18 == 2) {
              local_14 = (uint)abStack_11c[local_10 * 4] << 0x18 |
                         (uint)abStack_11c[local_10 * 4 + 1] << 0x10;
            }
            else if (local_18 == 3) {
              local_14 = (uint)abStack_11c[local_10 * 4] << 0x18 |
                         (uint)abStack_11c[local_10 * 4 + 1] << 0x10 |
                         (uint)abStack_11c[local_10 * 4 + 2] << 8;
            }
            else if (local_18 == 1) {
              local_14 = (uint)abStack_11c[local_10 * 4] << 0x18;
            }
            else {
              printf("%s: the uart%d send left data is 4*N length, error!!!\n","uart_send",param_1);
            }
            FUN_000612bc(local_128,local_14);
          }
          FUN_000612bc(local_124,local_1c | 0x80000000);
          pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
          return local_1c;
        }
        usleep(3000);
        iVar2 = local_c + 1;
        bVar1 = local_c < 0x15;
        local_c = iVar2;
      } while (bVar1);
      pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
      snprintf(acStack_930,0x800,"%s: uart%d always busy, break\n","uart_send",param_1);
      FUN_0004948c(0,acStack_930,0);
      return 0;
    }
    usleep(3000);
    local_c = local_c + 1;
  } while (local_c < 0x15);
  pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
  snprintf(acStack_930,0x800,"%s: uart%d always dose not has enough send fifo space, break\n",
           "uart_send",param_1);
  FUN_0004948c(0,acStack_930,0);
  return 0;
}

