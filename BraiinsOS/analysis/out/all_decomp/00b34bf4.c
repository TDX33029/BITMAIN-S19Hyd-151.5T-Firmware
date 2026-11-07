// FUN_00b34bf4 @ 00b34bf4 size=1040 calls_out=15 calls_in=0
// strings: 

void FUN_00b34bf4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
                 int *param_6,int *param_7,undefined4 *param_8,int *param_9,int *param_10,
                 undefined4 *param_11,int *param_12,undefined4 param_13)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint *puVar18;
  int local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 local_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  int local_360;
  int local_35c;
  int local_358;
  undefined4 local_354 [3];
  undefined1 auStack_348 [224];
  undefined1 auStack_268 [216];
  undefined1 auStack_190 [320];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar15 = *(int *)(param_2 + 0x138);
  uVar16 = *(undefined4 *)(param_2 + 0x134);
  if (iVar15 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(iVar15);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar15);
    }
  }
  FUN_016dd1aa(iVar4,uVar16,iVar15);
  local_354[0] = 0x80000000;
  local_360 = iVar15;
  local_35c = iVar4;
  local_358 = iVar15;
  FUN_00b34698(&local_3a8,&local_360,local_354);
  if (local_3a8 != -0x80000000) {
    param_1[0xcc] = local_3a0;
    param_1[0xcd] = uStack_39c;
    param_1[0xce] = uStack_398;
    param_1[0xcf] = uStack_394;
    param_1[0xd0] = uStack_390;
    param_1[0xd1] = local_38c;
    param_1[0xd2] = uStack_388;
    param_1[0xd3] = uStack_384;
    param_1[0xd4] = uStack_380;
    param_1[0xd5] = uStack_37c;
    param_1[0xd6] = local_378;
    param_1[0xd7] = uStack_374;
    param_1[0xd8] = uStack_370;
    param_1[0xd9] = uStack_36c;
    param_1[0xda] = uStack_368;
    param_1[0xdb] = uStack_364;
    FUN_016dd1aa(auStack_190,param_2,0x140);
    FUN_016dd1aa(auStack_348,param_3,0xe0);
    FUN_016dd1aa(auStack_268,param_4,0xd8);
    local_50 = *param_8;
    uStack_4c = param_8[1];
    uStack_48 = param_8[2];
    uStack_44 = param_8[3];
    uStack_40 = param_8[4];
    local_3c = param_8[5];
    uStack_38 = param_8[6];
    uStack_34 = param_8[7];
    uStack_30 = param_8[8];
    uStack_2c = param_8[9];
    uVar16 = param_11[1];
    uVar7 = param_11[2];
    uVar8 = param_11[3];
    param_1[0xde] = *param_11;
    param_1[0xdf] = uVar16;
    param_1[0xe0] = uVar7;
    param_1[0xe1] = uVar8;
    FUN_016dd1aa(param_1,auStack_348,800);
    param_1[0xe3] = param_13;
    param_1[0xe4] = param_5;
    param_1[200] = param_6;
    param_1[0xc9] = param_7;
    param_1[0xca] = local_3a8;
    param_1[0xe2] = param_12;
    param_1[0xdc] = param_9;
    param_1[0xdd] = param_10;
    param_1[0xcb] = local_3a4;
    return;
  }
  param_1[1] = 0;
  param_1[2] = local_3a4;
  piVar5 = param_12 + 0x3f;
  *param_1 = 2;
  do {
    iVar15 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar15 + -1;
  if (iVar15 == 1) {
    FUN_0163b708(param_12 + 0x3a);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *param_12;
    bVar1 = (bool)hasExclusiveAccess(param_12);
  } while (!bVar1);
  *param_12 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(param_12);
  }
  FUN_00b351e8(param_11);
  if (param_10 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *param_10;
      bVar1 = (bool)hasExclusiveAccess(param_10);
    } while (!bVar1);
    *param_10 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa7b14(param_10);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *param_9;
    bVar1 = (bool)hasExclusiveAccess(param_9);
  } while (!bVar1);
  *param_9 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(param_9);
  }
  FUN_00adc490(param_8);
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *param_7;
    bVar1 = (bool)hasExclusiveAccess(param_7);
  } while (!bVar1);
  *param_7 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_7);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *param_6;
    bVar1 = (bool)hasExclusiveAccess(param_6);
  } while (!bVar1);
  *param_6 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0();
  }
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *param_5;
    bVar1 = (bool)hasExclusiveAccess(param_5);
  } while (!bVar1);
  *param_5 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d030dc();
  }
  FUN_00adc410(param_4);
  if (*(int *)(param_3 + 0xc0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_3 + 0xc4));
  }
  uVar16 = *(undefined4 *)(param_3 + 0xd0);
  FUN_00ce19cc(uVar16,*(undefined4 *)(param_3 + 0xd4));
  if (*(int *)(param_3 + 0xcc) != 0) {
    thunk_FUN_016d3fb4(uVar16);
  }
  if (*(int *)(param_2 + 0x130) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x134));
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0xa4));
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x3c));
  }
  if ((*(uint *)(param_2 + 0x20) & 0x7fffffff) == 0) {
    iVar15 = *(int *)(param_2 + 0x120);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x24));
    iVar15 = *(int *)(param_2 + 0x120);
  }
  if (iVar15 == 0) {
    return;
  }
  iVar15 = *(int *)(param_2 + 0x124);
  if (iVar15 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar9 * uVar17 + iVar9 + -4;
  iVar9 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar9 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar9 - iVar15) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar9 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar17;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar10 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar11 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar10 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar16 = *puVar6;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar6 = uVar16;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar18 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar10 = *puVar18;
      if (uVar13 != uVar10) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar1);
    *puVar18 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar10) {
      return;
    }
  } while( true );
}

