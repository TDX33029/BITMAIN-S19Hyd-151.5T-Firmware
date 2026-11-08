// FUN_0117ce98 @ 0117ce98 size=1264 calls_out=12 calls_in=0
// strings: 

void FUN_0117ce98(uint *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint unaff_r7;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int local_cc;
  uint local_c8;
  uint local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8 [4];
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar12 = *(uint *)(param_3 + 0xc);
  uVar10 = uVar12 * 0xc;
  if (0xaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar8 = 0;
  if (uVar10 == 0) {
    local_cc = 4;
    local_c0 = 0;
  }
  else {
    local_cc = thunk_FUN_016d4a50(uVar10);
    local_c0 = uVar12;
    unaff_r7 = uVar10;
    if (local_cc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar10);
    }
  }
  local_b8 = 0;
  local_bc = local_cc;
  if ((0x3ffffff < uVar12) || (unaff_r7 = uVar12 * 0x40, 0x7ffffffc < unaff_r7)) {
LAB_0117cf8c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar8,unaff_r7);
  }
  if (unaff_r7 == 0) {
    local_c8 = 4;
    local_b4 = 0;
  }
  else {
    local_c8 = thunk_FUN_016d4a50(unaff_r7);
    if (local_c8 == 0) {
      uVar8 = 4;
      goto LAB_0117cf8c;
    }
    local_b4 = uVar12;
  }
  local_a8[2] = *(uint *)(param_3 + 4);
  local_ac = 0;
  if (local_a8[2] == 0) {
    uVar12 = 0;
  }
  iVar7 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 4);
  local_a8[3] = *(uint *)(param_3 + 8);
  uVar13 = 0;
  local_a8[0] = (uint)(local_a8[2] != 0);
  local_94 = 0;
  local_a8[1] = 0;
  uVar10 = 0;
  local_b0 = local_c8;
  local_98 = local_a8[0];
  local_90 = local_a8[2];
  local_8c = local_a8[3];
  local_88 = uVar12;
LAB_0117d03c:
  uVar17 = FUN_00f45584(local_a8);
  uVar8 = (undefined4)((ulonglong)uVar17 >> 0x20);
  iVar16 = (int)uVar17;
  if (iVar16 != 0) {
    uVar9 = *(undefined4 *)(iVar16 + 4);
    iVar11 = *(int *)(iVar16 + 8);
    local_40 = 0x80000000;
    local_3c = uVar9;
    local_38 = iVar11;
    local_34 = param_4;
    if (iVar7 != 0) {
      iVar14 = iVar7 << 5;
      iVar15 = iVar3;
      do {
        if ((*(int *)(iVar15 + 8) == iVar11) &&
           (iVar4 = thunk_FUN_016dd50a(*(undefined4 *)(iVar15 + 4),uVar9,iVar11), iVar4 == 0)) {
          FUN_011c9534(&local_80,iVar15 + 0xc,uVar8,&local_40,param_5,param_6);
          if (uVar13 == local_b4) {
            FUN_011ca644(&local_b4);
            local_c8 = local_b0;
          }
          puVar5 = (undefined4 *)(local_c8 + uVar13 * 0x40);
          *puVar5 = local_80;
          puVar5[1] = local_7c;
          puVar5[2] = local_78;
          puVar5[3] = uStack_74;
          puVar5[4] = local_70;
          puVar5[5] = local_6c;
          puVar5[6] = uStack_68;
          puVar5[7] = uStack_64;
          puVar5[8] = uStack_60;
          puVar5[9] = uStack_5c;
          puVar5[10] = local_58;
          puVar5[0xb] = uStack_54;
          puVar5[0xc] = uStack_50;
          puVar5[0xd] = uStack_4c;
          puVar5[0xe] = uStack_48;
          puVar5[0xf] = uStack_44;
          uVar13 = uVar13 + 1;
          local_ac = uVar13;
          goto LAB_0117d03c;
        }
        iVar15 = iVar15 + 0x20;
        iVar14 = iVar14 + -0x20;
      } while (iVar14 != 0);
    }
    FUN_011c9534(&local_80,param_2 + 0xc,uVar8,&local_40,param_5,param_6);
    if (uVar13 == local_b4) {
      FUN_011ca644(&local_b4);
      local_c8 = local_b0;
    }
    puVar5 = (undefined4 *)(local_c8 + uVar13 * 0x40);
    *puVar5 = local_80;
    puVar5[1] = local_7c;
    puVar5[2] = local_78;
    puVar5[3] = uStack_74;
    puVar5[4] = local_70;
    puVar5[5] = local_6c;
    puVar5[6] = uStack_68;
    puVar5[7] = uStack_64;
    puVar5[8] = uStack_60;
    puVar5[9] = uStack_5c;
    puVar5[10] = local_58;
    puVar5[0xb] = uStack_54;
    puVar5[0xc] = uStack_50;
    puVar5[0xd] = uStack_4c;
    puVar5[0xe] = uStack_48;
    puVar5[0xf] = uStack_44;
    uVar13 = uVar13 + 1;
    uVar8 = *(undefined4 *)(iVar16 + 4);
    iVar16 = *(int *)(iVar16 + 8);
    local_ac = uVar13;
    if (iVar16 == 0) {
      iVar11 = 1;
    }
    else {
      iVar11 = thunk_FUN_016d4a50(iVar16);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar16);
      }
    }
    FUN_016dd1aa(iVar11,uVar8,iVar16);
    if (uVar10 == local_c0) {
      FUN_015f37b0(&local_c0);
      local_cc = local_bc;
    }
    local_b8 = uVar10 + 1;
    piVar6 = (int *)(local_cc + uVar10 * 0xc);
    *piVar6 = iVar16;
    piVar6[1] = iVar11;
    piVar6[2] = iVar16;
    uVar10 = local_b8;
    goto LAB_0117d03c;
  }
  uVar12 = local_b0;
  iVar3 = local_ac << 6;
  do {
    iVar7 = iVar3;
    if (iVar7 == 0) {
      local_98 = 0;
      local_a8[0] = 0x80000000;
      local_a8[1] = local_b4;
      local_a8[2] = local_b0;
      local_a8[3] = local_ac;
      goto joined_r0x0117d2b4;
    }
    pcVar1 = (char *)(uVar12 + 0x3c);
    uVar12 = uVar12 + 0x40;
    iVar3 = iVar7 + -0x40;
  } while (*pcVar1 != '\0');
  local_90 = 0;
  local_a8[2] = 0;
  local_a8[1] = 4;
  local_a8[0] = 0;
  local_a8[3] = local_b4;
  local_98 = local_b0;
  local_94 = local_ac;
joined_r0x0117d2b4:
  if (uVar10 == 0) {
    *param_1 = local_a8[0];
    param_1[1] = local_a8[1];
    param_1[2] = local_a8[2];
    param_1[3] = local_a8[3];
    param_1[4] = local_98;
    param_1[5] = local_94;
    param_1[6] = local_90;
    if (local_c0 != 0) {
      thunk_FUN_016d3fb4(local_bc);
      return;
    }
  }
  else {
    FUN_011f1dd4(&local_40,&local_c0);
    local_7c = 1;
    local_80 = 1;
    local_78 = local_40;
    uStack_74 = local_3c;
    local_70 = local_38;
    local_6c = local_34;
    uStack_68 = uStack_30;
    uStack_64 = uStack_2c;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x20);
    }
    *puVar5 = local_80;
    puVar5[1] = local_7c;
    puVar5[2] = local_78;
    puVar5[3] = uStack_74;
    puVar5[4] = local_70;
    puVar5[5] = local_6c;
    puVar5[6] = uStack_68;
    puVar5[7] = uStack_64;
    iVar3 = 0x18;
    if (iVar7 == 0) {
      iVar3 = 0x10;
    }
    piVar6 = *(int **)((int)local_a8 + iVar3);
    if (piVar6 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01353488(*(undefined4 *)((int)local_a8 + iVar3));
      }
    }
    *(undefined4 **)((int)local_a8 + iVar3) = puVar5;
    *param_1 = local_a8[0];
    param_1[1] = local_a8[1];
    param_1[2] = local_a8[2];
    param_1[3] = local_a8[3];
    param_1[4] = local_98;
    param_1[5] = local_94;
    param_1[6] = local_90;
  }
  return;
}

