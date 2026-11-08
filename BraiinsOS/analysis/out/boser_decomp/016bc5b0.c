// FUN_016bc5b0 @ 016bc5b0 size=332 calls_out=4 calls_in=5
// strings: invalid match span

void FUN_016bc5b0(uint *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  undefined *puVar1;
  int local_38;
  uint local_34;
  uint local_30;
  int local_28 [2];
  int local_20;
  int local_1c;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (param_4 < param_6) {
      param_5 = 0;
      puVar1 = &DAT_01d08fc8;
      goto LAB_016bc6d4;
    }
    FUN_0066033c(&local_38,param_2,param_3,param_6,param_5);
  }
  else {
    if ((param_6 < param_5) || (param_4 < param_6)) {
      puVar1 = &DAT_01d08fb8;
LAB_016bc6d4:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(param_5,param_6,param_4,puVar1);
    }
    if (param_6 - param_5 < *(uint *)(param_2 + 0x28)) {
      FUN_006616a4(&local_38,param_2,param_3,param_4,param_5,param_6);
    }
    else {
      (**(code **)(*(int *)(param_2 + 0x20) + 0x10))
                (local_28,*(int *)(param_2 + 0x1c) +
                          (*(int *)(*(int *)(param_2 + 0x20) + 8) - 1U & 0xfffffff8) + 8,
                 param_3 + param_5,param_3 + param_6);
      if (local_28[0] == 0) {
        local_38 = 0;
      }
      else {
        local_34 = local_20 - param_3;
        local_30 = local_1c - param_3;
        if (local_30 < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("invalid match span",0x25,&DAT_01d08fa8);
        }
        local_38 = 1;
      }
    }
  }
  if (local_38 == 1) {
    param_1[1] = local_34;
    param_1[2] = local_30;
  }
  *param_1 = (uint)(local_38 == 1);
  return;
}

