// FUN_00efd068 @ 00efd068 size=1600 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00efd068(undefined4 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 local_110;
  undefined4 local_10c;
  uint *local_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  byte local_c0 [4];
  undefined4 *local_bc;
  uint local_b8;
  uint *local_b4;
  uint local_b0;
  int local_ac;
  uint local_a4;
  uint *local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  undefined4 local_90;
  uint local_88;
  int local_84;
  undefined4 local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  uint local_68;
  int local_64;
  undefined4 local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint *local_48;
  code *local_44;
  uint *local_40;
  undefined1 *local_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  FUN_00f128c4(local_c0);
  if (local_c0[0] == 2) {
    *param_1 = 2;
    param_1[1] = local_bc;
    return;
  }
  if ((local_c0[0] & 1) != 0) {
    FUN_00efd95c(&local_48,local_bc);
    if (local_48 == (uint *)&DAT_80000000) {
      param_1[1] = local_44;
      uVar14 = 2;
    }
    else {
      param_1[1] = local_48;
      param_1[2] = local_44;
      param_1[3] = local_40;
      uVar14 = 1;
    }
    *param_1 = uVar14;
    return;
  }
  FUN_00efbe38(&local_b8,local_bc);
  uVar2 = local_b0;
  if (local_b8 == 1) {
    puVar15 = local_b4;
  }
  else {
    local_64 = local_ac;
    local_68 = local_b0;
    if (local_ac == 0) {
      uVar19 = 0x2762;
      if (local_b0 < 0x2762) {
        uVar19 = local_b0;
      }
      if (local_b0 == 0) {
        local_e0 = (uint *)&DAT_00000008;
        uVar19 = 0;
      }
      else {
        local_e0 = (uint *)thunk_FUN_016d4a50(uVar19 * 0x68);
        if (local_e0 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,uVar19 * 0x68);
        }
      }
      puVar16 = (undefined4 *)((uint)&local_48 | 4);
      local_9c = 0;
      iVar20 = 0x60;
      local_a4 = uVar19;
      local_a0 = local_e0;
      while (uVar19 = local_9c, uVar2 != local_9c) {
        FUN_00e66bc0(&local_48,local_bc);
        puVar11 = local_40;
        pcVar7 = local_44;
        puVar3 = local_48;
        if (local_48 == (uint *)&DAT_00000007 && local_44 == (code *)0x0) {
          puVar15 = local_40;
LAB_00efd674:
          if (local_a4 != 0) {
            thunk_FUN_016d3fb4(local_e0);
          }
          goto LAB_00efd688;
        }
        local_58 = (uint)local_3c;
        uStack_54 = iStack_38;
        uStack_50 = uStack_34;
        FUN_00efc920(&local_48,local_bc);
        puVar15 = local_40;
        pcVar8 = local_44;
        puVar4 = local_48;
        if (local_48 == (uint *)&DAT_00000005 && local_44 == (code *)0x0) goto LAB_00efd674;
        local_b8 = (uint)local_3c;
        local_b4 = (uint *)iStack_38;
        local_b0 = uStack_34;
        FUN_00e94900(&local_48,local_bc);
        puVar12 = local_40;
        pcVar9 = local_44;
        puVar5 = local_48;
        if (local_40 == (uint *)&DAT_3b9aca00) {
LAB_00efd4f0:
          puVar15 = local_48;
          goto LAB_00efd674;
        }
        if ((uint)local_bc[1] < 8) {
          *puVar16 = 0x2501;
          puVar16[1] = 8;
          local_48 = (uint *)&DAT_80000000;
          puVar15 = (uint *)thunk_FUN_016d4a50(0xc);
          if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
          goto LAB_00efd65c;
        }
        uVar1 = *(undefined8 *)*local_bc;
        local_bc[1] = local_bc[1] - 8;
        *local_bc = (undefined8 *)*local_bc + 1;
        FUN_00f1457c(&local_48,local_bc);
        puVar13 = local_40;
        pcVar10 = local_44;
        puVar6 = local_48;
        if (local_40 == (uint *)&DAT_3b9aca00) goto LAB_00efd4f0;
        uVar17 = local_bc[1];
        if (uVar17 == 0) {
          *puVar16 = 0x2501;
          puVar16[1] = 1;
          local_48 = (uint *)&DAT_80000000;
          puVar15 = (uint *)thunk_FUN_016d4a50(0xc);
          if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
LAB_00efd65c:
          *puVar15 = (uint)local_48;
          puVar15[1] = (uint)local_44;
          puVar15[2] = (uint)local_40;
          goto LAB_00efd674;
        }
        pbVar18 = (byte *)*local_bc;
        uVar21 = (uint)*pbVar18;
        *local_bc = pbVar18 + 1;
        local_bc[1] = uVar17 - 1;
        uVar14 = 0;
        if (uVar21 != 0) {
          if (uVar21 == 1) {
            if (uVar17 < 5) {
              *puVar16 = 0x2501;
              puVar16[1] = 4;
              local_48 = (uint *)&DAT_80000000;
              puVar15 = (uint *)thunk_FUN_016d4a50(0xc);
              if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0xc);
              }
            }
            else {
              local_bc[1] = uVar17 - 5;
              local_10c = *(undefined4 *)(pbVar18 + 1);
              *local_bc = pbVar18 + 5;
              if (3 < uVar17 - 5) {
                uVar14 = 1;
                *local_bc = pbVar18 + 9;
                local_bc[1] = uVar17 - 9;
                local_110 = *(undefined4 *)(pbVar18 + 5);
                goto LAB_00efd46c;
              }
              *puVar16 = 0x2501;
              puVar16[1] = 4;
              local_48 = (uint *)&DAT_80000000;
              puVar15 = (uint *)thunk_FUN_016d4a50(0xc);
              if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0xc);
              }
            }
          }
          else {
            local_48 = (uint *)&DAT_80000004;
            local_44 = (code *)uVar21;
            puVar15 = (uint *)thunk_FUN_016d4a50(0xc);
            if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
          }
          goto LAB_00efd65c;
        }
LAB_00efd46c:
        local_68 = local_b8;
        local_88 = local_b8;
        local_78 = local_58;
        iStack_74 = uStack_54;
        local_70 = uStack_50;
        local_98 = local_58;
        local_94 = uStack_54;
        local_90 = uStack_50;
        local_64 = (int)local_b4;
        local_60 = local_b0;
        local_84 = (int)local_b4;
        local_80 = local_b0;
        if (((uint)puVar4 & 7) == 5) break;
        if (puVar4 == (uint *)&DAT_00000006) {
          goto LAB_00efd674;
        }
        if (uVar19 == local_a4) {
          FUN_00d64c9c(&local_a4);
          local_e0 = local_a0;
        }
        *(uint **)((int)local_e0 + iVar20 + -0x58) = puVar15;
        *(uint **)((int)local_e0 + iVar20 + -0x60) = puVar4;
        *(code **)((int)local_e0 + iVar20 + -0x5c) = pcVar8;
        *(code **)((int)local_e0 + iVar20 + -0x44) = pcVar7;
        *(uint *)((int)local_e0 + iVar20 + -0x54) = local_88;
        *(uint **)((int)local_e0 + iVar20 + -0x48) = puVar3;
        *(uint **)((int)local_e0 + iVar20 + -0x40) = puVar11;
        *(int *)((int)local_e0 + iVar20 + -0x50) = local_84;
        *(undefined4 *)((int)local_e0 + iVar20 + -0x4c) = local_80;
        *(uint **)((int)local_e0 + iVar20 + -0x20) = puVar6;
        *(undefined4 *)((int)local_e0 + iVar20) = local_110;
        *(code **)((int)local_e0 + iVar20 + -0x1c) = pcVar10;
        *(code **)((int)local_e0 + iVar20 + -0x2c) = pcVar9;
        local_d0 = (undefined4)uVar1;
        uStack_cc = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(uint **)((int)local_e0 + iVar20 + -0x30) = puVar5;
        *(uint **)((int)local_e0 + iVar20 + -0x28) = puVar12;
        *(undefined4 *)((int)local_e0 + iVar20 + -4) = local_10c;
        *(uint *)((int)local_e0 + iVar20 + -0x3c) = local_98;
        *(int *)((int)local_e0 + iVar20 + -0x38) = local_94;
        local_9c = uVar19 + 1;
        *(undefined4 *)((int)local_e0 + iVar20 + -0x34) = local_90;
        *(uint **)((int)local_e0 + iVar20 + -0x18) = puVar13;
        *(undefined4 *)((int)local_e0 + iVar20 + -0x10) = local_d0;
        *(undefined4 *)((int)local_e0 + iVar20 + -0xc) = uStack_cc;
        *(undefined4 *)((int)local_e0 + iVar20 + -8) = uVar14;
        iVar20 = iVar20 + 0x68;
      }
      if (local_a4 != 0x80000000) {
        param_1[1] = local_a4;
        param_1[2] = local_e0;
        *param_1 = 0;
        param_1[3] = uVar19;
        return;
      }
      puVar15 = local_e0;
    }
    else {
      local_40 = &DAT_005674cc;
      local_48 = &local_68;
      local_44 = FUN_00fac4cc;
      local_3c = &LAB_00fac484;
      FUN_00600d2c(&local_58,&DAT_0056c1eb,&local_48);
      puVar15 = (uint *)thunk_FUN_016d4a50(0xc);
      if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar15 = local_58;
      puVar15[1] = uStack_54;
      puVar15[2] = uStack_50;
    }
  }
LAB_00efd688:
  *param_1 = 2;
  param_1[1] = puVar15;
  return;
}

