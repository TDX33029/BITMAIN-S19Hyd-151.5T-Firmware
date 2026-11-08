// FUN_0109c334 @ 0109c334 size=368 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_0109c334(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_r9;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint local_30;
  int local_2c;
  
  uVar3 = param_2 * 8;
  bVar8 = 0x1ffffffe < param_2;
  bVar7 = param_2 == 0x1fffffff;
  if (param_2 < 0x20000000) {
    bVar8 = 0x7ffffffb < uVar3;
    bVar7 = uVar3 == 0x7ffffffc;
  }
  if (bVar8 && !bVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar3);
  }
  if (uVar3 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(uVar3);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar3);
    }
    local_30 = param_2;
    if (param_2 != 0) {
      uVar5 = 0;
      do {
        if (uVar3 == 0) break;
        iVar4 = param_1[1];
        uVar1 = 0;
        if (iVar4 < 0) {
LAB_0109c484:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar1,unaff_r9);
        }
        uVar1 = *param_1;
        if (iVar4 == 0) {
          unaff_r9 = 1;
        }
        else {
          unaff_r9 = thunk_FUN_016d4a50(iVar4,uVar1);
          if (unaff_r9 == 0) {
            uVar1 = 1;
            unaff_r9 = iVar4;
            goto LAB_0109c484;
          }
        }
        uVar6 = uVar5 + 1;
        param_1 = param_1 + 2;
        FUN_016dd1aa(unaff_r9,uVar1,iVar4);
        uVar3 = uVar3 - 8;
        piVar2 = (int *)(local_2c + uVar5 * 8);
        *piVar2 = unaff_r9;
        piVar2[1] = iVar4;
        uVar5 = uVar6;
      } while (param_2 != uVar6);
    }
  }
  if (local_30 <= param_2) {
    return CONCAT44(param_2,local_2c);
  }
  if (param_2 == 0) {
    thunk_FUN_016d3fb4(local_2c);
    return 4;
  }
  iVar4 = thunk_FUN_016d4ea4(local_2c,param_2 << 3);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,param_2 << 3);
  }
  return CONCAT44(param_2,iVar4);
}

