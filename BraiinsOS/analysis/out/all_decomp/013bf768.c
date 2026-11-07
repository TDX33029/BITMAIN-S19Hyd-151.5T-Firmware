// FUN_013bf768 @ 013bf768 size=1232 calls_out=4 calls_in=1
// strings: 

int FUN_013bf768(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  bool bVar28;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_f0;
  uint local_ec;
  int local_e0;
  int *local_dc;
  int local_d8;
  undefined1 auStack_d0 [68];
  int local_8c;
  int *piStack_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [80];
  uint *local_28;
  
  uVar19 = 0;
  piVar22 = (int *)&DAT_00000004;
  local_d8 = 0;
  local_dc = (int *)&DAT_00000004;
  local_e0 = 0;
  if (param_3 == 0) {
    uVar21 = 0;
    bVar6 = 1;
    uVar23 = 0;
    uVar26 = 0;
    bVar12 = 1;
    local_108 = 0;
    uVar15 = 0;
    uVar18 = 0;
    local_110 = 0;
    local_114 = 0;
  }
  else {
    iVar5 = 0;
    iVar25 = -1;
    do {
      iVar16 = iVar5;
      puVar20 = *(undefined4 **)(*(int *)(param_2 + iVar16) + 0x18);
      puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x34);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x34);
      }
      uVar1 = *(undefined2 *)(puVar20 + 0xc);
      iVar24 = iVar25 + 1;
      uVar7 = puVar20[8];
      uVar9 = puVar20[9];
      uVar13 = puVar20[10];
      uVar17 = puVar20[0xb];
      *(undefined1 *)((int)puVar4 + 0x32) = *(undefined1 *)((int)puVar20 + 0x32);
      uVar14 = puVar20[7];
      *(undefined2 *)(puVar4 + 0xc) = uVar1;
      puVar4[8] = uVar7;
      puVar4[9] = uVar9;
      puVar4[10] = uVar13;
      puVar4[7] = uVar14;
      uVar7 = *puVar20;
      uVar9 = puVar20[1];
      uVar13 = puVar20[2];
      uVar14 = puVar20[3];
      puVar4[6] = puVar20[6];
      puVar4[0xb] = uVar17;
      uVar27 = puVar20[5];
      uVar17 = puVar20[4];
      *puVar4 = uVar7;
      puVar4[1] = uVar9;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      puVar4[4] = uVar17;
      puVar4[5] = uVar27;
      if (iVar24 == local_e0) {
        FUN_013c1038(&local_e0);
        piVar22 = local_dc;
      }
      local_d8 = iVar25 + 2;
      *(undefined4 **)((int)piVar22 + iVar16) = puVar4;
      iVar5 = iVar16 + 4;
      iVar25 = iVar24;
    } while (param_3 << 2 != iVar16 + 4);
    puVar8 = (uint *)*local_dc;
    local_11c = puVar8[1];
    local_118 = puVar8[3];
    uVar10 = puVar8[4];
    local_114 = *puVar8;
    local_110 = puVar8[2];
    uVar18 = puVar8[6];
    uVar15 = puVar8[7];
    uVar26 = puVar8[8];
    uVar23 = puVar8[9];
    uVar21 = puVar8[10];
    uVar19 = puVar8[0xb];
    bVar12 = (byte)puVar8[0xc];
    local_120 = puVar8[5];
    bVar6 = *(byte *)((int)puVar8 + 0x31);
    local_108 = uVar10;
    if (iVar24 != 0) {
      local_ec = local_114 ^ 1;
      local_f0 = local_110 ^ 1;
      piVar22 = local_dc;
      local_104 = local_110;
      local_100 = local_114;
      do {
        piVar22 = piVar22 + 1;
        piVar11 = (int *)*piVar22;
        bVar2 = bVar12 & 1;
        bVar12 = 0;
        if (bVar2 != 0) {
          bVar12 = *(byte *)(piVar11 + 0xc);
        }
        bVar28 = CARRY4(uVar19,piVar11[0xb]);
        uVar19 = uVar19 + piVar11[0xb];
        if (bVar28) {
          uVar19 = 0xffffffff;
        }
        if ((uVar10 & 1) == 0) {
          uVar10 = 0;
          if (piVar11[4] != 0) goto LAB_013bf990;
        }
        else if ((piVar11[4] == 0) || (uVar10 = 1, local_120 != piVar11[5])) {
LAB_013bf990:
          uVar10 = 0;
          local_108 = 0;
        }
        bVar2 = bVar6 & 1;
        bVar6 = 0;
        if (bVar2 != 0) {
          bVar6 = *(byte *)((int)piVar11 + 0x31);
        }
        if ((local_ec & 1) == 0) {
          if (*piVar11 == 0) {
            local_114 = 0;
            local_100 = 0;
            goto joined_r0x013bfa34;
          }
          local_ec = 0;
          if ((local_100 & local_11c <= (uint)piVar11[1]) == 0) {
            local_114 = 1;
            local_11c = piVar11[1];
          }
          local_100 = 1;
          if ((local_f0 & 1) != 0) goto LAB_013bf8e0;
LAB_013bfa5c:
          if (piVar11[2] == 1) {
            local_f0 = 0;
            uVar3 = local_104 & (uint)piVar11[3] <= local_118;
            local_104 = 1;
            if (uVar3 == 0) {
              local_110 = 1;
              local_118 = piVar11[3];
            }
          }
          else {
            local_110 = 0;
            local_f0 = 1;
            local_104 = 0;
          }
        }
        else {
joined_r0x013bfa34:
          local_ec = 1;
          if ((local_f0 & 1) == 0) goto LAB_013bfa5c;
LAB_013bf8e0:
          local_f0 = 1;
        }
        uVar21 = piVar11[10] | uVar21;
        uVar23 = piVar11[9] | uVar23;
        uVar26 = piVar11[8] & uVar26;
        iVar16 = iVar16 + -4;
        uVar15 = piVar11[7] & uVar15;
        uVar18 = piVar11[6] | uVar18;
      } while (iVar16 != 0);
      bVar12 = bVar12 & 1;
      bVar6 = bVar6 & 1;
    }
  }
  puVar8 = (uint *)thunk_FUN_016d4a50(0x34);
  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  *(byte *)((int)puVar8 + 0x32) = bVar6;
  *(undefined1 *)((int)puVar8 + 0x31) = 0;
  *(byte *)(puVar8 + 0xc) = bVar12;
  *puVar8 = local_114;
  puVar8[1] = local_11c;
  puVar8[2] = local_110;
  puVar8[3] = local_118;
  puVar8[4] = local_108;
  puVar8[6] = uVar18;
  puVar8[5] = local_120;
  local_8c = local_e0;
  piStack_88 = local_dc;
  iStack_84 = local_d8;
  puVar8[8] = uVar26;
  puVar8[9] = uVar23;
  puVar8[10] = uVar21;
  puVar8[0xb] = uVar19;
  puVar8[7] = uVar15;
  FUN_016dd1aa(auStack_d0,param_1,0x44);
  local_7c = 1;
  local_80 = 1;
  FUN_016dd1aa(auStack_78,auStack_d0,0x50);
  local_28 = puVar8;
  iVar5 = thunk_FUN_016d4a50(0x5c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x5c);
  }
  FUN_016dd1aa(iVar5,&local_80,0x5c);
  return iVar5;
}

