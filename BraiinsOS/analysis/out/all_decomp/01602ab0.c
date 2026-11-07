// FUN_01602ab0 @ 01602ab0 size=368 calls_out=5 calls_in=1
// strings: 

void FUN_01602ab0(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar2;
  uint uVar3;
  uint unaff_r6;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint extraout_r12;
  uint extraout_r12_00;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  piVar5 = (int *)*param_1;
  FUN_015e7e64(&local_50);
  if (local_50 == 3) {
    uVar3 = 0x80000000;
    uVar6 = *param_2;
    local_44 = extraout_r3;
    local_4c = extraout_r12;
  }
  else {
    if (local_2c == 0) {
      local_54 = 1;
    }
    else {
      local_54 = thunk_FUN_016d4a50(local_2c);
      if (local_54 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_2c);
      }
    }
    FUN_016dd1aa(local_54,local_30,local_2c);
    uVar6 = *param_2;
    local_44 = extraout_r3_00;
    local_4c = extraout_r12_00;
    unaff_r6 = local_30;
    uVar3 = local_2c;
  }
  if (uVar6 < 2) {
    uVar2 = param_2[4];
    if (uVar2 == 0) {
      local_40 = 2;
    }
    else {
      unaff_r6 = param_2[5];
      if (unaff_r6 == 0) {
        local_58 = 1;
      }
      else {
        local_58 = thunk_FUN_016d4a50(unaff_r6);
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,unaff_r6);
        }
      }
      FUN_016dd1aa(local_58,uVar2,unaff_r6);
      local_40 = 0;
    }
    local_4c = param_2[1];
    local_48 = param_2[2];
    local_44 = param_2[3];
  }
  else {
    local_48 = 0;
    local_40 = 2;
    uVar6 = 0;
  }
  iVar4 = piVar5[2];
  local_38 = local_58;
  local_50 = uVar6;
  local_3c = unaff_r6;
  local_34 = unaff_r6;
  local_30 = uVar3;
  local_2c = local_54;
  local_28 = uVar3;
  if (iVar4 == *piVar5) {
    FUN_01602c58(piVar5);
  }
  puVar1 = (uint *)(iVar4 * 0x2c + piVar5[1]);
  *puVar1 = local_50;
  puVar1[1] = local_4c;
  puVar1[2] = local_48;
  puVar1[3] = local_44;
  puVar1[4] = local_40;
  puVar1[5] = local_3c;
  puVar1[6] = local_38;
  puVar1[7] = local_34;
  puVar1[8] = local_30;
  puVar1[9] = local_2c;
  puVar1[10] = local_28;
  piVar5[2] = iVar4 + 1;
  return;
}

