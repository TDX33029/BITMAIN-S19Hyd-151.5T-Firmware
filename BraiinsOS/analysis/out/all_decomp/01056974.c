// FUN_01056974 @ 01056974 size=996 calls_out=7 calls_in=1
// strings: 

void FUN_01056974(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  undefined1 local_354;
  undefined2 local_350;
  int local_34c;
  int local_348;
  undefined2 local_338;
  int local_334;
  int local_328;
  undefined1 *local_320;
  undefined1 *local_31c;
  int local_310;
  int local_30c;
  int local_308;
  int local_300;
  int local_2fc;
  int local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  short local_2d8;
  undefined2 local_2d6;
  int local_2d4;
  undefined1 auStack_2d0 [64];
  ushort local_290;
  undefined1 auStack_1f0 [224];
  short local_110;
  undefined2 uStack_10e;
  int local_10c;
  undefined1 auStack_108 [228];
  
  if (param_3 == 0) {
    iVar3 = 4;
    local_310 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(param_3 * 0xe8);
    local_310 = param_3;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,param_3 * 0xe8);
    }
  }
  local_300 = -0x80000000;
  local_308 = 0;
  local_30c = iVar3;
  if (param_4 == 0) {
    local_2e0 = 0;
    local_2e4 = 4;
    local_2e8 = 0;
    if (param_3 == 0) goto LAB_0105706c;
  }
  else {
    local_334 = thunk_FUN_016d4a50(0xe8);
    if (local_334 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0xe8);
    }
    local_2e0 = 0;
    local_2e8 = param_4;
    local_2e4 = local_334;
    if (param_3 == 0) goto LAB_0105706c;
    if (param_4 != 0) {
      iVar8 = 0;
      FUN_0104b1a8(&local_110,param_2);
      if (local_110 != 2) {
        FUN_016dd1aa(auStack_1f0,auStack_108,0xe0);
        local_2d4 = local_10c;
        local_2d6 = uStack_10e;
        local_2d8 = local_110;
        FUN_016dd1aa(auStack_2d0,auStack_1f0,0xe0);
        uVar5 = 0x10;
        if (1 < local_290) {
          uVar5 = local_290 - 2;
        }
                    /* WARNING: Could not recover jumptable at 0x01056b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_01056b04 + *(int *)(&DAT_01056b04 + (uint)uVar5 * 4)))();
        return;
      }
      local_2f0 = CONCAT22((short)((uint)local_2f0 >> 0x10),local_338);
      local_2f4 = CONCAT22(CONCAT11(local_2f4._3_1_,local_354),local_350);
      local_2f8 = local_34c;
      local_2fc = local_348;
      local_300 = -0x80000000;
      local_328 = param_4;
LAB_01056f6c:
      *param_1 = -0x80000000;
      param_1[1] = local_10c;
      if (local_328 != 0) {
        thunk_FUN_016d3fb4(local_334);
      }
      if (local_300 != -0x80000000) {
        if (local_2f8 != 0) {
          piVar7 = (int *)(local_2fc + 8);
          iVar6 = local_2f8;
          do {
            bVar9 = (char)piVar7[-1] != '\0';
            iVar4 = 0;
            if (bVar9) {
              iVar4 = *piVar7;
            }
            if (bVar9 && iVar4 != 0) {
              thunk_FUN_016d3fb4(piVar7[1]);
            }
            piVar7 = piVar7 + 6;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (local_300 != 0) {
          thunk_FUN_016d3fb4(local_2fc);
        }
      }
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      while (iVar8 = iVar8 + -1, iVar8 != 0) {
        FUN_0105439c(iVar6);
        iVar6 = iVar6 + 0xe8;
      }
      if (local_310 != 0) {
        thunk_FUN_016d3fb4(iVar3);
      }
      return;
    }
  }
  local_334 = local_2e4;
  local_328 = local_2e8;
  local_2e0 = 0;
  iVar8 = 0;
  do {
    local_31c = auStack_2d0;
    local_320 = auStack_108;
    FUN_0104b1a8(&local_110,param_2);
    iVar6 = local_10c;
    sVar1 = local_110;
    if (local_110 == 2) goto LAB_01056f6c;
    uVar2 = uStack_10e;
    FUN_016dd1aa(auStack_1f0,local_320,0xe0);
    local_2d4 = iVar6;
    local_2d6 = uVar2;
    local_2d8 = sVar1;
    FUN_016dd1aa(local_31c,auStack_1f0,0xe0);
    FUN_016dd1aa(&local_110,&local_2d8,0xe8);
    if (iVar8 == local_310) {
      FUN_0104e528(&local_310);
      iVar3 = local_30c;
    }
    iVar6 = iVar8 * 0xe8;
    iVar8 = iVar8 + 1;
    FUN_016dd1aa(iVar6 + iVar3,&local_110,0xe8);
    local_308 = iVar8;
  } while (iVar8 != param_3);
LAB_0105706c:
  *param_1 = local_310;
  param_1[1] = local_30c;
  param_1[2] = local_308;
  param_1[3] = local_300;
  param_1[4] = local_2fc;
  param_1[5] = local_2f8;
  param_1[6] = local_2f4;
  param_1[7] = local_2f0;
  param_1[8] = local_2e8;
  param_1[9] = local_2e4;
  param_1[10] = local_2e0;
  return;
}

