// FUN_0127775c @ 0127775c size=392 calls_out=5 calls_in=1
// strings: 

void FUN_0127775c(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint unaff_r6;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  uint local_28;
  uint local_24;
  uint local_20;
  
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 != 0) {
    unaff_r6 = *(uint *)(param_3 + 8);
  }
  if (uVar4 == 0 || unaff_r6 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  puVar2 = *(undefined4 **)(param_2 + 4);
  puVar3 = *(undefined4 **)(param_3 + 4);
  if (unaff_r6 == 1) {
    uVar1 = uVar4 * 4;
    bVar7 = 0x3ffffffe < uVar4;
    bVar6 = uVar4 == 0x3fffffff;
    local_28 = 0;
    if (uVar4 < 0x40000000) {
      bVar7 = 0x7ffffffb < uVar1;
      bVar6 = uVar1 == 0x7ffffffc;
    }
    if (bVar7 && !bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar1);
    }
    uVar5 = *puVar3;
    if (uVar1 == 0) {
      local_24 = 4;
    }
    else {
      local_24 = thunk_FUN_016d4a50(uVar1);
      local_28 = uVar4;
      if (local_24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar1);
      }
    }
    FUN_016dd1aa(local_24,puVar2,uVar1);
    local_20 = uVar4;
    FUN_01274bd8(&local_28,uVar5);
  }
  else {
    if (uVar4 != 1) {
      FUN_01274d38(param_1,puVar2,uVar4,puVar3,unaff_r6);
      return;
    }
    uVar4 = unaff_r6 * 4;
    bVar7 = 0x3ffffffe < unaff_r6;
    bVar6 = unaff_r6 == 0x3fffffff;
    if (unaff_r6 < 0x40000000) {
      bVar7 = 0x7ffffffb < uVar4;
      bVar6 = uVar4 == 0x7ffffffc;
    }
    if (bVar7 && !bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar4);
    }
    uVar5 = *puVar2;
    if (uVar4 == 0) {
      local_28 = 0;
      local_24 = 4;
    }
    else {
      local_24 = thunk_FUN_016d4a50(uVar4);
      local_28 = unaff_r6;
      if (local_24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar4);
      }
    }
    FUN_016dd1aa(local_24,puVar3,uVar4);
    local_20 = unaff_r6;
    FUN_01274bd8(&local_28,uVar5);
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  return;
}

