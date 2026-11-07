// FUN_013c8468 @ 013c8468 size=320 calls_out=3 calls_in=5
// strings: 

void FUN_013c8468(uint *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (param_4 < param_6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_6,param_4,&DAT_018945f8);
    }
  }
  else {
    if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(param_5,param_6,param_4,&DAT_018945e8);
    }
    if (*(uint *)(param_2 + 0x28) <= param_6 - param_5) {
      (**(code **)(*(int *)(param_2 + 0x20) + 0x10))
                (&local_28,
                 *(int *)(param_2 + 0x1c) +
                 (*(int *)(*(int *)(param_2 + 0x20) + 8) - 1U & 0xfffffff8) + 8,param_3 + param_5,
                 param_3 + param_6);
      if (local_28 == 1) {
        local_24 = local_20 - param_3;
        local_20 = local_1c - param_3;
        if (local_20 < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018945d8);
        }
        local_28 = 1;
      }
      else {
        local_28 = 0;
      }
      goto LAB_013c8534;
    }
  }
  FUN_005fdcd4(&local_28);
LAB_013c8534:
  if (local_28 == 1) {
    param_1[1] = local_24;
    param_1[2] = local_20;
  }
  *param_1 = (uint)(local_28 == 1);
  return;
}

