// FUN_0128371c @ 0128371c size=260 calls_out=1 calls_in=12
// strings: 

void FUN_0128371c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_30;
  uint local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  uint *local_20;
  undefined1 *local_1c;
  
  local_2c = param_2[2];
  if (param_3 == local_2c) {
    iVar4 = param_2[1];
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *param_2 = &DAT_01c25b04;
    param_2[1] = iVar4 + param_3;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else if (param_3 == 0) {
    uVar1 = param_2[1];
    param_1[2] = 0;
    *param_1 = &DAT_01c25b04;
    param_1[1] = uVar1;
    param_1[3] = 0;
  }
  else {
    local_30 = param_3;
    if (local_2c < param_3) {
      local_1c = &LAB_01a6a304;
      local_24 = &LAB_01a6a304;
      local_20 = &local_2c;
      local_28 = (undefined1 *)&local_30;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b26c0,&local_28,&DAT_01c25b38);
    }
    (**(code **)*param_2)(&local_28,param_2 + 3,param_2[1]);
    param_2[1] = param_2[1] + param_3;
    param_2[2] = param_2[2] - param_3;
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = param_3;
    param_1[3] = local_1c;
  }
  return;
}

