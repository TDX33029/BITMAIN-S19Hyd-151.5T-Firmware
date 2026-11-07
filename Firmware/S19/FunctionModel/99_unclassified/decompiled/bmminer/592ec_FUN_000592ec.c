// FUN_000592ec @ 000592ec  size=348  callers=30
// program: bmminer


undefined4 FUN_000592ec(int param_1,uint param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (param_4 & 0x3ff) >> 2;
  if (param_2 < 0x10) {
    if (param_3 < 0x100) {
      if (uVar1 < 0x40) {
        pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc84);
        if (param_1 == 0) {
          iVar3 = uVar1 + param_2 * 0x40;
          if (*(uint *)(&DAT_0070fc9c + iVar3 * 8) == param_4) {
            *param_5 = *(undefined4 *)(&DAT_0070fca0 + iVar3 * 8);
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc84);
            return 0;
          }
          uVar2 = 0xfffffffc;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc84);
        }
        else if (param_1 == 1) {
          iVar3 = uVar1 + (param_3 + param_2 * 0x100) * 0x40;
          if (*(uint *)(&DAT_0050fc9c + iVar3 * 8) == param_4) {
            *param_5 = *(undefined4 *)(&DAT_0050fca0 + iVar3 * 8);
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc84);
            return 0;
          }
          uVar2 = 0xfffffffb;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc84);
        }
        else {
          uVar2 = 0xfffffffa;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc84);
        }
        printf("[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n"
               ,"get_register_cache_value",param_1,param_2,param_3,param_4);
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

