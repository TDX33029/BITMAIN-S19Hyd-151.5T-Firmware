// FUN_00984254 @ 00984254 size=1608 calls_out=11 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00984254(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 uStack_4a8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 *local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  
  uVar3 = 1;
  if ((int)param_2[0x55] < 0) {
    uVar3 = param_2[0x55] ^ 0x80000000;
  }
  if (uVar3 == 0) {
    local_4b0 = 0x80000000;
    local_4ac = CONCAT31(local_4ac._1_3_,*(undefined1 *)(param_2 + 0x56));
  }
  else if (uVar3 == 1) {
    FUN_00b203a0(&local_4b0,param_2[0x56],param_2[0x57]);
  }
  else {
    local_4b0 = 0x80000002;
  }
  if (param_2[0x46] == -0x80000000) {
    local_4a0 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_4a0,param_2[0x47],param_2[0x48]);
  }
  if (param_2[0x52] == -0x7fffffff) {
    local_4b8 = 0x80000001;
  }
  else {
    if (param_2[0x52] == -0x80000000) {
      local_19c = CONCAT31(local_19c._1_3_,*(undefined1 *)(param_2 + 0x53));
      local_4b8 = 0x80000000;
    }
    else {
      FUN_006666fc(&local_1a0,param_2[0x53],param_2[0x54]);
      local_4b8 = local_1a0;
      local_50c = local_198;
    }
    local_508 = local_19c;
  }
  if (param_2[0x49] == -0x80000000) {
    local_490 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_490,param_2[0x4a],param_2[0x4b]);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_2 + 0x26)) {
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_480 = CONCAT31(local_480._1_3_,6);
  if (param_2[0x4c] == -0x80000000) {
    local_468 = 0x80000000;
  }
  else {
    FUN_01961458(&local_468,param_2[0x4d],param_2[0x4e]);
  }
  FUN_01318534(&local_458,param_2[0x3b],param_2[0x3c]);
  FUN_009855b0(&local_448,param_2 + 0x58);
  piVar17 = (int *)param_2[0x5b];
  puVar19 = (undefined4 *)0x0;
  if (piVar17 != (int *)0x0) {
    puVar19 = (undefined4 *)FUN_00ab2900();
    if (*piVar17 == 8) {
      uVar16 = (undefined1)piVar17[1];
      uVar15 = 8;
    }
    else {
      FUN_009828b0(&local_1a0,piVar17);
      uVar15 = local_1a0;
      uVar16 = (undefined1)local_19c;
      FUN_01bed4e2(&local_3a0,(uint)&local_1a0 | 5,0x173);
    }
    *(undefined1 *)(puVar19 + 1) = uVar16;
    *puVar19 = uVar15;
    FUN_01bed4e2((int)puVar19 + 5,&local_3a0,0x173);
  }
  puVar18 = (uint *)param_2[0x5c];
  local_438 = puVar19;
  if (puVar18 != (uint *)0x0) {
    FUN_00ab2900();
    uVar3 = *puVar18;
    iVar4 = 1;
    if (1 < uVar3) {
      iVar4 = uVar3 - 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00984538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0098453c + *(int *)(&DAT_0098453c + iVar4 * 4)))();
    return;
  }
  local_434 = 0;
  uVar16 = *(undefined1 *)(param_2 + 0x5d);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_2 + 0x2c)) {
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_228 = CONCAT31(local_228._1_3_,6);
  FUN_01961458(&local_430,param_2[0x3e],param_2[0x3f]);
  uVar1 = *(undefined1 *)((int)param_2 + 0x175);
  uVar2 = *(undefined1 *)((int)param_2 + 0x176);
  FUN_009855f8(&local_1a0,param_2 + 0x1c);
  iVar4 = param_2[8];
  if (iVar4 != 3) {
    local_420 = param_2[9];
    uStack_41c = param_2[10];
    uStack_418 = param_2[0xb];
  }
  iVar5 = param_2[0xc];
  if (iVar5 != 3) {
    local_410 = param_2[0xd];
    uStack_40c = param_2[0xe];
    uStack_408 = param_2[0xf];
  }
  iVar6 = param_2[0x10];
  if (iVar6 != 3) {
    local_400 = param_2[0x11];
    uStack_3fc = param_2[0x12];
    uStack_3f8 = param_2[0x13];
  }
  iVar7 = param_2[0x14];
  if (iVar7 != 3) {
    local_3f0 = param_2[0x15];
    uStack_3ec = param_2[0x16];
    uStack_3e8 = param_2[0x17];
  }
  iVar8 = param_2[0x18];
  if (iVar8 != 3) {
    local_3e0 = param_2[0x19];
    uStack_3dc = param_2[0x1a];
    uStack_3d8 = param_2[0x1b];
  }
  uVar15 = param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  uVar20 = *param_2;
  if (param_2[0x4f] == -0x80000000) {
    local_3d0 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_3d0,param_2[0x50],param_2[0x51]);
  }
  uVar11 = param_2[4];
  uVar12 = param_2[5];
  uVar13 = param_2[6];
  uVar14 = param_2[7];
  if (param_2[0x32] == 0) {
    local_3a0 = 0;
  }
  else {
    FUN_00ab8cac(&local_3a0);
  }
  FUN_006666fc(&local_3c0,param_2[0x41],param_2[0x42]);
  FUN_006666fc(&local_3b0,param_2[0x44],param_2[0x45]);
  param_1[0x55] = local_4b0;
  param_1[0x56] = local_4ac;
  param_1[0x57] = uStack_4a8;
  param_1[0x46] = local_4a0;
  param_1[0x47] = uStack_49c;
  param_1[0x48] = uStack_498;
  param_1[0x52] = local_4b8;
  param_1[0x53] = local_508;
  param_1[0x54] = local_50c;
  param_1[0x49] = local_490;
  param_1[0x4a] = uStack_48c;
  param_1[0x4b] = uStack_488;
  param_1[0x26] = local_480;
  param_1[0x27] = uStack_47c;
  param_1[0x28] = uStack_478;
  param_1[0x29] = uStack_474;
  param_1[0x2a] = uStack_470;
  param_1[0x2b] = uStack_46c;
  param_1[0x4c] = local_468;
  param_1[0x4d] = uStack_464;
  param_1[0x4e] = uStack_460;
  param_1[0x3a] = local_458;
  param_1[0x3b] = uStack_454;
  param_1[0x3c] = uStack_450;
  param_1[0x58] = local_448;
  param_1[0x59] = uStack_444;
  param_1[0x5a] = uStack_440;
  *(undefined1 *)(param_1 + 0x5d) = uVar16;
  param_1[0x5b] = puVar19;
  param_1[0x5c] = 0;
  param_1[0x2c] = local_228;
  param_1[0x2d] = uStack_224;
  param_1[0x2e] = uStack_220;
  param_1[0x2f] = uStack_21c;
  param_1[0x30] = uStack_218;
  param_1[0x31] = uStack_214;
  param_1[0x3d] = local_430;
  param_1[0x3e] = uStack_42c;
  param_1[0x3f] = uStack_428;
  *(undefined1 *)((int)param_1 + 0x176) = uVar2;
  *(undefined1 *)((int)param_1 + 0x175) = uVar1;
  param_1[0x1c] = local_1a0;
  param_1[0x1d] = local_19c;
  param_1[0x1e] = local_198;
  param_1[0x1f] = uStack_194;
  param_1[0x20] = uStack_190;
  param_1[0x21] = local_18c;
  param_1[0x22] = uStack_188;
  param_1[0x23] = uStack_184;
  param_1[0x24] = uStack_180;
  param_1[0x25] = uStack_17c;
  param_1[8] = iVar4;
  param_1[9] = local_420;
  param_1[10] = uStack_41c;
  param_1[0xb] = uStack_418;
  param_1[0xc] = iVar5;
  param_1[0xd] = local_410;
  param_1[0xe] = uStack_40c;
  param_1[0xf] = uStack_408;
  param_1[0x10] = iVar6;
  param_1[0x11] = local_400;
  param_1[0x12] = uStack_3fc;
  param_1[0x13] = uStack_3f8;
  param_1[0x14] = iVar7;
  param_1[0x15] = local_3f0;
  param_1[0x16] = uStack_3ec;
  param_1[0x17] = uStack_3e8;
  param_1[0x18] = iVar8;
  param_1[0x19] = local_3e0;
  param_1[0x1a] = uStack_3dc;
  param_1[0x1b] = uStack_3d8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  param_1[1] = uVar15;
  *param_1 = uVar20;
  param_1[0x4f] = local_3d0;
  param_1[0x50] = uStack_3cc;
  param_1[0x51] = uStack_3c8;
  param_1[7] = uVar14;
  param_1[6] = uVar13;
  param_1[5] = uVar12;
  param_1[4] = uVar11;
  param_1[0x32] = local_3a0;
  param_1[0x33] = uStack_39c;
  param_1[0x34] = uStack_398;
  param_1[0x35] = uStack_394;
  param_1[0x36] = local_390;
  param_1[0x37] = uStack_38c;
  param_1[0x38] = uStack_388;
  param_1[0x39] = uStack_384;
  param_1[0x40] = local_3c0;
  param_1[0x41] = uStack_3bc;
  param_1[0x42] = uStack_3b8;
  param_1[0x43] = local_3b0;
  param_1[0x44] = uStack_3ac;
  param_1[0x45] = uStack_3a8;
  return;
}

