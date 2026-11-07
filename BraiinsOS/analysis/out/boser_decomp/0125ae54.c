// FUN_0125ae54 @ 0125ae54 size=1196 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0125ae54(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 unaff_d11;
  undefined8 uVar29;
  undefined8 uVar30;
  int iVar31;
  int local_160;
  undefined1 local_15c;
  int local_158;
  int local_154;
  uint local_138;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  int local_e0;
  int local_dc;
  undefined1 auStack_d8 [24];
  int local_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined1 auStack_a8 [72];
  
  puVar3 = (undefined2 *)thunk_FUN_01be5118(3);
  if (puVar3 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,3);
  }
  local_dc = *param_2;
  local_e0 = param_2[1];
  iVar15 = param_2[0xc];
  iVar16 = param_2[0xd];
  *(undefined1 *)(puVar3 + 1) = 0x32;
  uVar26 = *(undefined8 *)(param_2 + 0xe);
  uVar27 = *(undefined8 *)(param_2 + 10);
  uVar28 = *(undefined8 *)(param_2 + 6);
  *puVar3 = 0x2e33;
  iVar25 = param_2[0x4c];
  iVar19 = param_2[0x4d];
  if (local_dc == 2 && local_e0 == 0) {
    local_e0 = 0;
    local_dc = 2;
  }
  else {
    local_e8 = param_2[4];
    local_ec = param_2[5];
    local_f0 = param_2[9];
    local_160 = param_2[8];
    unaff_d11 = *(undefined8 *)(param_2 + 2);
    local_15c = (undefined1)(0x4040100 >> ((*(byte *)(param_2 + 0x10) & 0x1f) << 3));
    local_158 = iVar15;
    local_154 = iVar16;
    if ((local_dc == 0 && local_e0 == 0) && ((0xcU >> (*(byte *)(param_2 + 0x10) & 0xf) & 1) != 0))
    {
      uVar4 = local_e8 | local_ec;
      uVar2 = uVar4;
      if (uVar4 == 0) {
        uVar2 = local_f0;
      }
      if (uVar4 == 0 && (local_160 == 0 && uVar2 == 0)) {
        local_dc = 0;
        local_160 = 0;
        if (iVar15 == 0 && iVar16 == 0) {
          local_dc = 2;
        }
        local_f0 = 0;
        local_e8 = 0;
        local_ec = 0;
        local_e0 = 0;
      }
    }
  }
  iVar5 = param_2[0x27];
  iVar6 = param_2[0x29];
  iVar7 = param_2[0x2a];
  iVar8 = param_2[0x2b];
  iVar20 = param_2[0x26];
  local_138 = param_2[0x28];
  local_b8 = param_2[0x2c];
  iStack_b4 = param_2[0x2d];
  iStack_b0 = param_2[0x2e];
  FUN_01bed4e2((uint)auStack_a8 | 7,param_2 + 0x12,0x40);
  iVar9 = param_2[0x39];
  iVar18 = param_2[0x3c];
  iVar21 = param_2[0x3d];
  iVar10 = param_2[0x40];
  iVar11 = param_2[0x41];
  iVar12 = param_2[0x42];
  iVar13 = param_2[0x43];
  iVar14 = param_2[0x44];
  iVar15 = param_2[0x46];
  uVar1 = *(undefined1 *)((int)param_2 + 0x119);
  iVar24 = param_2[0x38];
  uVar30 = *(undefined8 *)(param_2 + 0x3a);
  uVar29 = *(undefined8 *)(param_2 + 0x3e);
  iVar16 = param_2[0x4b];
  iVar31 = param_2[0x45];
  FUN_01bed4e2((uint)auStack_d8 | 5,param_2 + 0x48,0xc);
  if (iVar20 == 2) {
    iVar20 = 2;
  }
  else if (((local_138 & 1) != 0) && (iVar6 == 0)) {
    if (iVar20 == 0 && iVar7 == 0) {
      iVar20 = 2;
    }
    local_15c = 2;
    if (local_dc == 2 && local_e0 == 0) {
      local_138 = 0;
      local_158 = 0;
      local_154 = 0;
      local_160 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_ec = 0;
      local_dc = 0;
      local_e0 = 0;
    }
    else {
      local_138 = 0;
    }
  }
  iVar17 = param_2[0x23];
  iVar22 = param_2[0x24];
  iVar23 = param_2[0x25];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = iVar17;
  param_1[0x24] = iVar22;
  param_1[0x25] = iVar23;
  iVar17 = param_2[0x31];
  iVar22 = param_2[0x32];
  iVar23 = param_2[0x33];
  param_1[0x36] = param_2[0x30];
  param_1[0x37] = iVar17;
  param_1[0x38] = iVar22;
  param_1[0x39] = iVar23;
  iVar17 = param_2[0x35];
  iVar22 = param_2[0x36];
  iVar23 = param_2[0x37];
  param_1[0x3a] = param_2[0x34];
  param_1[0x3b] = iVar17;
  param_1[0x3c] = iVar22;
  param_1[0x3d] = iVar23;
  param_1[0x52] = iVar25;
  param_1[0x53] = iVar19;
  param_1[0x54] = 3;
  param_1[0x55] = (int)puVar3;
  param_1[0x56] = 3;
  iVar19 = param_2[0x52];
  iVar25 = param_2[0x53];
  param_1[0x57] = param_2[0x51];
  param_1[0x58] = iVar19;
  param_1[0x59] = iVar25;
  iVar19 = param_2[0x55];
  iVar25 = param_2[0x56];
  param_1[0x5a] = param_2[0x54];
  param_1[0x5b] = iVar19;
  param_1[0x5c] = iVar25;
  *param_1 = local_dc;
  param_1[1] = local_e0;
  param_1[0xc] = local_158;
  param_1[4] = local_e8;
  param_1[5] = local_ec;
  *(undefined8 *)(param_1 + 2) = unaff_d11;
  param_1[8] = local_160;
  param_1[9] = local_f0;
  param_1[0xd] = local_154;
  *(undefined1 *)(param_1 + 0x10) = local_15c;
  *(undefined8 *)(param_1 + 6) = uVar28;
  *(undefined8 *)(param_1 + 10) = uVar27;
  *(undefined8 *)(param_1 + 0xe) = uVar26;
  FUN_01bed4e2((int)param_1 + 0x41,auStack_a8,0x47);
  param_1[0x27] = iVar5;
  param_1[0x28] = local_138;
  param_1[0x29] = iVar6;
  param_1[0x2a] = iVar7;
  param_1[0x30] = 2;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x26] = iVar20;
  param_1[0x2b] = iVar8;
  param_1[0x31] = local_c0;
  param_1[0x32] = iStack_bc;
  param_1[0x33] = local_b8;
  param_1[0x34] = iStack_b4;
  param_1[0x35] = iStack_b0;
  param_1[0x3e] = iVar24;
  param_1[0x3f] = iVar9;
  param_1[0x42] = iVar18;
  param_1[0x43] = iVar21;
  *(undefined1 *)((int)param_1 + 0x131) = uVar1;
  *(char *)(param_1 + 0x4c) = (char)iVar15;
  param_1[0x46] = iVar10;
  param_1[0x47] = iVar11;
  param_1[0x48] = iVar12;
  param_1[0x49] = iVar13;
  param_1[0x4a] = iVar14;
  *(undefined8 *)(param_1 + 0x40) = uVar30;
  *(undefined1 *)((int)param_1 + 0x132) = 2;
  param_1[0x4b] = iVar31;
  *(undefined8 *)(param_1 + 0x44) = uVar29;
  FUN_01bed4e2((int)param_1 + 0x133,auStack_d8,0x11);
  iVar15 = param_2[0x4e];
  *(char *)(param_1 + 0x51) = (char)iVar16;
  if (iVar15 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(iVar15,param_2[0x4f]);
  return;
}

