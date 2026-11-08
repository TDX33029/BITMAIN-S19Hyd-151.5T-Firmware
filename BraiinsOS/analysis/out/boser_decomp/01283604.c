// FUN_01283604 @ 01283604 size=252 calls_out=1 calls_in=3
// strings: 

void FUN_01283604(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  undefined1 *local_24;
  uint *local_20;
  undefined1 *local_1c;
  
  local_34 = param_2[2];
  local_30 = param_3;
  local_2c = param_4;
  if (param_4 < param_3) {
    local_20 = &local_2c;
    puVar1 = &DAT_0057a2e9;
    puVar3 = &DAT_01c25b18;
    local_28 = &local_30;
  }
  else {
    if (param_4 <= local_34) {
      if (param_4 == param_3) {
        iVar2 = param_2[1];
        param_1[3] = 0;
        *param_1 = &DAT_01c25b04;
        param_1[1] = iVar2 + param_3;
        param_1[2] = 0;
      }
      else {
        (**(code **)*param_2)(&local_28,param_2 + 3,param_2[1]);
        *param_1 = local_28;
        param_1[1] = (int)local_24 + param_3;
        param_1[2] = param_4 - param_3;
        param_1[3] = local_1c;
      }
      return;
    }
    local_20 = &local_34;
    puVar1 = &DAT_005b6275;
    puVar3 = &DAT_01c25b28;
    local_28 = &local_2c;
  }
  local_1c = &LAB_01a6a304;
  local_24 = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar1,&local_28,puVar3);
}

