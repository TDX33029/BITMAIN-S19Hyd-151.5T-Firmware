// FUN_00eada7c @ 00eada7c size=1536 calls_out=8 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eada7c(uint *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint unaff_r5;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint unaff_r9;
  undefined1 unaff_r10;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  undefined4 *extraout_r12_01;
  uint uVar14;
  undefined4 *local_200;
  uint local_1fc;
  undefined4 *local_1f8;
  undefined2 local_1f4;
  undefined1 local_1f2;
  uint local_1f0;
  uint local_1ec;
  undefined2 local_1e4;
  undefined1 local_1e2;
  uint local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 *local_1d4;
  undefined4 local_1d0;
  undefined4 *local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint uStack_1bc;
  undefined4 *local_1b8;
  uint local_1b4;
  undefined1 local_1b0;
  undefined2 local_1af;
  undefined1 local_1ad;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 local_140;
  uint local_138;
  uint local_134;
  uint auStack_130 [26];
  uint local_c8;
  uint local_c4;
  undefined *local_c0;
  undefined4 *local_bc;
  uint local_b8;
  undefined4 *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined2 local_2c;
  
  uVar3 = param_2[3] - param_2[1];
  if (uVar3 < 0xf8) {
    local_1fc = 0;
    if (param_2[3] == param_2[1]) {
      local_1c4 = 8;
      uVar6 = 0;
    }
    else {
      uVar6 = uVar3 >> 3;
      unaff_r5 = (uVar6 * 8 - (uVar3 >> 3)) * 0x10;
      local_1c4 = thunk_FUN_016d4a50(unaff_r5);
      if (local_1c4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,unaff_r5);
      }
    }
    local_b4 = (undefined4 *)param_2[3];
    local_bc = (undefined4 *)param_2[1];
    local_b8 = param_2[2];
    local_c0 = (undefined *)*param_2;
    uVar13 = local_b8;
    if (local_bc != local_b4) {
      puVar5 = (undefined1 *)(local_1c4 + 0x68);
      local_1fc = 0;
      do {
        uVar12 = *local_bc;
        uVar13 = local_bc[1];
        local_bc = local_bc + 2;
        *puVar5 = 0;
        local_1fc = local_1fc + 1;
        *(undefined4 *)(puVar5 + -0x60) = uVar12;
        *(uint *)(puVar5 + -0x5c) = uVar13;
        *(undefined4 *)(puVar5 + -0x68) = 0;
        puVar5 = puVar5 + 0x70;
      } while (local_bc != local_b4);
    }
    local_1c8 = uVar6;
    local_1c0 = local_1fc;
    FUN_00ee3d94(&local_c0);
    uVar3 = local_1c0;
    local_138 = local_1c8;
    local_134 = local_1c4;
    auStack_130[0] = local_1c0;
    if (local_1c0 < local_1c8) {
      if (local_1c0 == 0) {
        thunk_FUN_016d3fb4(local_1c4);
        uVar6 = 8;
        local_200 = extraout_r12_01;
      }
      else {
        local_1fc = local_1c0 * 0x70;
        uVar6 = thunk_FUN_016d4ea4(local_1c4,local_1fc);
        local_200 = extraout_r12_00;
        if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,local_1fc);
        }
      }
    }
    else {
      uVar6 = local_1c4;
      local_200 = extraout_r12;
    }
    uVar14 = 0x80000000;
  }
  else {
    local_bc = (undefined4 *)0x1;
    local_2c = 1;
    local_30 = (undefined4 *)0xffffffff;
    local_b4 = (undefined4 *)0x0;
    local_b8 = 0;
    local_40 = 0;
    local_c0 = (undefined *)0x1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    uVar3 = thunk_FUN_016d4a50(0x98);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x98);
    }
    FUN_016dd1aa(uVar3,&local_c0,0x98);
    local_a8 = uVar3 + 8;
    local_ac = 0;
    local_b4 = (undefined4 *)0x0;
    local_bc = (undefined4 *)0x1;
    local_c0 = (undefined *)0x1;
    local_b8 = uVar3;
    local_a4 = local_a8;
    local_200 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (local_200 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *local_200 = local_c0;
    local_200[1] = local_bc;
    local_200[2] = local_b8;
    local_200[3] = local_b4;
    local_200[4] = local_b0;
    local_200[5] = local_ac;
    local_200[6] = local_a8;
    local_200[7] = local_a4;
    puVar10 = (undefined4 *)param_2[3];
    local_1d0 = param_2[2];
    local_1dc = 0;
    local_1e0 = 0;
    local_1d8 = *param_2;
    local_1f8 = (undefined4 *)param_2[1];
    local_1d4 = local_1f8;
    local_1cc = puVar10;
    if (local_1f8 != puVar10) {
      local_1a8 = 8;
      unaff_r9 = 0;
      local_1a4 = 0;
      local_1ac = 0;
      uVar3 = 0;
      uVar13 = 0;
      do {
        local_1a0 = *local_1f8;
        local_19c = local_1f8[1];
        local_1b0 = 0;
        local_1c0 = local_1e0;
        uStack_1bc = local_1dc;
        local_140 = 0;
        local_1af = local_1e4;
        local_1ad = local_1e2;
        local_1c8 = uVar13;
        local_1c4 = uVar3;
        local_1b8 = local_200;
        local_1b4 = unaff_r9;
        FUN_016dd1aa(auStack_130,&local_1a0,0x68);
        local_1f8 = local_1f8 + 2;
        local_134 = 0;
        local_1c8 = uVar13 + 1;
        local_1c4 = uVar3 + (0xfffffffe < uVar13);
        iVar11 = local_200[2];
        piVar4 = local_200 + 1;
        local_138 = 1;
LAB_00eadcf8:
        iVar7 = *piVar4;
        do {
          if (iVar7 == -1) goto LAB_00eadcf4;
          local_c8 = uVar13;
          local_c4 = uVar3;
          if (iVar7 < 0) {
            local_bc = &DAT_0157d360;
            local_c0 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00590e71,&local_c0,&DAT_018ae278);
          }
          iVar8 = *piVar4;
          if (iVar8 == iVar7) {
            bVar1 = (bool)hasExclusiveAccess(piVar4);
            if (bVar1) {
              *piVar4 = iVar7 + 1;
            }
            bVar2 = false;
            if (bVar1) {
              DataMemoryBarrier(0xb);
              bVar2 = true;
            }
          }
          else {
            bVar2 = false;
            ClearExclusiveLocal();
          }
          iVar7 = iVar8;
        } while (!bVar2);
        FUN_016dd1aa(&local_b8,&local_138,0x78);
        local_34 = 0;
        local_2c = 1;
        local_40 = iVar11 + 8;
        local_38 = 0;
        local_3c = 0;
        local_bc = (undefined4 *)0x1;
        local_c0 = (undefined *)0x1;
        local_30 = local_200;
        iVar11 = thunk_FUN_016d4a50(0x98);
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x98);
        }
        FUN_016dd1aa(iVar11,&local_c0,0x98);
        unaff_r9 = iVar11 + 8;
        local_1b0 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(&local_1b4);
        } while (!bVar2);
        DataMemoryBarrier(0xb);
        if (local_1b4 == 0) {
          *(undefined4 *)(iVar11 + 0x88) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar11 + 0x80) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(local_1b4 + 0x78) == local_1b8[2] + 8);
          *(int *)(iVar11 + 0x88) = *(int *)(local_1b4 + 0x80) + 1;
          DataMemoryBarrier(0xb);
          *(uint *)(iVar11 + 0x80) = local_1b4;
          *(uint *)(local_1b4 + 0x7c) = unaff_r9;
        }
        *(undefined4 *)(iVar11 + 0x8c) = 0;
        puVar9 = local_1b8 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar3 = *puVar9;
          bVar2 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar2);
        *puVar9 = unaff_r9;
        DataMemoryBarrier(0xb);
        *(uint *)(uVar3 + 0x84) = unaff_r9;
        local_1e0 = local_1c0;
        local_1dc = uStack_1bc;
        local_1e4 = local_1af;
        local_1e2 = local_1ad;
        uVar3 = local_1c4;
        uVar13 = local_1c8;
        local_200 = local_1b8;
        if (local_1f8 == puVar10) {
          local_1fc = local_1a8;
          unaff_r5 = local_1ac;
          uVar13 = local_1a4;
          uVar6 = local_1c8;
          local_1d4 = local_1f8;
          local_1b4 = unaff_r9;
          goto LAB_00eadf98;
        }
      } while( true );
    }
    unaff_r9 = 0;
    local_1fc = 8;
    uVar6 = 0;
    uVar3 = 0;
    uVar13 = 0;
    unaff_r5 = 0;
LAB_00eadf98:
    unaff_r10 = 0;
    local_1f0 = local_1e0;
    local_1ec = local_1dc;
    local_1f4 = local_1e4;
    local_1f2 = local_1e2;
    FUN_00ee3d94(&local_1d8);
    uVar14 = 0;
  }
  param_1[1] = uVar3;
  param_1[2] = local_1f0;
  param_1[3] = local_1ec;
  param_1[4] = (uint)local_200;
  *(undefined1 *)((int)param_1 + 0x1b) = local_1f2;
  *(undefined1 *)(param_1 + 6) = unaff_r10;
  *param_1 = uVar6;
  param_1[5] = unaff_r9;
  *(undefined2 *)((int)param_1 + 0x19) = local_1f4;
  param_1[7] = unaff_r5;
  param_1[8] = local_1fc;
  param_1[9] = uVar13;
  param_1[10] = uVar14;
  param_1[0xb] = 4;
  param_1[0xc] = 0;
  return;
LAB_00eadcf4:
  HintYield();
  goto LAB_00eadcf8;
}

