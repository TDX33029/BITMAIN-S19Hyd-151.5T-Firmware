// FUN_010153bc @ 010153bc size=240 calls_out=2 calls_in=1
// strings: 

void FUN_010153bc(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint local_20;
  uint local_1c;
  
  uStack_2c = 0;
  uVar3 = *param_3;
  local_30 = param_2[4];
  if ((param_3[1] == 0) &&
     (uStack_2c = *(uint *)(param_3[2] + 4) - uVar3, *(uint *)(param_3[2] + 4) < uVar3)) {
    uStack_2c = 0;
  }
  if (uStack_2c < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_30);
  }
  uVar2 = uVar3 + local_30;
  uVar4 = *param_2;
  uVar3 = param_3[1] + (uint)CARRY4(uVar3,local_30);
  *param_3 = uVar2;
  param_3[1] = uVar3;
  if (uVar4 == 0) {
    FUN_01012da4(param_1,param_3,param_2[5]);
    return;
  }
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  uStack_24 = param_2[3];
  local_20 = param_2[5];
  local_30 = *param_2;
  local_1c = 0;
  if (uVar3 == 0) {
    local_1c = *(uint *)(param_3[2] + 4) - uVar2;
    if (*(uint *)(param_3[2] + 4) < uVar2) {
      local_1c = 0;
    }
  }
  if (local_1c < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_20);
  }
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar5 = param_2[2];
  uVar4 = param_2[3];
  *param_3 = uVar2 + local_20;
  param_3[1] = uVar3 + CARRY4(uVar2,local_20);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar5;
  param_1[3] = uVar4;
  return;
}

