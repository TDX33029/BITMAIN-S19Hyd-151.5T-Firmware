// FUN_00059448 @ 00059448  size=372  callers=1
// program: bmminer


undefined4 FUN_00059448(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_2 < 0x10) {
    if (param_3 < 0x100) {
      uVar2 = param_4 >> 2;
      if (uVar2 < 0x41) {
        pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc84);
        if (param_1 == 0) {
          iVar5 = uVar2 + param_2 * 0x40;
          if (*(uint *)(&DAT_0070fc9c + iVar5 * 8) == param_4) {
            iVar1 = (uVar2 + param_2 * 0x4000) * 8;
            *(undefined4 *)(&DAT_0070fca0 + iVar5 * 8) = param_5;
            puVar3 = &DAT_0050fc9c + iVar1;
            do {
              *(undefined4 *)(puVar3 + 4) = param_5;
              puVar3 = puVar3 + 0x200;
            } while (puVar3 != (undefined *)(iVar1 + 0x52fc9c));
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc84);
            return 0;
          }
          uVar4 = 0xfffffffc;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc84);
        }
        else if (param_1 == 1) {
          iVar5 = uVar2 + (param_3 + param_2 * 0x100) * 0x40;
          if (*(uint *)(&DAT_0050fc9c + iVar5 * 8) == param_4) {
            *(undefined4 *)(&DAT_0050fca0 + iVar5 * 8) = param_5;
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc84);
            return 0;
          }
          uVar4 = 0xfffffffb;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc84);
        }
        else {
          uVar4 = 0xfffffffa;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc84);
        }
        printf("[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n"
               ,"set_register_cache_value",param_1,param_2,param_3,param_4);
      }
      else {
        uVar4 = 0xfffffffd;
      }
    }
    else {
      uVar4 = 0xfffffffe;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

