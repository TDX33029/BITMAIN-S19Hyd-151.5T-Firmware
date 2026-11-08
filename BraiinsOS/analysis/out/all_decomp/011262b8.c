// FUN_011262b8 @ 011262b8 size=1248 calls_out=14 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011262b8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r10;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint local_c8;
  int local_c4;
  uint local_c0;
  undefined4 local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char local_68 [28];
  uint local_4c;
  uint local_48;
  uint local_44;
  char local_40 [4];
  undefined4 local_3c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = param_2[1];
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  case 2:
    iVar6 = *(int *)(param_2 + 8);
    if (iVar6 == 2) {
      FUN_0157a2e8((int)*(undefined8 *)(param_2 + 0x10),param_1);
      return;
    }
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    uVar9 = *(uint *)(param_2 + 0x14);
    uVar8 = 2;
    *param_1 = 2;
    if (iVar6 == 1) {
      uVar8 = uVar9 >> 0x1f;
    }
    else {
      *(uint *)(param_1 + 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    if (iVar6 == 1) {
      *(uint *)(param_1 + 8) = uVar8;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(uint *)(param_1 + 0x14) = uVar9;
    return;
  case 3:
    iVar6 = *(int *)(param_2 + 0xc);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar6);
    }
    uVar4 = *(undefined4 *)(param_2 + 8);
    if (iVar6 == 0) {
      iVar2 = 0;
      iVar3 = 1;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(iVar6);
      iVar2 = iVar6;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar6);
      }
    }
    FUN_016dd1aa(iVar3,uVar4,iVar6);
    *(int *)(param_1 + 4) = iVar2;
    uVar1 = 3;
    *(int *)(param_1 + 8) = iVar3;
    *(int *)(param_1 + 0xc) = iVar6;
    break;
  case 4:
    uVar8 = *(uint *)(param_2 + 0xc);
    iVar6 = uVar8 * 0x18;
    if (0x5555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar6);
    }
    iVar2 = *(int *)(param_2 + 8);
    if (iVar6 == 0) {
      iVar3 = 8;
      local_c8 = 0;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(iVar6);
      local_c8 = uVar8;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,iVar6);
      }
    }
    local_c0 = 0;
    local_c4 = iVar3;
    if (uVar8 != 0) {
      iVar7 = 0;
      do {
        uVar8 = local_c0;
        FUN_011262b8(&local_80,iVar2 + iVar7);
        if ((char)local_80 == '\x06') {
          *(undefined4 *)(param_1 + 4) = local_7c;
          *param_1 = 6;
          FUN_01127284(iVar3,uVar8);
          if (local_c8 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(iVar3);
          return;
        }
        if (uVar8 == local_c8) {
          FUN_0157eb1c(&local_c8);
          iVar3 = local_c4;
        }
        puVar10 = (undefined4 *)(iVar3 + iVar7);
        iVar7 = iVar7 + 0x18;
        local_c0 = uVar8 + 1;
        *puVar10 = local_80;
        puVar10[1] = local_7c;
        puVar10[2] = uStack_78;
        puVar10[3] = uStack_74;
        puVar10[4] = uStack_70;
        puVar10[5] = uStack_6c;
      } while (iVar6 != iVar7);
    }
    local_a0._3_1_ = (undefined1)local_c0;
    local_a4._3_1_ = (undefined1)local_c4;
    local_a0._0_3_ = (undefined3)((uint)local_c4 >> 8);
    local_a8._3_1_ = (undefined1)local_c8;
    local_a4._0_3_ = (undefined3)(local_c8 >> 8);
    *(uint *)(param_1 + 0xc) = local_c0;
    *param_1 = 4;
    *(uint *)(param_1 + 1) = local_a8;
    *(undefined4 *)(param_1 + 5) = local_a4;
    *(uint *)(param_1 + 9) = local_a0;
    return;
  case 5:
    local_a0 = *(uint *)(param_2 + 4);
    local_9c = *(undefined4 *)(param_2 + 8);
    local_88 = *(undefined4 *)(param_2 + 0xc);
    if (local_a0 == 0) {
      local_88 = 0;
    }
    local_a8 = (uint)(local_a0 != 0);
    local_b8 = 0x80000000;
    local_bc = 0;
    local_c4 = 0;
    local_c8 = 0;
    local_94 = 0;
    local_a4 = 0;
    local_98 = local_a8;
    local_90 = local_a0;
    local_8c = local_9c;
    do {
      uVar11 = FUN_00f45584(&local_a8);
      iVar6 = (int)uVar11;
      if (iVar6 == 0) {
        local_a8 = local_c8;
        local_a4 = local_c4;
        local_a0 = local_c0;
        local_9c = local_bc;
        local_98 = local_b8;
        local_94 = local_b4;
        local_90 = local_b0;
        local_8c = uStack_ac;
        FUN_0157cde0(param_1,&local_a8);
        return;
      }
      if (local_c8 == 1) {
        puVar5 = &DAT_01887438;
        goto LAB_0112678c;
      }
      uVar8 = *(uint *)(iVar6 + 8);
      uVar4 = 0;
      if ((int)uVar8 < 0) {
LAB_011267a8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar4,unaff_r10);
      }
      uVar4 = *(undefined4 *)(iVar6 + 4);
      if (uVar8 == 0) {
        uVar9 = 0;
        unaff_r10 = 1;
      }
      else {
        unaff_r10 = thunk_FUN_016d4a50(uVar8);
        if (unaff_r10 == 0) {
          uVar4 = 1;
          unaff_r10 = uVar8;
          goto LAB_011267a8;
        }
        uVar9 = uVar8;
      }
      FUN_016dd1aa(unaff_r10,uVar4,uVar8);
      if (local_b8 == 0) {
LAB_011264a0:
        if (local_c8 != 0) {
          puVar5 = &DAT_01887458;
          local_b8 = uVar9;
          local_b4 = unaff_r10;
          local_b0 = uVar8;
LAB_0112678c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,puVar5);
        }
      }
      else if (local_b8 != 0x80000000) {
        thunk_FUN_016d3fb4(local_b4);
        goto LAB_011264a0;
      }
      local_b8 = 0x80000000;
      local_b4 = unaff_r10;
      local_b0 = uVar8;
      local_4c = uVar9;
      local_48 = unaff_r10;
      local_44 = uVar8;
      FUN_011262b8(local_40,(int)((ulonglong)uVar11 >> 0x20));
      if (local_40[0] == '\x06') {
        if (uVar9 != 0) {
          thunk_FUN_016d3fb4(unaff_r10);
        }
        *param_1 = 6;
        *(undefined4 *)(param_1 + 4) = local_3c;
        if (local_c8 == 0) {
          FUN_011240dc((uint)&local_c8 | 4);
          if ((local_b8 & 0x7fffffff) == 0) {
            return;
          }
          thunk_FUN_016d3fb4(local_b4);
          return;
        }
        if ((char)local_c0 == '\x06') {
          return;
        }
        FUN_01111ad8(&local_c0);
        return;
      }
      FUN_01122a78(local_68,(uint)&local_c8 | 4,&local_4c,local_40);
      if (local_68[0] != '\x06') {
        FUN_01111ad8(local_68);
      }
    } while( true );
  }
  *param_1 = uVar1;
  return;
}

