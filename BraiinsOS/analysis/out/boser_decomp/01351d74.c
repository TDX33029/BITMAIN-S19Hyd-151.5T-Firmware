// FUN_01351d74 @ 01351d74 size=208 calls_out=2 calls_in=1
// strings: 

void FUN_01351d74(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_2c;
  uint local_28;
  
  uVar2 = *param_3;
  uVar4 = *(uint *)(param_3[2] + 4);
  local_40 = param_2[4];
  local_3c = uVar4 - uVar2;
  if (uVar4 < uVar2) {
    local_3c = 0;
  }
  if (param_3[1] != 0) {
    local_3c = 0;
  }
  if (local_3c < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_01284540(&local_40);
  }
  uVar3 = uVar2 + local_40;
  uVar1 = *param_2;
  uVar2 = param_3[1] + (uint)CARRY4(uVar2,local_40);
  *param_3 = uVar3;
  param_3[1] = uVar2;
  if (uVar1 == 0) {
    FUN_0134ccc8(param_1,param_3,param_2[5]);
  }
  else {
    local_40 = *param_2;
    local_3c = param_2[1];
    uStack_38 = param_2[2];
    uStack_34 = param_2[3];
    local_28 = uVar4 - uVar3;
    if (uVar4 < uVar3) {
      local_28 = 0;
    }
    local_2c = param_2[5];
    if (uVar2 != 0) {
      local_28 = 0;
    }
    if (local_28 < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&local_2c);
    }
    *param_3 = uVar3 + local_2c;
    param_3[1] = uVar2 + CARRY4(uVar3,local_2c);
    uVar2 = param_2[1];
    uVar4 = param_2[2];
    uVar1 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = uVar1;
  }
  return;
}

