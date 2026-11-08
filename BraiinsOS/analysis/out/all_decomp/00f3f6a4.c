// FUN_00f3f6a4 @ 00f3f6a4 size=932 calls_out=14 calls_in=3
// strings: 

void FUN_00f3f6a4(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  int iStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = param_2[1];
    *param_1 = 1;
    param_1[1] = uVar2;
    return;
  case 2:
    iVar3 = *(int *)(param_2 + 8);
    if (iVar3 == 2) {
      FUN_0157a2e8((int)*(undefined8 *)(param_2 + 0x10),param_1);
      return;
    }
    uVar8 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(uint *)(param_2 + 0x14);
    uVar7 = 2;
    *param_1 = 2;
    if (iVar3 == 1) {
      uVar7 = uVar6 >> 0x1f;
    }
    else {
      *(uint *)(param_1 + 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar8;
    if (iVar3 == 1) {
      *(uint *)(param_1 + 8) = uVar7;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(uint *)(param_1 + 0x14) = uVar6;
    return;
  case 3:
    iVar3 = *(int *)(param_2 + 0xc);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar3);
    }
    uVar8 = *(undefined4 *)(param_2 + 8);
    if (iVar3 == 0) {
      iVar4 = 0;
      iVar5 = 1;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(iVar3);
      iVar4 = iVar3;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar3);
      }
    }
    FUN_016dd1aa(iVar5,uVar8,iVar3);
    *(int *)(param_1 + 4) = iVar4;
    *(int *)(param_1 + 8) = iVar5;
    uVar2 = 3;
    *(int *)(param_1 + 0xc) = iVar3;
    break;
  case 4:
    uVar7 = *(uint *)(param_2 + 0xc);
    iVar3 = uVar7 * 0x18;
    if (0x5555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar3);
    }
    iVar4 = *(int *)(param_2 + 8);
    if (iVar3 == 0) {
      iVar5 = 8;
      local_88 = 0;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(iVar3);
      local_88 = uVar7;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,iVar3);
      }
    }
    local_80 = 0;
    local_84 = iVar5;
    if (uVar7 != 0) {
      iVar10 = 0;
      iVar1 = 1;
      do {
        iVar9 = iVar1;
        FUN_00f3f6a4(&local_40,iVar4 + iVar10);
        if ((char)local_40 == '\x06') {
          *(undefined4 *)(param_1 + 4) = local_3c;
          *param_1 = 6;
          iVar3 = iVar5;
          while (iVar9 = iVar9 + -1, iVar9 != 0) {
            FUN_00f3a7d0(iVar3);
            iVar3 = iVar3 + 0x18;
          }
          if (local_88 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(iVar5);
          return;
        }
        if (iVar9 - 1U == local_88) {
          FUN_0157eb1c(&local_88);
          iVar5 = local_84;
        }
        puVar11 = (undefined4 *)(iVar5 + iVar10);
        iVar10 = iVar10 + 0x18;
        *puVar11 = local_40;
        puVar11[1] = local_3c;
        puVar11[2] = uStack_38;
        puVar11[3] = uStack_34;
        puVar11[4] = uStack_30;
        puVar11[5] = uStack_2c;
        iVar1 = iVar9 + 1;
        local_80 = iVar9;
      } while (iVar3 != iVar10);
    }
    *param_1 = 4;
    iStack_60._0_3_ = (undefined3)((uint)local_84 >> 8);
    local_68._3_1_ = (undefined1)local_88;
    local_64._0_3_ = (undefined3)(local_88 >> 8);
    *(int *)(param_1 + 0xc) = local_80;
    *(uint *)(param_1 + 1) = local_68;
    *(uint *)(param_1 + 5) = CONCAT13((char)local_84,(undefined3)local_64);
    *(uint *)(param_1 + 9) = CONCAT13((char)local_80,(undefined3)iStack_60);
    return;
  case 5:
    iStack_60 = *(int *)(param_2 + 4);
    uStack_5c = *(undefined4 *)(param_2 + 8);
    local_78 = 0x80000000;
    local_48 = *(undefined4 *)(param_2 + 0xc);
    local_54 = 0;
    if (iStack_60 == 0) {
      local_48 = 0;
    }
    local_64 = 0;
    local_68 = (uint)(iStack_60 != 0);
    local_7c = 0;
    local_84 = 0;
    local_88 = 0;
    local_58 = local_68;
    iStack_50 = iStack_60;
    uStack_4c = uStack_5c;
    do {
      uVar12 = FUN_00f45584(&local_68);
      iVar3 = (int)uVar12;
      if (iVar3 == 0) {
        local_68 = local_88;
        local_64 = local_84;
        iStack_60 = local_80;
        uStack_5c = local_7c;
        local_58 = local_78;
        local_54 = local_74;
        iStack_50 = uStack_70;
        uStack_4c = uStack_6c;
        FUN_0157cde0(param_1,&local_68);
        return;
      }
      iVar3 = FUN_00f3f0b0(&local_88,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
    } while ((iVar3 == 0) &&
            (iVar3 = FUN_00f3f5a0(&local_88,(int)((ulonglong)uVar12 >> 0x20)), iVar3 == 0));
    *param_1 = 6;
    *(int *)(param_1 + 4) = iVar3;
    if (local_88 == 0) {
      FUN_00f47a28((uint)&local_88 | 4);
      if ((local_78 & 0x7fffffff) == 0) {
        return;
      }
      thunk_FUN_016d3fb4(local_74);
      return;
    }
    if ((char)local_80 == '\x06') {
      return;
    }
    FUN_00f3732c(&local_80);
    return;
  }
  *param_1 = uVar2;
  return;
}

