// FUN_00f5f114 @ 00f5f114 size=260 calls_out=1 calls_in=2
// strings: 

void FUN_00f5f114(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_30;
  uint local_2c;
  undefined1 *local_28;
  code *local_24;
  uint *local_20;
  code *local_1c;
  
  local_28 = (undefined1 *)&local_30;
  local_2c = param_2[2];
  if (param_3 == local_2c) {
    iVar1 = param_2[1];
    *param_1 = &DAT_0187f9a4;
    param_1[3] = 0;
    param_1[1] = iVar1 + param_3;
    param_1[2] = 0;
    return;
  }
  if (param_3 == 0) {
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar3 = param_2[2];
    uVar6 = param_2[3];
    *param_2 = &DAT_0187f9a4;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar3;
    param_1[3] = uVar6;
    return;
  }
  local_30 = param_3;
  if (local_2c < param_3) {
    local_1c = FUN_007883b8;
    local_24 = FUN_007883b8;
    local_20 = &local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00579118,&local_28,&DAT_0187fa0c);
  }
  (**(code **)*param_2)(param_1,param_2 + 3,param_2[1]);
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  param_2[2] = param_3;
  param_1[1] = iVar1 + param_3;
  param_1[2] = iVar2 - param_3;
  return;
}

