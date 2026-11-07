// FUN_0123d870 @ 0123d870 size=420 calls_out=5 calls_in=1
// strings: 

void FUN_0123d870(uint *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint unaff_r6;
  bool bVar3;
  bool bVar4;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if (param_3 != 0) {
    unaff_r6 = param_5;
  }
  if (param_3 != 0 && unaff_r6 != 0) {
    if (unaff_r6 == 1) {
      uVar1 = param_3 * 4;
      bVar4 = 0x3ffffffe < param_3;
      bVar3 = param_3 == 0x3fffffff;
      if (param_3 < 0x40000000) {
        bVar4 = 0x7ffffffb < uVar1;
        bVar3 = uVar1 == 0x7ffffffc;
      }
      if (bVar4 && !bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar1);
      }
      uVar2 = *param_4;
      if (uVar1 == 0) {
        local_28 = 0;
        local_24 = 4;
      }
      else {
        local_24 = thunk_FUN_016d4a50(uVar1);
        local_28 = param_3;
        if (local_24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,uVar1);
        }
      }
      FUN_016dd1aa(local_24,param_2,uVar1);
      local_20 = param_3;
      FUN_01274bd8(&local_28,uVar2);
    }
    else {
      if (param_3 != 1) {
        FUN_01274d38(&local_38);
        goto LAB_0123d89c;
      }
      uVar1 = unaff_r6 * 4;
      bVar4 = 0x3ffffffe < unaff_r6;
      bVar3 = unaff_r6 == 0x3fffffff;
      if (unaff_r6 < 0x40000000) {
        bVar4 = 0x7ffffffb < uVar1;
        bVar3 = uVar1 == 0x7ffffffc;
      }
      if (bVar4 && !bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar1);
      }
      uVar2 = *param_2;
      if (uVar1 == 0) {
        local_28 = 0;
        local_24 = 4;
      }
      else {
        local_24 = thunk_FUN_016d4a50(uVar1);
        local_28 = unaff_r6;
        if (local_24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,uVar1);
        }
      }
      FUN_016dd1aa(local_24,param_4,uVar1);
      local_20 = unaff_r6;
      FUN_01274bd8(&local_28,uVar2);
    }
    local_38 = local_28;
    local_30 = local_20;
    local_34 = local_24;
  }
  else {
    local_30 = 0;
    local_34 = 4;
    local_38 = 0;
  }
LAB_0123d89c:
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  return;
}

