// FUN_016bf3b8 @ 016bf3b8 size=1072 calls_out=5 calls_in=1
// strings: 

int FUN_016bf3b8(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  bool bVar26;
  uint local_128;
  uint local_11c;
  int *local_114;
  int *local_110;
  int local_10c;
  int local_108;
  int *local_104;
  uint local_e8;
  uint local_e4;
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
  int *local_28;
  
  local_dc = (int *)&SUB_00000004;
  local_d8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  if (param_3 == 0) {
    uVar18 = 0;
    local_110 = (int *)&SUB_00000004;
    bVar3 = true;
    local_114 = (int *)0x0;
    local_104 = (int *)&SUB_00000004;
    local_e4 = 0;
  }
  else {
    param_3 = param_3 << 2;
    piVar21 = (int *)&SUB_00000004;
    do {
      iVar12 = local_d8;
      iVar14 = *(int *)(param_2 + local_d8 * 4);
      puVar8 = (undefined4 *)FUN_016ecaf4();
      puVar9 = *(undefined4 **)(iVar14 + 0x18);
      uVar1 = *(undefined2 *)(puVar9 + 0xc);
      *(undefined1 *)((int)puVar8 + 0x32) = *(undefined1 *)((int)puVar9 + 0x32);
      uVar11 = puVar9[7];
      uVar15 = puVar9[10];
      uVar10 = puVar9[0xb];
      uVar23 = puVar9[8];
      uVar25 = puVar9[9];
      *(undefined2 *)(puVar8 + 0xc) = uVar1;
      puVar8[7] = uVar11;
      puVar8[8] = uVar23;
      puVar8[9] = uVar25;
      uVar25 = puVar9[5];
      puVar8[0xb] = uVar10;
      uVar11 = puVar9[4];
      puVar8[10] = uVar15;
      uVar24 = *puVar9;
      uVar23 = puVar9[1];
      uVar10 = puVar9[2];
      uVar15 = puVar9[3];
      puVar8[6] = puVar9[6];
      puVar8[5] = uVar25;
      puVar8[4] = uVar11;
      puVar8[3] = uVar15;
      puVar8[2] = uVar10;
      puVar8[1] = uVar23;
      *puVar8 = uVar24;
      if (iVar12 == local_e0) {
        FUN_01a54b48(&local_e0);
        piVar21 = local_dc;
      }
      piVar21[iVar12] = (int)puVar8;
      local_d8 = iVar12 + 1;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
    local_114 = local_dc;
    local_110 = local_dc + local_d8;
    local_104 = local_dc + 1;
    uVar18 = 0xffffffff;
    local_e4 = *(uint *)(*local_dc + 0x10);
    local_10c = *(int *)(*local_dc + 0x14);
    bVar3 = false;
  }
  bVar13 = 1;
  bVar7 = 1;
  uVar22 = 0;
  uVar20 = 0;
  uVar17 = 0;
  bVar26 = true;
  iVar12 = 0;
  local_108 = 0;
  bVar4 = false;
  uVar19 = uVar18;
  do {
    bVar6 = false;
    do {
      iVar14 = iVar12;
      bVar5 = bVar6;
      if (bVar26) {
        piVar21 = local_114;
        if (bVar3) {
LAB_016bf6e4:
          piVar21 = (int *)thunk_FUN_01be5118(0x34);
          if (piVar21 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x34);
          }
          *(byte *)(piVar21 + 0xc) = bVar7 & 1;
          *(byte *)((int)piVar21 + 0x32) = bVar13 & 1;
          *(undefined1 *)((int)piVar21 + 0x31) = 0;
          piVar21[8] = uVar19;
          piVar21[9] = uVar20;
          piVar21[10] = uVar22;
          piVar21[0xb] = local_e8;
          *piVar21 = local_108;
          piVar21[1] = local_11c;
          piVar21[2] = iVar14;
          piVar21[3] = local_128;
          piVar21[4] = local_e4;
          piVar21[5] = local_10c;
          piVar21[6] = uVar17;
          piVar21[7] = uVar18;
          FUN_01bed4e2(auStack_d0,param_1,0x44);
          local_8c = local_e0;
          piStack_88 = local_dc;
          iStack_84 = local_d8;
          local_7c = 1;
          local_80 = 1;
          FUN_01bed4e2(auStack_78,auStack_d0,0x50);
          local_28 = piVar21;
          iVar12 = thunk_FUN_01be5118(0x5c);
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x5c);
          }
          FUN_01bed4e2(iVar12,&local_80,0x5c);
          return iVar12;
        }
      }
      else {
        if (local_104 == local_110) goto LAB_016bf6e4;
        piVar21 = local_104;
        local_104 = local_104 + 1;
      }
      piVar21 = (int *)*piVar21;
      bVar2 = bVar7 & 1;
      bVar7 = 0;
      if (bVar2 != 0) {
        bVar7 = *(byte *)(piVar21 + 0xc);
      }
      bVar26 = CARRY4(local_e8,piVar21[0xb]);
      local_e8 = local_e8 + piVar21[0xb];
      if (bVar26) {
        local_e8 = 0xffffffff;
      }
      if ((piVar21[4] & local_e4) == 0) {
        if (piVar21[4] != 0 || local_e4 != 0) {
          local_e4 = 0;
        }
      }
      else if (local_10c != piVar21[5]) {
        local_e4 = 0;
      }
      bVar2 = bVar13 & 1;
      bVar13 = 0;
      if (bVar2 != 0) {
        bVar13 = *(byte *)((int)piVar21 + 0x31);
      }
      if (bVar4) {
LAB_016bf670:
        bVar4 = true;
      }
      else {
        if (*piVar21 == 0) {
          local_108 = 0;
          goto LAB_016bf670;
        }
        uVar16 = piVar21[1];
        if (uVar16 < local_11c) {
          local_11c = uVar16;
        }
        if (local_108 == 0) {
          local_11c = uVar16;
        }
        bVar4 = false;
        local_108 = 1;
      }
      uVar20 = piVar21[9] | uVar20;
      uVar22 = piVar21[10] | uVar22;
      uVar19 = piVar21[8] & uVar19;
      uVar17 = piVar21[6] | uVar17;
      uVar18 = piVar21[7] & uVar18;
      bVar26 = false;
      bVar6 = true;
      iVar12 = iVar14;
    } while ((bVar5) || (iVar12 = 0, piVar21[2] != 1));
    uVar16 = piVar21[3];
    iVar12 = 1;
    if (local_128 < uVar16) {
      local_128 = uVar16;
    }
    if (iVar14 == 0) {
      local_128 = uVar16;
    }
    bVar26 = false;
  } while( true );
}

