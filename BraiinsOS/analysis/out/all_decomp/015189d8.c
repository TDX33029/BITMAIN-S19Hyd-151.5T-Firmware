// FUN_015189d8 @ 015189d8 size=3192 calls_out=16 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01519238) */
/* WARNING: Removing unreachable block (ram,0x01519a54) */
/* WARNING: Removing unreachable block (ram,0x0151916c) */
/* WARNING: Removing unreachable block (ram,0x0151918c) */
/* WARNING: Removing unreachable block (ram,0x015191ac) */
/* WARNING: Removing unreachable block (ram,0x01519a78) */
/* WARNING: Removing unreachable block (ram,0x01519248) */
/* WARNING: Removing unreachable block (ram,0x015192d4) */
/* WARNING: Removing unreachable block (ram,0x015192f0) */
/* WARNING: Removing unreachable block (ram,0x015192f8) */
/* WARNING: Removing unreachable block (ram,0x015199a8) */
/* WARNING: Removing unreachable block (ram,0x015199ac) */
/* WARNING: Removing unreachable block (ram,0x01519308) */
/* WARNING: Removing unreachable block (ram,0x0151935c) */
/* WARNING: Removing unreachable block (ram,0x01519838) */
/* WARNING: Removing unreachable block (ram,0x01519840) */
/* WARNING: Removing unreachable block (ram,0x01519864) */
/* WARNING: Removing unreachable block (ram,0x01519380) */
/* WARNING: Removing unreachable block (ram,0x01519290) */
/* WARNING: Removing unreachable block (ram,0x01519390) */
/* WARNING: Removing unreachable block (ram,0x015193ac) */
/* WARNING: Removing unreachable block (ram,0x01519a0c) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x01519b14) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519904) */
/* WARNING: Removing unreachable block (ram,0x015199b4) */
/* WARNING: Removing unreachable block (ram,0x0151990c) */
/* WARNING: Removing unreachable block (ram,0x015199bc) */
/* WARNING: Removing unreachable block (ram,0x0151991c) */
/* WARNING: Removing unreachable block (ram,0x01519974) */
/* WARNING: Removing unreachable block (ram,0x015199c0) */
/* WARNING: Removing unreachable block (ram,0x015199c8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_015189d8(uint *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  byte bVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  code *pcVar12;
  uint ****ppppuVar13;
  uint ***pppuVar14;
  undefined4 uVar15;
  undefined4 ****ppppuVar16;
  uint ****ppppuVar17;
  uint ***pppuVar18;
  undefined4 *puVar19;
  uint uVar20;
  short *psVar21;
  short *psVar22;
  uint ****ppppuVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  uint ***local_230;
  short *local_22c;
  uint ***local_228;
  uint local_224;
  int local_220;
  uint local_21c;
  uint ***local_218;
  uint *local_214;
  uint ***local_210;
  undefined2 local_20c;
  undefined2 local_20a;
  int local_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  int local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  uint ***local_1a8;
  uint ***local_1a4;
  uint ***local_1a0;
  uint ***local_198;
  uint ***local_194;
  undefined4 ****local_190;
  uint ***local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  undefined2 local_120;
  uint ***local_118;
  uint *local_114;
  uint ***local_110;
  undefined1 auStack_10c [108];
  uint ***local_a0;
  uint *local_9c;
  uint ***local_98;
  undefined4 local_94;
  undefined4 ***local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar24 = *(uint *)(param_3 + 0x14);
  iVar9 = uVar24 * 2;
  if ((int)(uVar24 | uVar24 << 1) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar9);
  }
  uVar15 = *(undefined4 *)(param_3 + 0x10);
  uVar1 = *(undefined2 *)(param_3 + 0x26);
  uVar2 = *(undefined2 *)(param_3 + 0x24);
  if (iVar9 == 0) {
    iVar8 = 1;
    uVar20 = 0;
  }
  else {
    iVar8 = thunk_FUN_016d4a50(iVar9);
    uVar20 = uVar24;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar9);
    }
  }
  FUN_016dd1aa(iVar8,uVar15,iVar9);
  iVar11 = *(int *)(param_3 + 8);
  psVar21 = *(short **)(param_3 + 4);
  local_114 = (uint *)&DAT_00000004;
  iVar9 = iVar11 << 2;
  local_110 = (uint ***)0x0;
  local_118 = (uint ***)0x0;
  psVar7 = psVar21;
  do {
    psVar22 = psVar7;
    if (iVar9 == 0) {
      local_22c = (short *)&SUB_00000002;
      pppuVar14 = (uint ***)0x0;
      local_230 = (uint ***)0x0;
      goto LAB_01518b78;
    }
    sVar3 = *psVar22;
    iVar9 = iVar9 + -4;
    psVar7 = psVar22 + 2;
  } while (sVar3 == 3);
  sVar4 = psVar22[1];
  local_194 = (uint ***)thunk_FUN_016d4a50(0x10);
  if (local_194 == (uint ***)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(2,0x10);
  }
  *(short *)local_194 = sVar3;
  pppuVar14 = (uint ***)0x1;
  *(short *)((int)local_194 + 2) = sVar4;
  local_198 = (uint ***)0x4;
  pppuVar18 = local_194;
  while( true ) {
    psVar22 = psVar7;
    local_190 = (undefined4 ****)pppuVar14;
    if (psVar22 == psVar21 + iVar11 * 2) break;
    sVar3 = *psVar22;
    psVar7 = psVar22 + 2;
    if (sVar3 != 3) {
      sVar4 = psVar22[1];
      if (pppuVar14 == local_198) {
        FUN_0154e5f8(&local_198,pppuVar14,1,2,4);
        pppuVar18 = local_194;
      }
      iVar9 = (int)pppuVar14 * 2;
      *(short *)((int)pppuVar18 + iVar9 * 2) = sVar3;
      pppuVar14 = (uint ***)((int)pppuVar14 + 1);
      ((short *)((int)pppuVar18 + iVar9 * 2))[1] = sVar4;
    }
  }
  local_22c = (short *)local_194;
  local_230 = local_198;
LAB_01518b78:
  pppuVar18 = local_110;
  local_208 = param_2[0x1b];
  iStack_204 = param_2[0x1c];
  iStack_200 = param_2[0x1d];
  iStack_1fc = param_2[0x1e];
  local_1f8 = param_2[0x1f];
  iStack_1f4 = param_2[0x20];
  iStack_1f0 = param_2[0x21];
  iStack_1ec = param_2[0x22];
  local_1e8 = *(undefined4 *)(param_3 + 0x48);
  uStack_1e4 = *(undefined4 *)(param_3 + 0x4c);
  uStack_1e0 = *(undefined4 *)(param_3 + 0x50);
  uStack_1dc = *(undefined4 *)(param_3 + 0x54);
  local_1d8 = *(undefined4 *)(param_3 + 0x58);
  uStack_1d4 = *(undefined4 *)(param_3 + 0x5c);
  uStack_1d0 = *(undefined4 *)(param_3 + 0x60);
  uStack_1cc = *(undefined4 *)(param_3 + 100);
  uStack_1c8 = *(undefined4 *)(param_3 + 0x68);
  local_218 = local_118;
  local_214 = local_114;
  local_210 = local_110;
  local_198 = (uint ***)0x80000000;
  local_228 = pppuVar14;
  local_224 = uVar20;
  local_220 = iVar8;
  local_21c = uVar24;
  local_20c = uVar2;
  local_20a = uVar1;
  if (local_110 == local_118) {
    FUN_0154e368(&local_218);
  }
  puVar10 = local_214 + (int)pppuVar18 * 9;
  *puVar10 = (uint)local_198;
  puVar10[1] = (uint)local_194;
  puVar10[2] = (uint)local_190;
  puVar10[3] = (uint)local_18c;
  puVar10[4] = local_188;
  puVar10[5] = local_184;
  puVar10[6] = local_180;
  puVar10[7] = local_17c;
  puVar10[8] = local_178;
  local_210 = (uint ***)((int)pppuVar18 + 1);
  iVar9 = *(int *)(param_3 + 0x20);
  if (iVar9 != 0) {
    local_1bc = thunk_FUN_016d4a50(iVar9 * 0x24);
    if (local_1bc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar9 * 0x24);
    }
    local_1b8 = 0;
    local_1c0 = iVar9;
    local_1b0 = thunk_FUN_016d4a50(iVar9 << 2);
    if (local_1b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(2,iVar9 << 2);
    }
    local_1ac = 0;
    iVar8 = 0x13;
    if (0x80000000 < **(uint **)(param_3 + 0x1c)) {
      iVar8 = **(uint **)(param_3 + 0x1c) + 0x7fffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x01518d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    local_1b4 = iVar9;
    (*(code *)(&DAT_01518d30 + *(int *)(&DAT_01518d30 + iVar8 * 4)))();
    return;
  }
  local_1bc = 4;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1ac = 0;
  local_1b0 = 2;
  local_1b4 = 0;
  if (local_210 == (uint ***)0x0) {
    local_18c = (uint ***)0x0;
  }
  else {
    local_18c = pppuVar18;
    if (local_214[(int)pppuVar18 * 9] != 0x8000000a) {
      local_18c = local_210;
    }
    if (local_210 < local_18c) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,local_18c,local_210,&DAT_018af198);
    }
  }
  local_188 = (int)local_210 - (int)local_18c;
  local_210 = local_18c;
  local_190 = &local_218;
  if (local_188 == 0) {
    local_178 = 4;
    local_17c = 0;
    local_184 = 4;
    local_194 = (uint ***)0x4;
    local_198 = (uint ***)0x4;
    local_1ac = 0;
    local_1b0 = 2;
    local_1b4 = 0;
    local_1b8 = 0;
    local_1bc = 4;
    local_1c0 = 0;
    local_180 = 4;
  }
  else {
    local_94 = 4;
    local_98 = (uint ***)0x0;
    local_9c = (uint *)&DAT_00000004;
    local_a0 = (uint ***)0x4;
    local_178 = 4;
    local_17c = 0;
    local_180 = 4;
    local_184 = 4;
    local_194 = (uint ***)0x4;
    local_198 = (uint ***)0x4;
    local_1ac = 0;
    local_1b0 = 2;
    local_1b4 = 0;
    local_1b8 = 0;
    local_1bc = 4;
    local_1c0 = 0;
    iVar8 = 4;
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      FUN_015109b4(iVar8);
      iVar8 = iVar8 + 0x24;
    }
  }
  FUN_0156af7c(&local_198);
  uVar24 = local_180;
  for (iVar9 = (local_178 - local_180 >> 2) * 0x38e38e39; iVar9 != 0; iVar9 = iVar9 + -1) {
    FUN_015109b4(uVar24);
    uVar24 = uVar24 + 0x24;
  }
  if (local_17c != 0) {
    thunk_FUN_016d3fb4(local_184);
  }
  pppuVar14 = local_210;
  puVar10 = local_214;
  uVar15 = 0;
  bVar26 = (uint ***)0x3ffffffe < local_210;
  bVar25 = local_210 == (uint ***)0x3fffffff;
  uVar24 = (int)local_210 * 4;
  if (local_210 < (uint ***)0x40000000) {
    bVar26 = 0x7ffffffd < uVar24;
    bVar25 = uVar24 == 0x7ffffffe;
  }
  if (bVar26 && !bVar25) {
LAB_01519228:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar15,uVar24);
  }
  if (uVar24 == 0) {
    iVar9 = 2;
  }
  else {
    iVar9 = thunk_FUN_016d4a50(uVar24);
    if (iVar9 == 0) {
      uVar15 = 2;
      goto LAB_01519228;
    }
  }
  if (pppuVar14 != (uint ***)0x0) {
    uVar24 = *puVar10;
    iVar8 = 0x13;
    if (0x80000000 < uVar24) {
      iVar8 = uVar24 + 0x7fffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x015193e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_015193ec + *(int *)(&DAT_015193ec + iVar8 * 4)))
              (iVar9 + 2,puVar10 + 4,pppuVar14,0xb);
    return;
  }
  if (param_2[7] != 0) {
    thunk_FUN_016d3fb4(param_2[8]);
  }
  param_2[7] = 0;
  param_2[9] = 0;
  param_2[8] = iVar9;
  if (param_5 != 0) {
    FUN_016dd1aa(&local_198,&local_230,0x6c);
    FUN_0154e678(&local_118,param_5,param_2[1],param_2[2],&local_198);
    uVar24 = param_2[0x18];
    local_a0 = local_118;
    local_9c = local_114;
    local_98 = local_110;
    if (uVar24 != 0) {
      puVar19 = (undefined4 *)param_2[0x19];
      pcVar12 = (code *)*puVar19;
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(uVar24);
      }
      if (puVar19[1] != 0) {
        thunk_FUN_016d3fb4(uVar24);
      }
    }
    param_2[0x18] = (int)local_a0;
    param_2[0x19] = (int)local_9c;
    param_2[0x1a] = (int)local_98;
    if ((int)local_198 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a7790);
    }
    FUN_016dd1aa(&local_230,&local_198,0x6c);
  }
  local_190 = (undefined4 ****)0x0;
  local_194 = (uint ***)0x1;
  local_198 = (uint ***)0x0;
  FUN_0150f540(&local_230,&local_198,&local_1b4);
  ppppuVar16 = local_190;
  local_1a8 = local_198;
  local_1a4 = local_194;
  local_1a0 = (uint ***)local_190;
  uVar24 = (uint)*(byte *)((int)param_2 + 0x8e);
  if (uVar24 == 0) {
    uVar24 = 0xffffffff;
  }
  if ((char)param_2[0xf] == '\x01') {
    uVar24 = (uVar24 & 0xff) + 9;
  }
  else {
    bVar6 = UnsignedSaturate((char)uVar24 - (char)param_2[0x12],0x10);
    cVar5 = (char)param_2[0x12] >> 7;
    UnsignedSaturate((char)(uVar24 >> 8) - cVar5,0x10);
    UnsignedSaturate((char)(uVar24 >> 0x10) - cVar5,0x10);
    UnsignedSaturate((char)(uVar24 >> 0x18) - cVar5,0x10);
    uVar24 = (uint)bVar6;
  }
  uVar24 = -(uVar24 + (int)local_190) & 0x1f;
  if (uVar24 == 0) {
    uVar20 = 0;
    iVar9 = 1;
  }
  else {
    iVar9 = FUN_016d38c8(uVar24,1);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar24);
    }
    uVar20 = uVar24;
    if ((uint)((int)local_1a8 - (int)ppppuVar16) < uVar24) {
      FUN_0154e5f8(&local_1a8,ppppuVar16,uVar24,1,1);
      ppppuVar16 = (undefined4 ****)local_1a0;
    }
  }
  FUN_016dd1aa((int)local_1a4 + (int)ppppuVar16,iVar9,uVar24);
  local_1a0 = (uint ***)((int)ppppuVar16 + uVar24);
  if (uVar20 != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  FUN_016dd1aa(&local_a0,&local_230,0x6c);
  local_28 = 0;
  local_2c = 1;
  local_30 = (undefined4 ***)0x0;
  FUN_0150e524(&local_a0,&local_30,0x80000000);
  local_118 = local_30;
  local_114 = (uint *)local_2c;
  local_110 = (uint ***)local_28;
  FUN_016dd1aa(auStack_10c,&local_a0,0x6c);
  local_120 = 4;
  ppppuVar23 = &local_198;
  if (param_4 == 0) {
    local_120 = 2;
  }
  FUN_016dd1aa(ppppuVar23,&local_118,0x78);
  iVar8 = (int)local_198 + 0x7fffffff;
  iVar9 = 1;
  if ((uint ***)0x80000000 < local_198) {
    iVar9 = iVar8;
  }
  if (iVar9 == 2) {
    ppppuVar13 = (uint ****)&local_190;
    ppppuVar17 = &local_18c;
LAB_01519790:
    pppuVar14 = *ppppuVar17;
    iVar9 = param_2[2];
    pppuVar18 = *ppppuVar13;
    if ((uint ***)(*param_2 - iVar9) < pppuVar14) {
      FUN_0154e5f8(param_2,iVar9,pppuVar14,1,1);
      iVar9 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar9,pppuVar18,pppuVar14);
    param_2[2] = iVar9 + (int)pppuVar14;
    iVar8 = (int)local_198 + 0x7fffffff;
  }
  else {
    ppppuVar13 = (uint ****)((uint)&local_198 | 4);
    ppppuVar17 = (uint ****)&local_190;
    if (iVar9 == 1) goto LAB_01519790;
  }
  if (local_198 < (uint ***)0x80000001) {
    iVar8 = 1;
  }
  *param_1 = (uint)local_1a8;
  param_1[1] = (uint)local_1a4;
  param_1[2] = (uint)local_1a0;
  switch(iVar8) {
  case 0:
  case 3:
    goto switchD_015197fc_caseD_0;
  case 1:
    FUN_01517c10(&local_18c);
    pppuVar14 = local_198;
    break;
  default:
    ppppuVar23 = (uint ****)((uint)&local_198 | 4);
    pppuVar14 = local_194;
  }
  if ((pppuVar14 != (uint ***)0x80000000) && (pppuVar14 != (uint ***)0x0)) {
    thunk_FUN_016d3fb4(ppppuVar23[1]);
    return;
  }
switchD_015197fc_caseD_0:
  return;
}

