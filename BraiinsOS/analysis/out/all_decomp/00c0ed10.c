// FUN_00c0ed10 @ 00c0ed10 size=1152 calls_out=11 calls_in=0
// strings: a Display implementation returned an error unexpectedly

void FUN_00c0ed10(uint *param_1,uint param_2,uint *param_3,int *param_4,uint *param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,uint param_10,undefined2 param_11,
                 undefined2 param_12,uint *param_13)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 extraout_r1;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined8 uVar23;
  uint uVar24;
  uint local_550;
  uint local_548;
  uint uStack_544;
  uint uStack_540;
  undefined1 auStack_538 [56];
  undefined1 auStack_500 [248];
  int local_408;
  undefined4 local_404;
  undefined4 local_3f0;
  uint local_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  uint uStack_3dc;
  byte local_3d2;
  undefined1 local_3d1;
  uint local_3d0;
  uint local_3cc;
  uint uStack_3c8;
  uint uStack_3c4;
  undefined1 auStack_3c0 [224];
  uint *local_2e0;
  undefined *local_2dc;
  undefined1 *local_2d8;
  undefined4 local_2d4;
  undefined1 auStack_2a8 [228];
  undefined4 local_1c4;
  undefined4 local_1c0;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_198;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  
  bVar22 = (*param_3 & 1) == 0;
  if (bVar22) {
    local_3e8 = param_3[2];
    uStack_3e4 = param_3[3];
    uStack_3e0 = param_3[4];
    uStack_3dc = param_3[5];
  }
  local_550 = (uint)!bVar22;
  uVar7 = param_3[0xc];
  uVar9 = param_3[0xd];
  uVar3 = param_3[0x10];
  uVar8 = param_3[0x11];
  uVar1 = *(undefined1 *)((int)param_3 + 0x61);
  uVar12 = param_3[0x18];
  uVar4 = param_3[0xe];
  uVar5 = param_3[0x16];
  uVar18 = param_3[0x12];
  iVar20 = param_4[1];
  iVar21 = param_4[2];
  uVar23 = *(undefined8 *)(param_3 + 0x14);
  uVar24 = param_3[0x17];
  FUN_00ccdbf4(&local_548,iVar20,iVar21);
  FUN_00c0d1cc(&local_2e0,param_2);
  uVar15 = *(undefined4 *)(param_2 + 0x148);
  FUN_016dd1aa(auStack_538,&local_2e0,0x148);
  local_3f0 = uVar15;
  local_3d2 = FUN_009b670c(auStack_500);
  local_3d2 = local_3d2 & 1;
  local_188 = 0;
  local_190 = 0;
  local_2d4 = 0;
  local_2d8 = &DAT_60000020;
  local_2e0 = &local_190;
  local_2dc = &DAT_018630bc;
  local_18c = 1;
  local_3d1 = extraout_r1;
  iVar6 = FUN_0093efbc(&local_3d2,&local_2e0);
  uVar2 = local_188;
  uVar17 = local_18c;
  uVar14 = local_190;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,auStack_3c0,
                 &DAT_018630d4,&DAT_018af130);
  }
  FUN_00849e70(&local_190,auStack_538);
  FUN_016dd1aa(&local_2e0,&local_190,0x148);
  local_198 = uVar15;
  FUN_007c6680(&local_190,auStack_2a8);
  FUN_00f20400(&local_48,local_1c4,local_1c0);
  FUN_016dd1aa(auStack_3c0,&local_190,0xe0);
  local_3cc = local_48;
  uStack_3c8 = uStack_44;
  uStack_3c4 = uStack_40;
  FUN_007c94ec(auStack_2a8);
  if (local_1b0 != 0) {
    thunk_FUN_016d3fb4(local_1ac);
  }
  FUN_016dd1aa(&local_2e0,auStack_3c0,0xe0);
  local_190 = local_3d0;
  local_18c = local_3cc;
  local_188 = uStack_3c8;
  local_184 = uStack_3c4;
  FUN_007c94ec(auStack_500);
  if (local_408 != 0) {
    thunk_FUN_016d3fb4(local_404);
  }
  FUN_016dd1aa(param_1 + 0x1a,&local_2e0,0xe0);
  param_1[0x61] = local_190;
  param_1[0x62] = local_18c;
  param_1[99] = local_188;
  param_1[100] = local_184;
  uVar10 = param_5[1];
  uVar11 = param_5[2];
  uVar13 = param_5[3];
  uVar16 = param_5[4];
  uVar19 = param_5[5];
  param_1[0x6a] = *param_5;
  param_1[0x6b] = uVar10;
  param_1[0x6c] = uVar11;
  param_1[0x6d] = uVar13;
  param_1[0x6e] = uVar16;
  param_1[0x6f] = uVar19;
  uVar10 = param_5[7];
  uVar11 = param_5[8];
  uVar13 = param_5[9];
  uVar16 = param_5[10];
  uVar19 = param_5[0xb];
  param_1[0x70] = param_5[6];
  param_1[0x71] = uVar10;
  param_1[0x72] = uVar11;
  param_1[0x73] = uVar13;
  param_1[0x74] = uVar16;
  param_1[0x75] = uVar19;
  param_1[2] = local_3e8;
  param_1[3] = uStack_3e4;
  param_1[4] = uStack_3e0;
  param_1[5] = uStack_3dc;
  uVar10 = param_3[7];
  uVar11 = param_3[8];
  uVar13 = param_3[9];
  uVar16 = param_3[10];
  uVar19 = param_3[0xb];
  param_1[6] = param_3[6];
  param_1[7] = uVar10;
  param_1[8] = uVar11;
  param_1[9] = uVar13;
  param_1[10] = uVar16;
  param_1[0xb] = uVar19;
  param_1[0x86] = local_548;
  param_1[0x87] = uStack_544;
  param_1[0x88] = uStack_540;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar9;
  param_1[1] = 0;
  *param_1 = local_550;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar8;
  param_1[0x52] = 1;
  param_1[0xe] = uVar4;
  *(undefined1 *)((int)param_1 + 0x61) = uVar1;
  *(char *)(param_1 + 0x18) = (char)uVar12;
  param_1[0x16] = uVar5;
  param_1[0x12] = uVar18;
  param_1[0x68] = uVar2;
  param_1[0x67] = uVar17;
  param_1[0x58] = 500000000;
  param_1[0x66] = uVar14;
  param_1[0x5c] = 60000000;
  param_1[0x65] = 25000000;
  param_1[0x60] = 300000000;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x17] = uVar24;
  *(undefined8 *)(param_1 + 0x14) = uVar23;
  param_1[0x54] = 0;
  param_1[0x76] = param_2 + 0x38;
  uVar12 = param_13[1];
  uVar14 = param_13[2];
  uVar17 = param_13[3];
  param_1[0x78] = *param_13;
  param_1[0x79] = uVar12;
  param_1[0x7a] = uVar14;
  param_1[0x7b] = uVar17;
  uVar12 = param_13[5];
  uVar14 = param_13[6];
  uVar17 = param_13[7];
  param_1[0x7c] = param_13[4];
  param_1[0x7d] = uVar12;
  param_1[0x7e] = uVar14;
  param_1[0x7f] = uVar17;
  *(undefined2 *)(param_1 + 0x80) = param_11;
  param_1[0x82] = param_6;
  param_1[0x83] = param_10;
  param_1[0x8a] = param_8;
  *(undefined2 *)(param_1 + 0x84) = param_12;
  param_1[0x81] = param_2 + 0x38;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x8b] = param_9;
  param_1[0x8c] = param_2;
  param_1[0x8d] = param_7;
  for (iVar6 = 0; iVar21 != iVar6; iVar6 = iVar6 + 1) {
    if (*(int *)(iVar20 + iVar6 * 0x10) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar20 + iVar6 * 0x10 + 4));
    }
  }
  if (*param_4 != 0) {
    thunk_FUN_016d3fb4(iVar20);
  }
  return;
}

