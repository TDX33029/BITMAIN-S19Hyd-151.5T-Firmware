// FUN_006578ac @ 006578ac size=348 calls_out=4 calls_in=0
// strings: invalid match span

void FUN_006578ac(uint *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  undefined *puVar1;
  int local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (param_4 < param_6) {
      param_5 = 0;
      puVar1 = &DAT_01d08fc8;
      goto LAB_006579e0;
    }
    FUN_0066033c(&local_38,param_2,param_3,param_6,param_5);
  }
  else {
    if ((param_6 < param_5) || (param_4 < param_6)) {
      puVar1 = &DAT_01d08fb8;
LAB_006579e0:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(param_5,param_6,param_4,puVar1);
    }
    if (param_6 - param_5 < *(uint *)(param_2 + 0x28)) {
      FUN_006616a4(&local_38,param_2,param_3,param_4,param_5,param_6);
    }
    else {
      (**(code **)(*(int *)(param_2 + 0x20) + 0x10))
                (&local_28,
                 *(int *)(param_2 + 0x1c) +
                 (*(int *)(*(int *)(param_2 + 0x20) + 8) - 1U & 0xfffffff8) + 8,param_3 + param_5,
                 param_3 + param_6);
      if (local_28 == 0) {
        local_38 = 0;
      }
      else {
        local_34 = local_20 - param_3;
        uStack_30 = local_1c - param_3;
        if (uStack_30 < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("invalid match span",0x25,&DAT_01d08fa8);
        }
        uStack_2c = local_24;
        local_38 = 1;
      }
    }
  }
  if (local_38 == 1) {
    param_1[1] = local_34;
    param_1[2] = uStack_30;
    param_1[3] = uStack_2c;
  }
  *param_1 = (uint)(local_38 == 1);
  return;
}

