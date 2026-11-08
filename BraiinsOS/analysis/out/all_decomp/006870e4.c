// FUN_006870e4 @ 006870e4 size=1520 calls_out=13 calls_in=1
// strings: 

void FUN_006870e4(int *param_1,int *param_2,uint *param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int unaff_r6;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  char local_22d;
  int local_22c;
  uint local_228;
  uint local_224;
  undefined1 auStack_220 [64];
  int local_1e0;
  undefined2 local_1dc;
  char *local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  uint *local_1c8;
  code *local_1c4;
  int iStack_1c0;
  undefined4 local_130;
  undefined1 local_12c;
  undefined1 local_123;
  uint local_120;
  undefined1 local_11c;
  undefined1 local_118 [20];
  undefined4 local_104;
  undefined4 local_f4;
  undefined4 local_e4;
  undefined4 local_d4;
  undefined2 local_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined1 auStack_80 [92];
  
  puVar3 = (undefined4 *)param_3[0x10];
  if (puVar3 != (undefined4 *)0x0) {
    unaff_r6 = puVar3[3];
  }
  local_22d = param_4;
  if (puVar3 != (undefined4 *)0x0 && unaff_r6 != 0) {
    puVar16 = (uint *)*puVar3;
    puVar19 = puVar16 + 1;
    uVar18 = ~*puVar16 & 0x80808080;
    do {
      puVar13 = puVar19;
      if (uVar18 == 0) {
        do {
          puVar19 = puVar13 + 1;
          uVar18 = *puVar13;
          puVar16 = puVar16 + -0x18;
          puVar13 = puVar19;
        } while ((uVar18 & 0x80808080) == 0x80808080);
        uVar18 = uVar18 & 0x80808080 ^ 0x80808080;
      }
      uVar17 = (uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                             (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3;
      puVar20 = (undefined4 *)puVar16[uVar17 * -6 + -1];
      uVar17 = puVar16[uVar17 * -6 + -2];
      pcVar10 = (code *)*puVar20;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(uVar17);
      }
      if (puVar20[1] != 0) {
        thunk_FUN_016d3fb4(uVar17);
      }
      unaff_r6 = unaff_r6 + -1;
      uVar18 = uVar18 - 1 & uVar18;
    } while (unaff_r6 != 0);
    uVar18 = 0;
    uVar17 = puVar3[1];
    if (uVar17 != 0) {
      FUN_016dd606(*puVar3,0xff,uVar17 + 5);
      uVar18 = uVar17;
      if (7 < uVar17) {
        uVar18 = (uVar17 + 1 & 0xfffffff8) - (uVar17 + 1 >> 3);
      }
    }
    puVar3[2] = uVar18;
    puVar3[3] = 0;
  }
  iVar15 = *param_2;
  puVar19 = (uint *)(iVar15 + 8);
  do {
    if (*puVar19 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(puVar19);
      goto LAB_00687230;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar19);
  } while (!bVar1);
  *puVar19 = 1;
  DataMemoryBarrier(0xb);
LAB_00687230:
  uVar18 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar15 + 0xc);
  }
  else {
    uVar18 = FUN_015bf3f8();
    uVar18 = uVar18 ^ 1;
    cVar2 = *(char *)(iVar15 + 0xc);
  }
  if (cVar2 != '\0') {
    local_1c4._1_3_ = (undefined3)((uint)local_1c4 >> 8);
    local_1c4 = (code *)CONCAT31(local_1c4._1_3_,(char)uVar18);
    local_1c8 = puVar19;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_1c8,&DAT_018587a0,&DAT_01858710);
  }
  iVar11 = param_2[3];
  local_22c = iVar15 + 0x160;
  uVar14 = param_2[1];
  puVar16 = (uint *)(iVar11 + 8);
  uVar17 = param_2[2];
  do {
    local_228 = uVar14;
    local_224 = uVar17;
    if (*puVar16 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(puVar16);
      goto LAB_006872a8;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar1);
  *puVar16 = 1;
  DataMemoryBarrier(0xb);
LAB_006872a8:
  uVar12 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar11 + 0xc);
  }
  else {
    uVar12 = FUN_015bf3f8();
    uVar12 = uVar12 ^ 1;
    cVar2 = *(char *)(iVar11 + 0xc);
  }
  if (cVar2 != '\0') {
    local_1c4._1_3_ = (undefined3)((uint)local_1c4 >> 8);
    local_1c4 = (code *)CONCAT31(local_1c4._1_3_,(char)uVar12);
    local_1c8 = puVar16;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_1c8,&DAT_01858790,&DAT_01858720);
  }
  FUN_016dd1aa(auStack_220,param_3,0x48);
  cVar2 = local_22d;
  iVar4 = iVar11 + 0x10;
  iVar5 = iVar15 + 0xe8;
  iVar6 = iVar15 + 0xf0;
  local_1d8 = &local_22d;
  local_1d4 = iVar6;
  local_1d0 = iVar5;
  local_1cc = iVar4;
  local_c0 = uVar14;
  local_bc = uVar17;
  if (((*(uint *)(iVar15 + 0x198) <= uVar14) ||
      (piVar7 = (int *)(*(int *)(iVar15 + 0x194) + uVar14 * 0xf8), *piVar7 == 3 && piVar7[1] == 0))
     || (piVar7[0x35] != uVar17)) {
    local_1c8 = &local_bc;
    local_1c4 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_1c8,&DAT_01882550);
  }
  puVar8 = (undefined1 *)piVar7[6];
  if (local_1e0 != 0) {
    FUN_010cdcec(local_1e0);
    thunk_FUN_016d3fb4(local_1e0);
  }
  local_c4 = local_1dc;
  local_d4 = 0;
  local_e4 = 0;
  local_f4 = 0;
  local_104 = 0;
  local_118[0] = 0xb;
  uVar9 = FUN_01022864(param_3);
  local_c0 = *param_3;
  local_bc = param_3[1];
  uStack_b8 = param_3[2];
  uStack_b4 = param_3[3];
  uStack_b0 = param_3[4];
  local_ac = param_3[5];
  uStack_a8 = param_3[6];
  uStack_a4 = param_3[7];
  uStack_a0 = param_3[8];
  uStack_9c = param_3[9];
  local_98 = param_3[10];
  uStack_94 = param_3[0xb];
  uStack_90 = param_3[0xc];
  uStack_8c = param_3[0xd];
  uStack_88 = param_3[0xe];
  uStack_84 = param_3[0xf];
  FUN_016dd1aa(auStack_80,local_118,0x58);
  local_123 = 2;
  local_120 = uVar17;
  FUN_016dd1aa(&local_1c8,&local_c0,0x98);
  local_12c = 0;
  local_11c = 4;
  if (cVar2 != '\0') {
    local_11c = 5;
  }
  local_130 = uVar9;
  cVar2 = FUN_006f6b20(iVar6,&local_1c8,iVar4,&local_22c,iVar15 + 0x10,iVar5);
  FUN_0102e068(iVar15 + 0x10,&local_22c,puVar8 != &DAT_3b9aca00);
  if (((uVar12 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(iVar11 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar17 = *puVar16;
    bVar1 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar1);
  *puVar16 = 0;
  if (uVar17 == 2) {
    FUN_016d6968(0xf0,puVar16,0x81,1);
  }
  if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
    *(undefined1 *)(iVar15 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar18 = *puVar19;
    bVar1 = (bool)hasExclusiveAccess(puVar19);
  } while (!bVar1);
  *puVar19 = 0;
  if (uVar18 == 2) {
    FUN_016d6968(0xf0,puVar19,0x81,1);
  }
  if (cVar2 != '\f') {
    *(char *)((int)param_1 + 1) = cVar2;
    *(undefined1 *)param_1 = 3;
    return;
  }
  FUN_0102c1d8(&local_1c8,param_2);
  puVar19 = (uint *)param_2[3];
  do {
    uVar18 = *puVar19;
    bVar1 = (bool)hasExclusiveAccess(puVar19);
  } while (!bVar1);
  *puVar19 = uVar18 + 1;
  puVar16 = (uint *)(uVar18 + 1);
  if (uVar18 < 0x80000000) {
    puVar16 = local_1c8;
    param_2 = param_1;
  }
  if ((int)uVar18 < 0) {
    software_udf(0xfdee,0x68756c);
    return;
  }
  param_2[4] = (int)puVar19;
  *(uint *)((int)param_2 + 9) = CONCAT13((undefined1)iStack_1c0,local_1c4._1_3_);
  param_2[3] = iStack_1c0;
  *(undefined1 *)(param_2 + 2) = local_1c4._0_1_;
  param_2[1] = (int)puVar16;
  *(undefined1 *)param_2 = 5;
  return;
}

