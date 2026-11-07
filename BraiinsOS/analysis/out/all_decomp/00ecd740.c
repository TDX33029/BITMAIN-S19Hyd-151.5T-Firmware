// FUN_00ecd740 @ 00ecd740 size=1264 calls_out=14 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ecd740(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int local_d8;
  uint local_d0;
  int local_cc;
  uint local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  char local_88 [28];
  int local_6c;
  int local_68;
  int iStack_64;
  char local_60 [4];
  undefined4 local_5c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar4 = (undefined1 *)*param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar4) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = puVar4[1];
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  case 2:
    iVar9 = *(int *)(puVar4 + 8);
    if (iVar9 == 2) {
      FUN_0157a2e8((int)*(undefined8 *)(puVar4 + 0x10),param_1);
      return;
    }
    uVar5 = *(undefined4 *)(puVar4 + 0x10);
    uVar7 = *(uint *)(puVar4 + 0x14);
    uVar8 = 2;
    *param_1 = 2;
    if (iVar9 == 1) {
      uVar8 = uVar7 >> 0x1f;
    }
    else {
      *(uint *)(param_1 + 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    if (iVar9 == 1) {
      *(uint *)(param_1 + 8) = uVar8;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(uint *)(param_1 + 0x14) = uVar7;
    return;
  case 3:
    iVar9 = *(int *)(puVar4 + 0xc);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar9);
    }
    uVar5 = *(undefined4 *)(puVar4 + 8);
    if (iVar9 == 0) {
      iVar2 = 1;
      iVar10 = 0;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(iVar9);
      iVar10 = iVar9;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar9);
      }
    }
    FUN_016dd1aa(iVar2,uVar5,iVar9);
    *(int *)(param_1 + 4) = iVar10;
    uVar1 = 3;
    *(int *)(param_1 + 8) = iVar2;
    *(int *)(param_1 + 0xc) = iVar9;
    break;
  case 4:
    uVar8 = *(uint *)(puVar4 + 0xc);
    iVar9 = uVar8 * 0x18;
    if (0x5555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar9);
    }
    iVar10 = *(int *)(puVar4 + 8);
    if (iVar9 == 0) {
      iVar2 = 8;
      local_d0 = 0;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(iVar9);
      local_d0 = uVar8;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,iVar9);
      }
    }
    local_c8 = 0;
    local_cc = iVar2;
    if (uVar8 != 0) {
      iVar11 = 0;
      do {
        uVar8 = local_c8;
        local_b0 = iVar10 + iVar11;
        FUN_00ecd740(&local_40,&local_b0);
        if ((char)local_40 == '\x06') {
          *param_1 = 6;
          *(undefined4 *)(param_1 + 4) = local_3c;
          FUN_00f2036c(iVar2,uVar8);
          if (local_d0 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(local_cc);
          return;
        }
        if (uVar8 == local_d0) {
          FUN_0157eb1c(&local_d0);
          iVar2 = local_cc;
        }
        puVar3 = (undefined4 *)(iVar2 + iVar11);
        iVar11 = iVar11 + 0x18;
        local_c8 = uVar8 + 1;
        *puVar3 = local_40;
        puVar3[1] = local_3c;
        puVar3[2] = uStack_38;
        puVar3[3] = uStack_34;
        puVar3[4] = uStack_30;
        puVar3[5] = uStack_2c;
      } while (iVar9 != iVar11);
    }
    local_a8._3_1_ = (undefined1)local_c8;
    local_ac._3_1_ = (undefined1)local_cc;
    local_a8._0_3_ = (undefined3)((uint)local_cc >> 8);
    local_b0._3_1_ = (undefined1)local_d0;
    local_ac._0_3_ = (undefined3)(local_d0 >> 8);
    *(uint *)(param_1 + 0xc) = local_c8;
    *param_1 = 4;
    *(uint *)(param_1 + 1) = local_b0;
    *(undefined4 *)(param_1 + 5) = local_ac;
    *(uint *)(param_1 + 9) = local_a8;
    return;
  case 5:
    local_a8 = *(uint *)(puVar4 + 4);
    local_a4 = *(undefined4 *)(puVar4 + 8);
    local_90 = *(undefined4 *)(puVar4 + 0xc);
    if (local_a8 == 0) {
      local_90 = 0;
    }
    local_b0 = (uint)(local_a8 != 0);
    local_c0 = -0x80000000;
    local_c4 = 0;
    local_cc = 0;
    local_d0 = 0;
    local_9c = 0;
    local_ac = 0;
    local_a0 = local_b0;
    local_98 = local_a8;
    local_94 = local_a4;
    do {
      uVar12 = FUN_00f45584(&local_b0);
      iVar9 = (int)uVar12;
      if (iVar9 == 0) {
        local_b0 = local_d0;
        local_ac = local_cc;
        local_a8 = local_c8;
        local_a4 = local_c4;
        local_a0 = local_c0;
        local_9c = local_bc;
        local_98 = local_b8;
        local_94 = uStack_b4;
        FUN_0157cde0(param_1,&local_b0);
        return;
      }
      if (local_d0 != 0) {
        puVar6 = &DAT_01887438;
LAB_00ecdc24:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,puVar6);
      }
      iVar10 = *(int *)(iVar9 + 8);
      uVar5 = 0;
      if (iVar10 < 0) {
LAB_00ecdc40:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar5,local_d8);
      }
      uVar5 = *(undefined4 *)(iVar9 + 4);
      if (iVar10 == 0) {
        iVar9 = 0;
        local_d8 = 1;
      }
      else {
        local_d8 = thunk_FUN_016d4a50(iVar10);
        if (local_d8 == 0) {
          uVar5 = 1;
          local_d8 = iVar10;
          goto LAB_00ecdc40;
        }
        iVar9 = iVar10;
      }
      FUN_016dd1aa(local_d8,uVar5,iVar10);
      if (local_c0 != -0x80000000 && local_c0 != 0) {
        thunk_FUN_016d3fb4(local_bc);
      }
      local_bc = local_d8;
      local_b8 = iVar10;
      if (local_d0 == 1) {
        puVar6 = &DAT_01887458;
        local_c0 = iVar9;
        goto LAB_00ecdc24;
      }
      local_c0 = -0x80000000;
      local_6c = iVar9;
      local_68 = local_d8;
      iStack_64 = iVar10;
      local_44 = (int)((ulonglong)uVar12 >> 0x20);
      FUN_00ecd740(local_60,&local_44);
      if (local_60[0] == '\x06') {
        if (iVar9 != 0) {
          thunk_FUN_016d3fb4(local_d8);
        }
        *param_1 = 6;
        *(undefined4 *)(param_1 + 4) = local_5c;
        if (local_d0 == 0) {
          FUN_00ea8964((uint)&local_d0 | 4);
          if (local_c0 == -0x80000000 || local_c0 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(local_bc);
          return;
        }
        if ((char)local_c8 == '\x06') {
          return;
        }
        FUN_005c37bc(&local_c8);
        return;
      }
      FUN_00e9dc08(local_88,(uint)&local_d0 | 4,&local_6c,local_60);
      if (local_88[0] != '\x06') {
        FUN_005c37bc(local_88);
      }
    } while( true );
  }
  *param_1 = uVar1;
  return;
}

